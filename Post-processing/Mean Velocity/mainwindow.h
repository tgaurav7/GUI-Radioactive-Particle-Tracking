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
    void on_pushButton_clicked();



    void on_actionCLOSE_triggered();

    void on_actionVrins_triggered();

    void on_actionVzins_triggered();

    void on_actionVthetains_triggered();

    void on_actionRzmins_triggered();

    void on_actionRmins_triggered();

    void on_actionTheatamins_triggered();

    void on_actionVrmean_triggered();

    void on_actionVzmean_triggered();

    void on_actionVthemean_triggered();

    void on_actionRm_triggered();

    void on_actionZm_triggered();

    void on_actionThetam_triggered();

    void on_actionNOC_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
