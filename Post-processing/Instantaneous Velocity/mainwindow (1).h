#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_File_triggered();

    void on_actionOutput_triggered();

    void on_pushButton_clicked();

    void on_actionExit_triggered();

    void on_pushButton_2_clicked();

    void on_actionR_InstVelocity_triggered();

    void on_actionTheta_InstVelocity_triggered();

    void on_actionZ_InstVelocity_triggered();

    void on_actionR_MINIMUM_triggered();

    void on_actionTheta_MINIMUM_triggered();

    void on_actionZ_MINIMUM_triggered();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_actionR_Position_triggered();

    void on_actionTheta_triggered();

    void on_actionZ_Position_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
