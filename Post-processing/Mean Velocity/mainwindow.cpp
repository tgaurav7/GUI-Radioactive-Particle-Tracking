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
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
QString filename1;
QString filename2;
QString filename3;
QString filename4;
QString filename5;
QString filename6;
QString  ofilename1 = "vrmean1000.txt";
QString  ofilename2 = "vthemean1000.txt";
QString  ofilename3 = "vzmean1000.txt";
QString  ofilename4 = "rm1000.txt";
QString  ofilename5 = "thetam1000.txt";
QString  ofilename6 = "zm1000.txt";
QString  ofilename7 = "noc1000.txt";

MainWindow::~MainWindow()
{
    delete ui;
}
long double pi  = 3.141592654;


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(0, "button pressed", "in");
    QFile ofile1(ofilename1);
    QFile ofile2(ofilename2);
    QFile ofile3(ofilename3);
    QFile ofile4(ofilename4);
    QFile ofile5(ofilename5);
    QFile ofile6(ofilename6);
    QFile ofile7(ofilename7);
    QFile file1(filename1);
    QFile file2(filename2);
    QFile file3(filename3);
    QFile file4(filename4);
    QFile file5(filename5);
    QFile file6(filename6);
    if(!file1.open(QIODevice::ReadOnly))
    {

        QMessageBox::information( 0, "File Not Opened", file1.errorString());
    return;
    }

    if(!file2.open(QIODevice::ReadOnly))
    {

        QMessageBox::information( 0, "File Not Opened", file2.errorString());
    return;
    }

    if(!file3.open(QIODevice::ReadOnly))
    {

        QMessageBox::information( 0, "File Not Opened", file3.errorString());
    return;
    }

    if(!file4.open(QIODevice::ReadOnly))
    {

        QMessageBox::information( 0, "File Not Opened", file4.errorString());
    return;
    }

    if(!file5.open(QIODevice::ReadOnly))
    {

        QMessageBox::information( 0, "File Not Opened", file5.errorString());
    return;
    }

    if(!file6.open(QIODevice::ReadOnly))
    {

        QMessageBox::information( 0, "File Not Opened", file6.errorString());
    return;
    }


    if(!ofile3.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile3.errorString());
    return;
    }

    if(!ofile4.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile4.errorString());
    return;
    }

    if(!ofile5.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile5.errorString());
    return;
    }

    if(!ofile6.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile6.errorString());
    return;
    }

    if(!ofile7.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile7.errorString());
    return;
    }

    //write files opening

    if(!ofile1.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile1.errorString());
    return;
    }

    if(!ofile2.open(QFile::QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::information(0, "File not opened", ofile2.errorString());
    return;
    }


    //declaring read textstreams

    QTextStream in1(&file1);
    QTextStream in2(&file2);
    QTextStream in3(&file3);
    QTextStream in4(&file4);
    QTextStream in5(&file5);
    QTextStream in6(&file6);

    //declaring write textstreams

    QTextStream out1(&ofile1);
    QTextStream out2(&ofile2);
    QTextStream out3(&ofile3);
    QTextStream out4(&ofile4);
    QTextStream out5(&ofile5);
    QTextStream out6(&ofile6);
    QTextStream out7(&ofile7);

    int i,j,k,n,m,p,parts = 1;
    QString line;
    double d, z, dr, dz, dtheta;

    line = ui ->lineEdit->text();
    QLocale c2(QLocale::C);
   d = c2.toDouble(line);
   line = ui ->lineEdit1->text();
   QMessageBox::information(0, "calc",line);
    z = c2.toDouble(line);
   line = ui ->lineEdit2->text();
    QMessageBox::information(0, "calc",line);
   dr = c2.toDouble(line);
   line = ui ->lineEdit3->text();
    dz = c2.toDouble(line);
    line = ui ->lineEdit4->text();
    parts = c2.toInt(line);
    n = (int)(d/(2*dr));
    dr = (d/(2*n));
    m = (int)(z/dz);
    dz = z/m;
   //Smallest Area  = pi*(dr)*(dr)/parts;
     QMessageBox::information(0, "calc",line);




    double pos[500][100][1000][4] ={0};
    double vrins, vzins, vthetains, rmin, zmin, thetamin;
    //double vrmean =0, vthetamean = 0, vzmean = 0, rm = 0, thetam = 0, zm = 0, noc = 0;
    while(!in1.atEnd())
    {

        line = in1.readLine();
        vrins = c2.toDouble(line);
        QMessageBox::information(0, "in loop",line);

        line = in2.readLine();
        vzins = c2.toDouble(line);

        line = in3.readLine();
        vthetains = c2.toDouble(line);

        line = in4.readLine();
        rmin = c2.toDouble(line);

        line = in5.readLine();
        zmin = c2.toDouble(line);

        line = in6.readLine();
        thetamin = c2.toDouble(line);


        for(i=0;i<n;i++)
        {
            if(rmin<=((i+1)*dr))
            {
                p  = (2*i + 1)*parts;
                dtheta = 2*pi/p;
                 line = c2.toString(p);
                 QMessageBox::information(0, "in loop", line);
                  line = c2.toString(dtheta);
                QMessageBox::information(0, "in loop", line);

                for(j=0;j<m;j++)
                {
                    if(zmin<((j+1)*dz))
                    {
                        for(k=0;k<p;k++)
                        {
                            if(thetamin<((p+1)*dtheta))
                            {

                                pos[i][j][k][0] = 1 + pos[i][j][k][0];
                                pos[i][j][k][1] = ( pos[i][j][k][1]+vrins)/pos[i][j][k][0];
                                pos[i][j][k][2] = ( pos[i][j][k][2]+vzins)/pos[i][j][k][0];
                                pos[i][j][k][3] = ( pos[i][j][k][3]+vthetains)/pos[i][j][k][0];
                            }
                             break;

                        }



                    }

                break;
                    }
            }
         break;
        }



    }


    for(i=0;i<n;i++)
    {

        p  = (2*i + 1)*parts;
        dtheta = 2*pi/p;
        QMessageBox::information(0, "printing", "i");
        QMessageBox::information(0, "printing", "p");
        QMessageBox::information(0, "printing", "dtheta");
        for(j=0;j<m;j++)\
        {
            for(k=0;k<p;k++)
            {
                out4<<(i+1)*dr<<endl;
                out6<<(k+1)*dz<<endl;
                out5<<(j+1)*dtheta<<endl;
                out1<<pos[i][j][k][1]<<endl;
                out2<<pos[i][j][k][3]<<endl;
                out3<<pos[i][j][k][2]<<endl;
                out7<<pos[i][j][k][0]<<endl;
            }


        }
    }

    file3.close();
    file2.close();
    file1.close();
    file4.close();
    file5.close();
    file6.close();

    ofile1.close();
    ofile2.close();
    ofile3.close();
    ofile4.close();
    ofile5.close();
    ofile6.close();
    ofile7.close();





}

void MainWindow::on_actionCLOSE_triggered()
{
    QCoreApplication::exit();
}

void MainWindow::on_actionVrins_triggered()
{

    filename1  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "E://",
                "All files(*.*);; Text File (*.txt);;");
QMessageBox::information(0, "value in", filename1);
}

void MainWindow::on_actionVzins_triggered()
{
    filename2  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "E://",
                "All files(*.*);; Text File (*.txt);;");
    QMessageBox::information(0, "value in", filename2);
}

void MainWindow::on_actionVthetains_triggered()
{
    filename3  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "E://",
                "All files(*.*);; Text File (*.txt);;");
    QMessageBox::information(0, "value in", filename3);
}

void MainWindow::on_actionRzmins_triggered()
{
    filename4  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "E://",
                "All files(*.*);; Text File (*.txt);;");
    QMessageBox::information(0, "value in", filename1);
}



void MainWindow::on_actionRmins_triggered()
{
    filename5  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "E://",
                "All files(*.*);; Text File (*.txt);;");
    QMessageBox::information(0, "value in", filename1);
}


void MainWindow::on_actionTheatamins_triggered()
{
    filename6  = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "E://",
                "All files(*.*);; Text File (*.txt);;");
    QMessageBox::information(0, "value in", filename1);
}

void MainWindow::on_actionVrmean_triggered()
{
     QDesktopServices::openUrl(QUrl( "vrmean1000.txt", QUrl::TolerantMode));
}

void MainWindow::on_actionVzmean_triggered()
{
     QDesktopServices::openUrl(QUrl( "vzmean1000.txt", QUrl::TolerantMode));
}

void MainWindow::on_actionVthemean_triggered()
{
    QDesktopServices::openUrl(QUrl( "vthemean1000.txt", QUrl::TolerantMode));
}

void MainWindow::on_actionRm_triggered()
{
    QDesktopServices::openUrl(QUrl( "rm1000.txt", QUrl::TolerantMode));
}

void MainWindow::on_actionZm_triggered()
{
    QDesktopServices::openUrl(QUrl( "zm1000.txt", QUrl::TolerantMode));
}

void MainWindow::on_actionThetam_triggered()
{
    QDesktopServices::openUrl(QUrl( "thetam1000.txt", QUrl::TolerantMode));
}

void MainWindow::on_actionNOC_triggered()
{
    QDesktopServices::openUrl(QUrl( "noc1000.txt", QUrl::TolerantMode));
}
