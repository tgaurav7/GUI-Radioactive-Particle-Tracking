/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionVrins;
    QAction *actionVzins;
    QAction *actionVthetains;
    QAction *actionRzmins;
    QAction *actionRmins;
    QAction *actionTheatamins;
    QAction *actionCLOSE;
    QAction *actionVrmean;
    QAction *actionVzmean;
    QAction *actionVthemean;
    QAction *actionRm;
    QAction *actionZm;
    QAction *actionThetam;
    QAction *actionNOC;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit4;
    QLabel *label_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit3;
    QMenuBar *menuBar;
    QMenu *menuFiles;
    QMenu *menuInput;
    QMenu *menuOutput;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 345);
        actionVrins = new QAction(MainWindow);
        actionVrins->setObjectName(QStringLiteral("actionVrins"));
        actionVzins = new QAction(MainWindow);
        actionVzins->setObjectName(QStringLiteral("actionVzins"));
        actionVthetains = new QAction(MainWindow);
        actionVthetains->setObjectName(QStringLiteral("actionVthetains"));
        actionRzmins = new QAction(MainWindow);
        actionRzmins->setObjectName(QStringLiteral("actionRzmins"));
        actionRmins = new QAction(MainWindow);
        actionRmins->setObjectName(QStringLiteral("actionRmins"));
        actionTheatamins = new QAction(MainWindow);
        actionTheatamins->setObjectName(QStringLiteral("actionTheatamins"));
        actionCLOSE = new QAction(MainWindow);
        actionCLOSE->setObjectName(QStringLiteral("actionCLOSE"));
        actionVrmean = new QAction(MainWindow);
        actionVrmean->setObjectName(QStringLiteral("actionVrmean"));
        actionVzmean = new QAction(MainWindow);
        actionVzmean->setObjectName(QStringLiteral("actionVzmean"));
        actionVthemean = new QAction(MainWindow);
        actionVthemean->setObjectName(QStringLiteral("actionVthemean"));
        actionRm = new QAction(MainWindow);
        actionRm->setObjectName(QStringLiteral("actionRm"));
        actionZm = new QAction(MainWindow);
        actionZm->setObjectName(QStringLiteral("actionZm"));
        actionThetam = new QAction(MainWindow);
        actionThetam->setObjectName(QStringLiteral("actionThetam"));
        actionNOC = new QAction(MainWindow);
        actionNOC->setObjectName(QStringLiteral("actionNOC"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 190, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 20, 133, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 46, 13));
        lineEdit4 = new QLineEdit(centralWidget);
        lineEdit4->setObjectName(QStringLiteral("lineEdit4"));
        lineEdit4->setGeometry(QRect(170, 160, 141, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(25, 160, 131, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 40, 45, 110));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(170, 39, 135, 111));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit1 = new QLineEdit(widget1);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));

        verticalLayout_2->addWidget(lineEdit1);

        lineEdit2 = new QLineEdit(widget1);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        verticalLayout_2->addWidget(lineEdit2);

        lineEdit3 = new QLineEdit(widget1);
        lineEdit3->setObjectName(QStringLiteral("lineEdit3"));

        verticalLayout_2->addWidget(lineEdit3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 21));
        menuFiles = new QMenu(menuBar);
        menuFiles->setObjectName(QStringLiteral("menuFiles"));
        menuInput = new QMenu(menuFiles);
        menuInput->setObjectName(QStringLiteral("menuInput"));
        menuOutput = new QMenu(menuFiles);
        menuOutput->setObjectName(QStringLiteral("menuOutput"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFiles->menuAction());
        menuFiles->addAction(menuInput->menuAction());
        menuFiles->addAction(menuOutput->menuAction());
        menuFiles->addAction(actionCLOSE);
        menuInput->addAction(actionVrins);
        menuInput->addAction(actionVzins);
        menuInput->addAction(actionVthetains);
        menuInput->addAction(actionRzmins);
        menuInput->addAction(actionRmins);
        menuInput->addAction(actionTheatamins);
        menuOutput->addAction(actionVrmean);
        menuOutput->addAction(actionVzmean);
        menuOutput->addAction(actionVthemean);
        menuOutput->addAction(actionRm);
        menuOutput->addAction(actionZm);
        menuOutput->addAction(actionThetam);
        menuOutput->addAction(actionNOC);
        mainToolBar->addAction(actionVrins);
        mainToolBar->addAction(actionVzins);
        mainToolBar->addAction(actionVthetains);
        mainToolBar->addAction(actionRzmins);
        mainToolBar->addAction(actionRmins);
        mainToolBar->addAction(actionTheatamins);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCLOSE);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionVrmean);
        mainToolBar->addAction(actionVzmean);
        mainToolBar->addAction(actionVthemean);
        mainToolBar->addAction(actionRm);
        mainToolBar->addAction(actionZm);
        mainToolBar->addAction(actionThetam);
        mainToolBar->addAction(actionNOC);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionVrins->setText(QApplication::translate("MainWindow", "vrins", 0));
        actionVzins->setText(QApplication::translate("MainWindow", "vzins", 0));
        actionVthetains->setText(QApplication::translate("MainWindow", "vthetains", 0));
        actionRzmins->setText(QApplication::translate("MainWindow", "zmins", 0));
        actionRmins->setText(QApplication::translate("MainWindow", "rmins", 0));
        actionTheatamins->setText(QApplication::translate("MainWindow", "theatamins", 0));
        actionCLOSE->setText(QApplication::translate("MainWindow", "CLOSE", 0));
        actionVrmean->setText(QApplication::translate("MainWindow", "vrmean", 0));
        actionVzmean->setText(QApplication::translate("MainWindow", "vzmean", 0));
        actionVthemean->setText(QApplication::translate("MainWindow", "vthetamean", 0));
        actionRm->setText(QApplication::translate("MainWindow", "rm", 0));
        actionZm->setText(QApplication::translate("MainWindow", "zm", 0));
        actionThetam->setText(QApplication::translate("MainWindow", "thetam", 0));
        actionNOC->setText(QApplication::translate("MainWindow", "NOC", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Calculate", 0));
        label->setText(QApplication::translate("MainWindow", "Diameter", 0));
        label_6->setText(QApplication::translate("MainWindow", "NO. of parts of first circle", 0));
        label_2->setText(QApplication::translate("MainWindow", "Height", 0));
        label_3->setText(QApplication::translate("MainWindow", "dr", 0));
        label_4->setText(QApplication::translate("MainWindow", "dz", 0));
        menuFiles->setTitle(QApplication::translate("MainWindow", "Files", 0));
        menuInput->setTitle(QApplication::translate("MainWindow", "Input", 0));
        menuOutput->setTitle(QApplication::translate("MainWindow", "Output", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
