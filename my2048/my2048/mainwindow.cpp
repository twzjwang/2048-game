#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    board(20),temp_board(20),board_for_compare(20)
{
    ui->setupUi(this);

    srand((unsigned)time(NULL));

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
        MainWindow::setP(i,0);
    }
    MainWindow::Creat();
    MainWindow::Creat();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//show board
void MainWindow::myShow(){
    for(int i=1;i<20;i++){
        MainWindow::setP(i,board[i]);
    }
    MainWindow::show();
}

//change picture
void MainWindow::setP(int p,int n){
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

//creat new number
bool MainWindow::Creat(){
    QMutex pause;
    int temp_p=0,temp_num=1,b=0;
    for(int i=1;i<=16;i++){
        if(board[i]==0)
            b=1;
    }
    if(b==0){//game over
        MainWindow::gameOver();
        return 0;
    }
    //choose the position to creat number
    do{
        temp_p=rand()%19+1;
    }while(board[temp_p]!=0);

    //randomly choose number 1(80%) 2(20%)
    if(rand()%5==0)
        temp_num=2;

    //input vector
    board[temp_p]=temp_num;
    return 1;
}

void MainWindow::on_pushButton1_clicked(){
    ui->gameover->clear();
    //clear board
    for(int i=1;i<20;i++)
        board[i]=0;

    //begin with two given number
    MainWindow::Creat();
    MainWindow::Creat();
    MainWindow::myShow();

}

void MainWindow::keyPressEvent(QKeyEvent *event){
    //press S
    if(event->key()==Qt::Key_S){
        if(MainWindow::dir_S()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press A
    if(event->key()==Qt::Key_A){
        if(MainWindow::dir_A()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press Q
    if(event->key()==Qt::Key_Q){
        if(MainWindow::dir_Q()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press W
    if(event->key()==Qt::Key_W){
        if(MainWindow::dir_W()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press E
    if(event->key()==Qt::Key_E){
        if(MainWindow::dir_E()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press D
    if(event->key()==Qt::Key_D){
        if(MainWindow::dir_D()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press X
    if(event->key()==Qt::Key_X){
        MainWindow::autoRun();
    }

    //press Z
    if(event->key()==Qt::Key_Z){
        MainWindow::on_pushButton1_clicked();
    }
}

void MainWindow::do_temp_board(){
    bool p[20]={0};
    int t,z,s;
    //column 1
    for(int i=2;i>=1;i--){
        //last 0
        z=0;
        t=i+1;
        while(temp_board[t]==0 && t<=3 && temp_board[i]!=0){
            z=t;
            t++;
        }

        //next same num
        s=0;
        t=i+1;
        while(t<=3){
            if(temp_board[i]==0)
                break;
            else if(temp_board[t]!=temp_board[i]&&temp_board[t]!=0)
                break;
            else if(temp_board[t]==temp_board[i]){
                if(p[s]==0)
                    s=t;
                break;
            }
            t++;
        }

        //combine
        if(s==0&&z==0);
        else if(s>z){
            temp_board[s]=temp_board[i]+1;
            temp_board[i]=0;
            p[s]=1;
        }
        else{
            temp_board[z]=temp_board[i];
            temp_board[s]=0;
            temp_board[i]=0;
        }
        //cout<<" i : "<<i<<" z : "<<z<<" s : "<<s<<endl;
    }

    //column 2
    for(int i=6;i>=4;i--){
        //last 0
        z=0;
        t=i+1;
        while(temp_board[t]==0 && t<=7 && temp_board[i]!=0){
            z=t;
            t++;
        }

        //next same num
        s=0;
        t=i+1;
        while(t<=7){
            if(temp_board[i]==0)
                break;
            else if(temp_board[t]!=temp_board[i]&&temp_board[t]!=0)
                break;
            else if(temp_board[t]==temp_board[i]){
                if(p[s]==0)
                    s=t;
                break;
            }
            t++;
        }

        //combine
        if(s==0&&z==0);
        else if(s>z){
            temp_board[s]=temp_board[i]+1;
            temp_board[i]=0;
            p[s]=1;
        }
        else{
            temp_board[z]=temp_board[i];
            temp_board[s]=0;
            temp_board[i]=0;
        }
        //cout<<" i : "<<i<<" z : "<<z<<" s : "<<s<<endl;
    }

    //column 3
    for(int i=11;i>=8;i--){
        //last 0
        z=0;
        t=i+1;
        while(temp_board[t]==0 && t<=12 && temp_board[i]!=0){
            z=t;
            t++;
        }

        //next same num
        s=0;
        t=i+1;
        while(t<=12){
            if(temp_board[i]==0)
                break;
            else if(temp_board[t]!=temp_board[i]&&temp_board[t]!=0)
                break;
            else if(temp_board[t]==temp_board[i]){
                if(p[s]==0)
                    s=t;
                break;
            }
            t++;
        }

        //combine
        if(s==0&&z==0);
        else if(s>z){
            temp_board[s]=temp_board[i]+1;
            temp_board[i]=0;
            p[s]=1;
        }
        else{
            temp_board[z]=temp_board[i];
            temp_board[s]=0;
            temp_board[i]=0;
        }
        /*cout<<" i : "<<i<<" z : "<<z<<" s : "<<s<<endl;
        cout<<" b8 : "<<temp_board[8]<<endl;
        cout<<" b9 : "<<temp_board[9]<<endl;
        cout<<" b10 : "<<temp_board[10]<<endl;
        cout<<" b11 : "<<temp_board[11]<<endl;
        cout<<" b12 : "<<temp_board[12]<<endl;*/
    }

    //column 4
    for(int i=15;i>=13;i--){
        //last 0
        z=0;
        t=i+1;
        while(temp_board[t]==0 && t<=16 && temp_board[i]!=0){
            z=t;
            t++;
        }

        //next same num
        s=0;
        t=i+1;
        while(t<=16){
            if(temp_board[i]==0)
                break;
            else if(temp_board[t]!=temp_board[i]&&temp_board[t]!=0)
                break;
            else if(temp_board[t]==temp_board[i]){
                if(p[s]==0)
                    s=t;
                break;
            }
            t++;
        }

        //combine
        if(s==0&&z==0);
        else if(s>z){
            temp_board[s]=temp_board[i]+1;
            temp_board[i]=0;
            p[s]=1;
        }
        else{
            temp_board[z]=temp_board[i];
            temp_board[s]=0;
            temp_board[i]=0;
        }
        //cout<<" i : "<<i<<" z : "<<z<<" s : "<<s<<endl;
    }

    //column 5
    for(int i=18;i>=17;i--){
        //last 0
        z=0;
        t=i+1;
        while(temp_board[t]==0 && t<=19 && temp_board[i]!=0){
            z=t;
            t++;
        }

        //next same num
        s=0;
        t=i+1;
        while(t<=19){
            if(temp_board[i]==0)
                break;
            else if(temp_board[t]!=temp_board[i]&&temp_board[t]!=0)
                break;
            else if(temp_board[t]==temp_board[i]){
                if(p[s]==0)
                    s=t;
                break;
            }
            t++;
        }

        //combine
        if(s==0&&z==0);
        else if(s>z){
            temp_board[s]=temp_board[i]+1;
            temp_board[i]=0;
            p[s]=1;
        }
        else{
            temp_board[z]=temp_board[i];
            temp_board[s]=0;
            temp_board[i]=0;
        }
        //cout<<" i : "<<i<<" z : "<<z<<" s : "<<s<<endl;
    }
}

//when 'S' is pressed
bool MainWindow::dir_S(){
    temp_board=board;

    board_for_compare=temp_board;
    MainWindow::do_temp_board();
    if(board_for_compare==temp_board)
        return 0;

    board=temp_board;

    return 1;
}

bool MainWindow::dir_A(){
    temp_board[1]=board[8];
    temp_board[2]=board[4];
    temp_board[3]=board[1];
    temp_board[4]=board[13];
    temp_board[5]=board[9];
    temp_board[6]=board[5];
    temp_board[7]=board[2];
    temp_board[8]=board[17];
    temp_board[9]=board[14];
    temp_board[10]=board[10];
    temp_board[11]=board[6];
    temp_board[12]=board[3];
    temp_board[13]=board[18];
    temp_board[14]=board[15];
    temp_board[15]=board[11];
    temp_board[16]=board[7];
    temp_board[17]=board[19];
    temp_board[18]=board[16];
    temp_board[19]=board[12];

    board_for_compare=temp_board;
    MainWindow::do_temp_board();
    if(board_for_compare==temp_board)
        return 0;

    board[8]=temp_board[1];
    board[4]=temp_board[2];
    board[1]=temp_board[3];
    board[13]=temp_board[4];
    board[9]=temp_board[5];
    board[5]=temp_board[6];
    board[2]=temp_board[7];
    board[17]=temp_board[8];
    board[14]=temp_board[9];
    board[10]=temp_board[10];
    board[6]=temp_board[11];
    board[3]=temp_board[12];
    board[18]=temp_board[13];
    board[15]=temp_board[14];
    board[11]=temp_board[15];
    board[7]=temp_board[16];
    board[19]=temp_board[17];
    board[16]=temp_board[18];
    board[12]=temp_board[19];

    return 1;
}

bool MainWindow::dir_Q(){
    temp_board[1]=board[17];
    temp_board[2]=board[13];
    temp_board[3]=board[8];
    temp_board[4]=board[18];
    temp_board[5]=board[14];
    temp_board[6]=board[9];
    temp_board[7]=board[4];
    temp_board[8]=board[19];
    temp_board[9]=board[15];
    temp_board[10]=board[10];
    temp_board[11]=board[5];
    temp_board[12]=board[1];
    temp_board[13]=board[16];
    temp_board[14]=board[11];
    temp_board[15]=board[6];
    temp_board[16]=board[2];
    temp_board[17]=board[12];
    temp_board[18]=board[7];
    temp_board[19]=board[3];

    board_for_compare=temp_board;
    MainWindow::do_temp_board();
    if(board_for_compare==temp_board)
        return 0;

    board[17]=temp_board[1];
    board[13]=temp_board[2];
    board[8]=temp_board[3];
    board[18]=temp_board[4];
    board[14]=temp_board[5];
    board[9]=temp_board[6];
    board[4]=temp_board[7];
    board[19]=temp_board[8];
    board[15]=temp_board[9];
    board[10]=temp_board[10];
    board[5]=temp_board[11];
    board[1]=temp_board[12];
    board[16]=temp_board[13];
    board[11]=temp_board[14];
    board[6]=temp_board[15];
    board[2]=temp_board[16];
    board[12]=temp_board[17];
    board[7]=temp_board[18];
    board[3]=temp_board[19];

    return 1;
}

bool MainWindow::dir_W(){
    for(int i=1;i<=19;i++)
        temp_board[i]=board[20-i];

    board_for_compare=temp_board;
    MainWindow::do_temp_board();
    if(board_for_compare==temp_board)
        return 0;

    for(int i=1;i<=19;i++)
        board[i]=temp_board[20-i];

    return 1;
}

bool MainWindow::dir_E(){
    temp_board[19]=board[8];
    temp_board[18]=board[4];
    temp_board[17]=board[1];
    temp_board[16]=board[13];
    temp_board[15]=board[9];
    temp_board[14]=board[5];
    temp_board[13]=board[2];
    temp_board[12]=board[17];
    temp_board[11]=board[14];
    temp_board[10]=board[10];
    temp_board[9]=board[6];
    temp_board[8]=board[3];
    temp_board[7]=board[18];
    temp_board[6]=board[15];
    temp_board[5]=board[11];
    temp_board[4]=board[7];
    temp_board[3]=board[19];
    temp_board[2]=board[16];
    temp_board[1]=board[12];

    board_for_compare=temp_board;
    MainWindow::do_temp_board();
    if(board_for_compare==temp_board)
        return 0;

    board[8]=temp_board[19];
    board[4]=temp_board[18];
    board[1]=temp_board[17];
    board[13]=temp_board[16];
    board[9]=temp_board[15];
    board[5]=temp_board[14];
    board[2]=temp_board[13];
    board[17]=temp_board[12];
    board[14]=temp_board[11];
    board[10]=temp_board[10];
    board[6]=temp_board[9];
    board[3]=temp_board[8];
    board[18]=temp_board[7];
    board[15]=temp_board[6];
    board[11]=temp_board[5];
    board[7]=temp_board[4];
    board[19]=temp_board[3];
    board[16]=temp_board[2];
    board[12]=temp_board[1];

    return 1;
}

bool MainWindow::dir_D(){
    temp_board[19]=board[17];
    temp_board[18]=board[13];
    temp_board[17]=board[8];
    temp_board[16]=board[18];
    temp_board[15]=board[14];
    temp_board[14]=board[9];
    temp_board[13]=board[4];
    temp_board[12]=board[19];
    temp_board[11]=board[15];
    temp_board[10]=board[10];
    temp_board[9]=board[5];
    temp_board[8]=board[1];
    temp_board[7]=board[16];
    temp_board[6]=board[11];
    temp_board[5]=board[6];
    temp_board[4]=board[2];
    temp_board[3]=board[12];
    temp_board[2]=board[7];
    temp_board[1]=board[3];

    board_for_compare=temp_board;
    MainWindow::do_temp_board();
    if(board_for_compare==temp_board)
        return 0;

    board[17]=temp_board[19];
    board[13]=temp_board[18];
    board[8]=temp_board[17];
    board[18]=temp_board[16];
    board[14]=temp_board[15];
    board[9]=temp_board[14];
    board[4]=temp_board[13];
    board[19]=temp_board[12];
    board[15]=temp_board[11];
    board[10]=temp_board[10];
    board[5]=temp_board[9];
    board[1]=temp_board[8];
    board[16]=temp_board[7];
    board[11]=temp_board[6];
    board[6]=temp_board[5];
    board[2]=temp_board[4];
    board[12]=temp_board[3];
    board[7]=temp_board[2];
    board[3]=temp_board[1];

    return 1;
}

void MainWindow::on_pushButton2_clicked()
{
    MainWindow::autoRun();
}

void MainWindow::autoRun()
{
    int x=0;
    x=rand()%6;
    //press S
    if(x==0){
        if(MainWindow::dir_S()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press A
    else if(x==1){
        if(MainWindow::dir_A()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press Q
    else if(x==2){
        if(MainWindow::dir_Q()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press W
    else if(x==3){
        if(MainWindow::dir_W()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press E
    else if(x==4){
        if(MainWindow::dir_E()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }

    //press D
    else if(x==5){
        if(MainWindow::dir_D()==1){
            if(MainWindow::Creat()==0)
                MainWindow::on_pushButton1_clicked();
        }
        MainWindow::myShow();
    }
}

void MainWindow::gameOver(){
    QPixmap gameover("E:/code/QT/my2048/pic/gameover.jpg");
    ui->gameover->setPixmap(gameover);
}
