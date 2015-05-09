#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap b00("E:/code/QT/my2048/pic/0.jpg");
    QPixmap b01("E:/code/QT/my2048/pic/1.jpg");
    QPixmap b02("E:/code/QT/my2048/pic/2.jpg");
    QPixmap b03("E:/code/QT/my2048/pic/3.jpg");
    QPixmap b04("E:/code/QT/my2048/pic/4.jpg");
    QPixmap b05("E:/code/QT/my2048/pic/5.jpg");
    QPixmap b06("E:/code/QT/my2048/pic/6.jpg");
    QPixmap b07("E:/code/QT/my2048/pic/7.jpg");
    QPixmap b08("E:/code/QT/my2048/pic/8.jpg");
    QPixmap b09("E:/code/QT/my2048/pic/9.jpg");
    QPixmap b10("E:/code/QT/my2048/pic/10.jpg");
    QPixmap b11("E:/code/QT/my2048/pic/11.jpg");
    QPixmap b12("E:/code/QT/my2048/pic/12.jpg");
    QPixmap b13("E:/code/QT/my2048/pic/13.jpg");
    QPixmap b14("E:/code/QT/my2048/pic/14.jpg");
    QPixmap b15("E:/code/QT/my2048/pic/15.jpg");

    /*QPixmap b[16];*/        b[0]=b00;    b[1]=b01;    b[2]=b02;    b[3]=b03;
    b[4]=b04;    b[5]=b05;    b[6]=b06;    b[7]=b07;    b[8]=b08;    b[9]=b09;
    b[10]=b10;   b[11]=b11;   b[12]=b12;   b[13]=b13;   b[14]=b14;   b[15]=b15;

    //default : 0
    for(int i=1;i<20;i++){
        MainWindow::setP(i,b,0);
    }
}

void MainWindow::setP(int p,QPixmap *b,int n){
    switch(p){
        case 1:  ui->pic_p01->setPixmap(b[n]); break;
        case 2:  ui->pic_p02->setPixmap(b[n]); break;
        case 3:  ui->pic_p03->setPixmap(b[n]); break;
        case 4:  ui->pic_p04->setPixmap(b[n]); break;
        case 5:  ui->pic_p05->setPixmap(b[n]); break;
        case 6:  ui->pic_p06->setPixmap(b[n]); break;
        case 7:  ui->pic_p07->setPixmap(b[n]); break;
        case 8:  ui->pic_p08->setPixmap(b[n]); break;
        case 9:  ui->pic_p09->setPixmap(b[n]); break;
        case 10: ui->pic_p10->setPixmap(b[n]); break;
        case 11: ui->pic_p11->setPixmap(b[n]); break;
        case 12: ui->pic_p12->setPixmap(b[n]); break;
        case 13: ui->pic_p13->setPixmap(b[n]); break;
        case 14: ui->pic_p14->setPixmap(b[n]); break;
        case 15: ui->pic_p15->setPixmap(b[n]); break;
        case 16: ui->pic_p16->setPixmap(b[n]); break;
        case 17: ui->pic_p17->setPixmap(b[n]); break;
        case 18: ui->pic_p18->setPixmap(b[n]); break;
        case 19: ui->pic_p19->setPixmap(b[n]); break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
