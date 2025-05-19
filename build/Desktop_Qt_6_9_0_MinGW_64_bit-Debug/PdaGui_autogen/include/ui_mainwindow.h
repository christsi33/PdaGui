/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnTable1;
    QPushButton *btnTable2;
    QPushButton *btnTable3;
    QPushButton *btnTable4;
    QPushButton *btnTable5;
    QPushButton *btnTable6;
    QPushButton *btnTable8;
    QPushButton *btnTable7;
    QPushButton *btnTable9;
    QPushButton *btnTableS1;
    QPushButton *btnTableS2;
    QPushButton *btnTableS3;
    QPushButton *btnTableS4;
    QPushButton *btnTableS5;
    QPushButton *btnTableS6;
    QPushButton *btnTableS7;
    QPushButton *btnTableS8;
    QPushButton *btnTableS9;
    QPushButton *btnBrunch;
    QPushButton *btnCoffee;
    QPushButton *btnFood;
    QPushButton *btnDrinks;
    QListWidget *listWidget;
    QSpinBox *spinQuantity;
    QPushButton *btnAddToOrder;
    QPushButton *btnPrintReceipt;
    QLabel *labelTable;
    QListWidget *listWidgetOrder;
    QLineEdit *lineComm;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuPDA_System;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnTable1 = new QPushButton(centralwidget);
        btnTable1->setObjectName("btnTable1");
        btnTable1->setGeometry(QRect(70, 40, 80, 24));
        btnTable2 = new QPushButton(centralwidget);
        btnTable2->setObjectName("btnTable2");
        btnTable2->setGeometry(QRect(180, 40, 80, 24));
        btnTable3 = new QPushButton(centralwidget);
        btnTable3->setObjectName("btnTable3");
        btnTable3->setGeometry(QRect(290, 40, 80, 24));
        btnTable4 = new QPushButton(centralwidget);
        btnTable4->setObjectName("btnTable4");
        btnTable4->setGeometry(QRect(410, 40, 80, 24));
        btnTable5 = new QPushButton(centralwidget);
        btnTable5->setObjectName("btnTable5");
        btnTable5->setGeometry(QRect(40, 80, 80, 24));
        btnTable6 = new QPushButton(centralwidget);
        btnTable6->setObjectName("btnTable6");
        btnTable6->setGeometry(QRect(140, 80, 80, 24));
        btnTable8 = new QPushButton(centralwidget);
        btnTable8->setObjectName("btnTable8");
        btnTable8->setGeometry(QRect(350, 80, 80, 24));
        btnTable7 = new QPushButton(centralwidget);
        btnTable7->setObjectName("btnTable7");
        btnTable7->setGeometry(QRect(250, 80, 80, 24));
        btnTable9 = new QPushButton(centralwidget);
        btnTable9->setObjectName("btnTable9");
        btnTable9->setGeometry(QRect(450, 80, 80, 24));
        btnTableS1 = new QPushButton(centralwidget);
        btnTableS1->setObjectName("btnTableS1");
        btnTableS1->setGeometry(QRect(60, 280, 80, 24));
        btnTableS2 = new QPushButton(centralwidget);
        btnTableS2->setObjectName("btnTableS2");
        btnTableS2->setGeometry(QRect(170, 280, 80, 24));
        btnTableS3 = new QPushButton(centralwidget);
        btnTableS3->setObjectName("btnTableS3");
        btnTableS3->setGeometry(QRect(290, 280, 80, 24));
        btnTableS4 = new QPushButton(centralwidget);
        btnTableS4->setObjectName("btnTableS4");
        btnTableS4->setGeometry(QRect(390, 280, 80, 24));
        btnTableS5 = new QPushButton(centralwidget);
        btnTableS5->setObjectName("btnTableS5");
        btnTableS5->setGeometry(QRect(30, 320, 80, 24));
        btnTableS6 = new QPushButton(centralwidget);
        btnTableS6->setObjectName("btnTableS6");
        btnTableS6->setGeometry(QRect(130, 320, 80, 24));
        btnTableS7 = new QPushButton(centralwidget);
        btnTableS7->setObjectName("btnTableS7");
        btnTableS7->setGeometry(QRect(230, 320, 80, 24));
        btnTableS8 = new QPushButton(centralwidget);
        btnTableS8->setObjectName("btnTableS8");
        btnTableS8->setGeometry(QRect(340, 320, 80, 24));
        btnTableS9 = new QPushButton(centralwidget);
        btnTableS9->setObjectName("btnTableS9");
        btnTableS9->setGeometry(QRect(450, 320, 80, 24));
        btnBrunch = new QPushButton(centralwidget);
        btnBrunch->setObjectName("btnBrunch");
        btnBrunch->setGeometry(QRect(30, 140, 80, 24));
        btnCoffee = new QPushButton(centralwidget);
        btnCoffee->setObjectName("btnCoffee");
        btnCoffee->setGeometry(QRect(130, 140, 80, 24));
        btnFood = new QPushButton(centralwidget);
        btnFood->setObjectName("btnFood");
        btnFood->setGeometry(QRect(230, 140, 80, 24));
        btnDrinks = new QPushButton(centralwidget);
        btnDrinks->setObjectName("btnDrinks");
        btnDrinks->setGeometry(QRect(340, 140, 80, 24));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 360, 256, 192));
        spinQuantity = new QSpinBox(centralwidget);
        spinQuantity->setObjectName("spinQuantity");
        spinQuantity->setGeometry(QRect(300, 360, 51, 31));
        spinQuantity->setMinimum(1);
        btnAddToOrder = new QPushButton(centralwidget);
        btnAddToOrder->setObjectName("btnAddToOrder");
        btnAddToOrder->setGeometry(QRect(30, 190, 101, 31));
        btnPrintReceipt = new QPushButton(centralwidget);
        btnPrintReceipt->setObjectName("btnPrintReceipt");
        btnPrintReceipt->setGeometry(QRect(150, 190, 121, 31));
        labelTable = new QLabel(centralwidget);
        labelTable->setObjectName("labelTable");
        labelTable->setGeometry(QRect(10, 0, 71, 31));
        listWidgetOrder = new QListWidget(centralwidget);
        listWidgetOrder->setObjectName("listWidgetOrder");
        listWidgetOrder->setGeometry(QRect(500, 110, 256, 192));
        lineComm = new QLineEdit(centralwidget);
        lineComm->setObjectName("lineComm");
        lineComm->setGeometry(QRect(300, 400, 231, 31));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuPDA_System = new QMenu(menubar);
        menuPDA_System->setObjectName("menuPDA_System");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuPDA_System->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnTable1->setText(QCoreApplication::translate("MainWindow", "Table 1", nullptr));
        btnTable2->setText(QCoreApplication::translate("MainWindow", "Table 2", nullptr));
        btnTable3->setText(QCoreApplication::translate("MainWindow", "Table 3", nullptr));
        btnTable4->setText(QCoreApplication::translate("MainWindow", "Table 4", nullptr));
        btnTable5->setText(QCoreApplication::translate("MainWindow", "Table5", nullptr));
        btnTable6->setText(QCoreApplication::translate("MainWindow", "Table 6", nullptr));
        btnTable8->setText(QCoreApplication::translate("MainWindow", "Table 8", nullptr));
        btnTable7->setText(QCoreApplication::translate("MainWindow", "Table 7", nullptr));
        btnTable9->setText(QCoreApplication::translate("MainWindow", "Table 9", nullptr));
        btnTableS1->setText(QCoreApplication::translate("MainWindow", "Table S1", nullptr));
        btnTableS2->setText(QCoreApplication::translate("MainWindow", "Table S2", nullptr));
        btnTableS3->setText(QCoreApplication::translate("MainWindow", "Table S3", nullptr));
        btnTableS4->setText(QCoreApplication::translate("MainWindow", "Table S4", nullptr));
        btnTableS5->setText(QCoreApplication::translate("MainWindow", "Table S5", nullptr));
        btnTableS6->setText(QCoreApplication::translate("MainWindow", "Table S6", nullptr));
        btnTableS7->setText(QCoreApplication::translate("MainWindow", "Table S7", nullptr));
        btnTableS8->setText(QCoreApplication::translate("MainWindow", "Table S8", nullptr));
        btnTableS9->setText(QCoreApplication::translate("MainWindow", "Table S9", nullptr));
        btnBrunch->setText(QCoreApplication::translate("MainWindow", "Brunch", nullptr));
        btnCoffee->setText(QCoreApplication::translate("MainWindow", "Coffee", nullptr));
        btnFood->setText(QCoreApplication::translate("MainWindow", "Food", nullptr));
        btnDrinks->setText(QCoreApplication::translate("MainWindow", "Drinks", nullptr));
        btnAddToOrder->setText(QCoreApplication::translate("MainWindow", "ADD TO ORDER", nullptr));
        btnPrintReceipt->setText(QCoreApplication::translate("MainWindow", "PRINT RECEIPT", nullptr));
        labelTable->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuPDA_System->setTitle(QCoreApplication::translate("MainWindow", "PDA System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
