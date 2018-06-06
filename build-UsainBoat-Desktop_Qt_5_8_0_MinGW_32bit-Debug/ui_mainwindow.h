/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QWidget *centralWidget;
    QTabWidget *Tabbox;
    QWidget *LogTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *LogDataBrowser;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *lcd_speed1;
    QLabel *label_2;
    QLabel *label_9;
    QLCDNumber *lcd_speed2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcd_b1l;
    QLabel *label_8;
    QLabel *label_5;
    QLCDNumber *lcd_b1r;
    QLabel *label_4;
    QLCDNumber *lcd_b2r;
    QLCDNumber *lcd_b2l;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *ModeTab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_Idle;
    QRadioButton *radioButton_ManualB1;
    QRadioButton *radioButton_ManualB2;
    QRadioButton *radioButton_Follow;
    QRadioButton *radioButton_Relay;
    QRadioButton *radioButton_Auto;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(370, 431);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Tabbox = new QTabWidget(centralWidget);
        Tabbox->setObjectName(QStringLiteral("Tabbox"));
        Tabbox->setGeometry(QRect(10, 10, 351, 361));
        LogTab = new QWidget();
        LogTab->setObjectName(QStringLiteral("LogTab"));
        verticalLayoutWidget = new QWidget(LogTab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 210, 311, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        LogDataBrowser = new QTextEdit(verticalLayoutWidget);
        LogDataBrowser->setObjectName(QStringLiteral("LogDataBrowser"));

        verticalLayout->addWidget(LogDataBrowser);

        gridLayoutWidget = new QWidget(LogTab);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 310, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lcd_speed1 = new QLCDNumber(gridLayoutWidget);
        lcd_speed1->setObjectName(QStringLiteral("lcd_speed1"));

        gridLayout->addWidget(lcd_speed1, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        lcd_speed2 = new QLCDNumber(gridLayoutWidget);
        lcd_speed2->setObjectName(QStringLiteral("lcd_speed2"));

        gridLayout->addWidget(lcd_speed2, 1, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(LogTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 70, 309, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lcd_b1l = new QLCDNumber(gridLayoutWidget_2);
        lcd_b1l->setObjectName(QStringLiteral("lcd_b1l"));

        gridLayout_2->addWidget(lcd_b1l, 2, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        lcd_b1r = new QLCDNumber(gridLayoutWidget_2);
        lcd_b1r->setObjectName(QStringLiteral("lcd_b1r"));

        gridLayout_2->addWidget(lcd_b1r, 2, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lcd_b2r = new QLCDNumber(gridLayoutWidget_2);
        lcd_b2r->setObjectName(QStringLiteral("lcd_b2r"));

        gridLayout_2->addWidget(lcd_b2r, 3, 2, 1, 1);

        lcd_b2l = new QLCDNumber(gridLayoutWidget_2);
        lcd_b2l->setObjectName(QStringLiteral("lcd_b2l"));

        gridLayout_2->addWidget(lcd_b2l, 3, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        Tabbox->addTab(LogTab, QString());
        ModeTab = new QWidget();
        ModeTab->setObjectName(QStringLiteral("ModeTab"));
        verticalLayoutWidget_3 = new QWidget(ModeTab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 171, 155));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_Idle = new QRadioButton(verticalLayoutWidget_3);
        radioButton_Idle->setObjectName(QStringLiteral("radioButton_Idle"));
        radioButton_Idle->setChecked(true);

        verticalLayout_2->addWidget(radioButton_Idle);

        radioButton_ManualB1 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_ManualB1->setObjectName(QStringLiteral("radioButton_ManualB1"));
        radioButton_ManualB1->setChecked(false);

        verticalLayout_2->addWidget(radioButton_ManualB1);

        radioButton_ManualB2 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_ManualB2->setObjectName(QStringLiteral("radioButton_ManualB2"));

        verticalLayout_2->addWidget(radioButton_ManualB2);

        radioButton_Follow = new QRadioButton(verticalLayoutWidget_3);
        radioButton_Follow->setObjectName(QStringLiteral("radioButton_Follow"));

        verticalLayout_2->addWidget(radioButton_Follow);

        radioButton_Relay = new QRadioButton(verticalLayoutWidget_3);
        radioButton_Relay->setObjectName(QStringLiteral("radioButton_Relay"));

        verticalLayout_2->addWidget(radioButton_Relay);

        radioButton_Auto = new QRadioButton(verticalLayoutWidget_3);
        radioButton_Auto->setObjectName(QStringLiteral("radioButton_Auto"));

        verticalLayout_2->addWidget(radioButton_Auto);


        verticalLayout_3->addLayout(verticalLayout_2);

        Tabbox->addTab(ModeTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);

        retranslateUi(MainWindow);

        Tabbox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "UsainBoat", Q_NULLPTR));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "LogData", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Speed Boat 1", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Speed Boat 2", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Right", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Boat 1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Boat 2", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Left", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Motor current", Q_NULLPTR));
        Tabbox->setTabText(Tabbox->indexOf(LogTab), QApplication::translate("MainWindow", "Logdata", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Modes", Q_NULLPTR));
        radioButton_Idle->setText(QApplication::translate("MainWindow", "Idle", Q_NULLPTR));
        radioButton_ManualB1->setText(QApplication::translate("MainWindow", "Manual Boat 1", Q_NULLPTR));
        radioButton_ManualB2->setText(QApplication::translate("MainWindow", "Manual Boat 2", Q_NULLPTR));
        radioButton_Follow->setText(QApplication::translate("MainWindow", "Follow", Q_NULLPTR));
        radioButton_Relay->setText(QApplication::translate("MainWindow", "Relay", Q_NULLPTR));
        radioButton_Auto->setText(QApplication::translate("MainWindow", "Auto Pilot", Q_NULLPTR));
        Tabbox->setTabText(Tabbox->indexOf(ModeTab), QApplication::translate("MainWindow", "Modes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
