#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include <QLocale>
#include <QDesktopServices>
#include <QtCore/qmath.h>
#include <QDataStream>
long double pi  = 3.141592654;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString filename1, filename2, filename3;



void MainWindow::on_actionOpen_File_triggered()
{


}

void MainWindow::on_actionOutput_triggered()
{

}


QString  ofilename1 = "E:\\InstVelocity\vrins1000.txt";
QString  ofilename2 = "E:\\InstVelocity\vtheins1000.txt";
QString  ofilename3 = "E:\\InstVelocity\vzins1000.txt";
QString  ofilename4 = "E:\\InstVelocity\rmins1000.txt";
QString  ofilename5 = "E:\\InstVelocity\thetamins1000.txt";
QString  ofilename6 = "E:\\InstVelocity\zmins1000.txt";


QFile ofile1 (ofilename1);
QFile ofile2 (ofilename2);
QFile ofile3 (ofilename3);
QFile ofile4 (ofilename4);
QFile ofile5 (ofilename5);
QFile ofile6 (ofilename6);

QFile file1 (filename1);
QFile file2 (filename2);
QFile file3 (filename3);


     //opening all files



     //declaring read textstreams

     QTextStream in1(&file1);
     QTextStream in2(&file2);
     QTextStream in3(&file3);

      //declaring write textstreams

        QTextStream out1(&ofile1);
        QTextStream out2(&ofile2);
        QTextStream out3(&ofile3);
        QTextStream out4(&ofile4);
        QTextStream out5(&ofile5);
        QTextStream out6(&ofile6);




void MainWindow::on_pushButton_clicked()
{


    if(!file1.open(QIODevice::ReadWrite))
    {
        QMessageBox::information( 0, "File Not Opened", file1.errorString());
    return;
    }

    if(!file2.open(QIODevice::ReadWrite))
    {
        QMessageBox::information( 0, "File Not Opened", file2.errorString());
    return;
    }

    if(!file3.open(QIODevice::ReadWrite))
    {
        QMessageBox::information( 0, "File Not Opened", file3.errorString());
    return;
    }

    //write files opening

    if(!ofile1.open(QFile::QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile1.errorString());
    return;
    }

    if(!ofile2.open(QFile::QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile2.errorString());
    return;
    }

    if(!ofile3.open(QFile::QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile3.errorString());
    return;
    }

    if(!ofile4.open(QFile::QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile4.errorString());
    return;
    }

    if(!ofile5.open(QFile::QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile5.errorString());
    return;
    }

    if(!ofile6.open(QFile::QIODevice::ReadWrite|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile6.errorString());
    return;
    }



//initializing

      double tim = 0.02, theta[2], x[2], y[2];
      double rmid, zmid, thetamid, xmid, ymid;
      double vr, vz, vthe, m2, m1, n2, n1, p2, p1;
     QString line;

//reading rpos[line1] for m1
     line = in1.readLine();
     QLocale c1(QLocale::C);
    m1 = c1.toDouble(line);

//reading thetapos[line1] for n1
    line = in2.readLine();
    QLocale c2(QLocale::C);
   n1 = c2.toDouble(line);

   //reading zpos[line1] for p1
   line = in3.readLine();
   QLocale c3(QLocale::C);
  p1 = c3.toDouble(line);



  while(!file1.atEnd())
  {//reading and converting
      line = in1.readLine();
      m2 = c1.toDouble(line);

     line = in2.readLine();
     n2 = c2.toDouble(line);


    line = in3.readLine();
    p2 = c3.toDouble(line);





       theta[0] = n1*pi/180;
       theta[1] = n2*pi/180;

       zmid = (p2 + p1)/2;
       rmid = 0.5*(qSqrt(qPow((m2),2)+qPow((m1),2) + (2*m1*m2*qCos(theta[0]-theta[1]))));

       x[0] = m1*qCos(theta[0]);
       x[1] = m2*qCos(theta[1]);
       y[0] = m1*qSin(theta[0]);
       y[1] = m2*qSin(theta[1]);

       xmid = (x[0]+x[1])/2;
       ymid = (y[0]+y[1])/2;
       thetamid = qAtan2(ymid, xmid);


       vr =(2*((m2)*qCos(theta[1]-thetamid)-rmid))/(tim*10);
       vthe=2*((m2)*qSin(theta[1]-thetamid))/(tim*10);
       vz=(p2-p1)/(tim*10);

       m1=m2;
       n1=n2;
       p1=p2;

   out1 << vr << endl ;
   out2 << vthe << endl ;
   out3 << vz << endl ;
   out4 << rmid << endl ;
   out5 << thetamid << endl ;
   out6 << zmid << endl ;

 }
    file3.close();
    file2.close();
    file1.close();

    ofile1.close();
    ofile2.close();
    ofile3.close();
    ofile4.close();
    ofile5.close();
    ofile6.close();


}

void MainWindow::on_actionExit_triggered()
{
    QCoreApplication::exit();
}

void MainWindow::on_pushButton_2_clicked()
{
  ui->textBrowser->setText(out1.readAll());
}

//opening output files

void MainWindow::on_actionR_InstVelocity_triggered()
{
    QDesktopServices::openUrl(QUrl("file:///" + ofilename1, QUrl::TolerantMode));
}


void MainWindow::on_actionTheta_InstVelocity_triggered()
{
    QDesktopServices::openUrl(QUrl("file:///" + ofilename2, QUrl::TolerantMode));
}

void MainWindow::on_actionZ_InstVelocity_triggered()
{
    QDesktopServices::openUrl(QUrl("file:///" + ofilename3, QUrl::TolerantMode));
}

void MainWindow::on_actionR_MINIMUM_triggered()
{
    QDesktopServices::openUrl(QUrl("file:///" + ofilename4, QUrl::TolerantMode));
}

void MainWindow::on_actionTheta_MINIMUM_triggered()
{
    QDesktopServices::openUrl(QUrl("file:///" + ofilename5, QUrl::TolerantMode));
}

void MainWindow::on_actionZ_MINIMUM_triggered()
{
    QDesktopServices::openUrl(QUrl("file:///" + ofilename6, QUrl::TolerantMode));
}

//showing files in text browser

void MainWindow::on_pushButton_8_clicked()
{
     ui->textBrowser->setText(in1.readAll());
}

void MainWindow::on_pushButton_9_clicked()
{
     ui->textBrowser->setText(in2.readAll());
}

void MainWindow::on_pushButton_10_clicked()
{
     ui->textBrowser->setText(in3.readAll());
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textBrowser->setText(out2.readAll());
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->textBrowser->setText(out3.readAll());
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser->setText(out4.readAll());
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textBrowser->setText(out5.readAll());
}

void MainWindow::on_pushButton_7_clicked()
{
     ui->textBrowser->setText(out6.readAll());
}

//filedialog to select input files


void MainWindow::on_actionR_Position_triggered()
{
    filename1  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C://",
                "All files(*.*);; Text File (*.txt);;");
     ui->textBrowser->setText(in1.readAll());
}

void MainWindow::on_actionTheta_triggered()
{
    filename2  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C://",
                "All files(*.*);; Text File (*.txt);;");
    
     ui->textBrowser->setText(in2.readAll());
}

void MainWindow::on_actionZ_Position_triggered()
{
    filename3  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "C://",
                "All files(*.*);; Text File (*.txt);;");
     ui->textBrowser->setText(in3.readAll());
}
