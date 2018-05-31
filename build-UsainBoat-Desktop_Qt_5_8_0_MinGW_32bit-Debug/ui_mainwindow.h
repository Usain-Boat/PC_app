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
    QWidget *ModeTab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *LogTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *LogDataBrowser;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdNumber_2;
    QLabel *label_8;
    QLabel *label_5;
    QLCDNumber *lcdNumber_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_4;
    QLabel *label_7;
    QLabel *label_6;
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
        ModeTab = new QWidget();
        ModeTab->setObjectName(QStringLiteral("ModeTab"));
        verticalLayoutWidget_3 = new QWidget(ModeTab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 171, 121));
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
        radioButton_2 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setChecked(true);

        verticalLayout_2->addWidget(radioButton_2);

        radioButton = new QRadioButton(verticalLayoutWidget_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_3 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        Tabbox->addTab(ModeTab, QString());
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
        gridLayoutWidget->setGeometry(QRect(10, 10, 310, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(gridLayoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(LogTab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 70, 309, 131));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdNumber_2 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        gridLayout_2->addWidget(lcdNumber_2, 2, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        gridLayout_2->addWidget(lcdNumber_3, 2, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        lcdNumber_5 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        gridLayout_2->addWidget(lcdNumber_5, 3, 2, 1, 1);

        lcdNumber_4 = new QLCDNumber(gridLayoutWidget_2);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        gridLayout_2->addWidget(lcdNumber_4, 3, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        Tabbox->addTab(LogTab, QString());
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
        label_3->setText(QApplication::translate("MainWindow", "Modes", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "Boat 1 Leads", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "Boat 2 Leads", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "Relay", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "Sprint", Q_NULLPTR));
        Tabbox->setTabText(Tabbox->indexOf(ModeTab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "LogData", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Speed", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Right", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Boat 1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Boat 2", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Left", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Motor current", Q_NULLPTR));
        Tabbox->setTabText(Tabbox->indexOf(LogTab), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
