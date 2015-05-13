/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *pic_bk;
    QLabel *pic_p10;
    QLabel *pic_p09;
    QLabel *pic_p08;
    QLabel *pic_p11;
    QLabel *pic_p12;
    QLabel *pic_p01;
    QLabel *pic_p04;
    QLabel *pic_p02;
    QLabel *pic_p03;
    QLabel *pic_p05;
    QLabel *pic_p06;
    QLabel *pic_p07;
    QLabel *pic_p13;
    QLabel *pic_p14;
    QLabel *pic_p15;
    QLabel *pic_p16;
    QLabel *pic_p17;
    QLabel *pic_p18;
    QLabel *pic_p19;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QLabel *gameover;
    QLabel *score_display;
    QLabel *score_title;
    QLabel *best_title;
    QLabel *best_display;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 800);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pic_bk = new QLabel(centralWidget);
        pic_bk->setObjectName(QStringLiteral("pic_bk"));
        pic_bk->setGeometry(QRect(0, 0, 600, 800));
        pic_bk->setPixmap(QPixmap(QString::fromUtf8("../pic/bg.jpg")));
        pic_p10 = new QLabel(centralWidget);
        pic_p10->setObjectName(QStringLiteral("pic_p10"));
        pic_p10->setGeometry(QRect(250, 400, 100, 100));
        pic_p09 = new QLabel(centralWidget);
        pic_p09->setObjectName(QStringLiteral("pic_p09"));
        pic_p09->setGeometry(QRect(250, 300, 100, 100));
        pic_p08 = new QLabel(centralWidget);
        pic_p08->setObjectName(QStringLiteral("pic_p08"));
        pic_p08->setGeometry(QRect(250, 200, 100, 100));
        pic_p11 = new QLabel(centralWidget);
        pic_p11->setObjectName(QStringLiteral("pic_p11"));
        pic_p11->setGeometry(QRect(250, 500, 100, 100));
        pic_p12 = new QLabel(centralWidget);
        pic_p12->setObjectName(QStringLiteral("pic_p12"));
        pic_p12->setGeometry(QRect(250, 600, 100, 100));
        pic_p01 = new QLabel(centralWidget);
        pic_p01->setObjectName(QStringLiteral("pic_p01"));
        pic_p01->setGeometry(QRect(50, 300, 100, 100));
        pic_p04 = new QLabel(centralWidget);
        pic_p04->setObjectName(QStringLiteral("pic_p04"));
        pic_p04->setGeometry(QRect(150, 250, 100, 100));
        pic_p02 = new QLabel(centralWidget);
        pic_p02->setObjectName(QStringLiteral("pic_p02"));
        pic_p02->setGeometry(QRect(50, 400, 100, 100));
        pic_p03 = new QLabel(centralWidget);
        pic_p03->setObjectName(QStringLiteral("pic_p03"));
        pic_p03->setGeometry(QRect(50, 500, 100, 100));
        pic_p05 = new QLabel(centralWidget);
        pic_p05->setObjectName(QStringLiteral("pic_p05"));
        pic_p05->setGeometry(QRect(150, 350, 100, 100));
        pic_p06 = new QLabel(centralWidget);
        pic_p06->setObjectName(QStringLiteral("pic_p06"));
        pic_p06->setGeometry(QRect(150, 450, 100, 100));
        pic_p07 = new QLabel(centralWidget);
        pic_p07->setObjectName(QStringLiteral("pic_p07"));
        pic_p07->setGeometry(QRect(150, 550, 100, 100));
        pic_p13 = new QLabel(centralWidget);
        pic_p13->setObjectName(QStringLiteral("pic_p13"));
        pic_p13->setGeometry(QRect(350, 250, 100, 100));
        pic_p14 = new QLabel(centralWidget);
        pic_p14->setObjectName(QStringLiteral("pic_p14"));
        pic_p14->setGeometry(QRect(350, 350, 100, 100));
        pic_p15 = new QLabel(centralWidget);
        pic_p15->setObjectName(QStringLiteral("pic_p15"));
        pic_p15->setGeometry(QRect(350, 450, 100, 100));
        pic_p16 = new QLabel(centralWidget);
        pic_p16->setObjectName(QStringLiteral("pic_p16"));
        pic_p16->setGeometry(QRect(350, 550, 100, 100));
        pic_p17 = new QLabel(centralWidget);
        pic_p17->setObjectName(QStringLiteral("pic_p17"));
        pic_p17->setGeometry(QRect(450, 300, 100, 100));
        pic_p18 = new QLabel(centralWidget);
        pic_p18->setObjectName(QStringLiteral("pic_p18"));
        pic_p18->setGeometry(QRect(450, 400, 100, 100));
        pic_p19 = new QLabel(centralWidget);
        pic_p19->setObjectName(QStringLiteral("pic_p19"));
        pic_p19->setGeometry(QRect(450, 500, 100, 100));
        pushButton1 = new QPushButton(centralWidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(40, 150, 100, 30));
        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(180, 150, 100, 30));
        gameover = new QLabel(centralWidget);
        gameover->setObjectName(QStringLiteral("gameover"));
        gameover->setGeometry(QRect(100, 300, 400, 200));
        score_display = new QLabel(centralWidget);
        score_display->setObjectName(QStringLiteral("score_display"));
        score_display->setGeometry(QRect(430, 75, 140, 50));
        score_display->setTextFormat(Qt::RichText);
        score_title = new QLabel(centralWidget);
        score_title->setObjectName(QStringLiteral("score_title"));
        score_title->setGeometry(QRect(430, 30, 140, 45));
        score_title->setTextFormat(Qt::RichText);
        best_title = new QLabel(centralWidget);
        best_title->setObjectName(QStringLiteral("best_title"));
        best_title->setGeometry(QRect(280, 30, 140, 45));
        best_title->setTextFormat(Qt::RichText);
        best_display = new QLabel(centralWidget);
        best_display->setObjectName(QStringLiteral("best_display"));
        best_display->setGeometry(QRect(280, 75, 140, 50));
        best_display->setTextFormat(Qt::RichText);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 140, 110, 100));
        label->setPixmap(QPixmap(QString::fromUtf8("../pic/dir.jpg")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 250, 90));
        pushButton3 = new QPushButton(centralWidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(320, 150, 100, 30));
        MainWindow->setCentralWidget(centralWidget);
        pic_bk->raise();
        pic_p10->raise();
        pic_p09->raise();
        pic_p08->raise();
        pic_p11->raise();
        pic_p12->raise();
        pic_p01->raise();
        pic_p04->raise();
        pic_p02->raise();
        pic_p03->raise();
        pic_p05->raise();
        pic_p06->raise();
        pic_p07->raise();
        pic_p13->raise();
        pic_p14->raise();
        pic_p15->raise();
        pic_p16->raise();
        pic_p17->raise();
        pic_p18->raise();
        pic_p19->raise();
        pushButton1->raise();
        pushButton2->raise();
        score_display->raise();
        score_title->raise();
        best_title->raise();
        best_display->raise();
        label->raise();
        gameover->raise();
        label_2->raise();
        pushButton3->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pic_bk->setText(QString());
        pic_p10->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p09->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p08->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p11->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p12->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p01->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p04->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p02->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p03->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p05->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p06->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p07->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p13->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p14->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p15->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p16->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p17->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p18->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pic_p19->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton1->setText(QApplication::translate("MainWindow", "Start/Restart(Z)", 0));
        pushButton2->setText(QApplication::translate("MainWindow", "AutoRun(X)", 0));
        gameover->setText(QString());
        score_display->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; color:#ffffff;\">0</span></p></body></html>", 0));
        score_title->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#ffffff;\">SCORE</span></p></body></html>", 0));
        best_title->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:#ffffff;\">BEST</span></p></body></html>", 0));
        best_display->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; color:#ffffff;\">0</span></p></body></html>", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; font-style:italic; color:#ffffff;\">MY2048</span></p></body></html>", 0));
        pushButton3->setText(QApplication::translate("MainWindow", "Undo(C)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
