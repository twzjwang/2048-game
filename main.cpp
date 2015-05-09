#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;
#include "mainwindow.h"
#include <QApplication>

void creat(vector<int> &);

int main(int argc, char *argv[])
{
    srand((unsigned)time(NULL));
    vector<int> board(20);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    creat(board);
    creat(board);
    for(int i=1;i<20;i++){
        w.setP(i,w.b,board[i]);
    }
    w.show();

    return a.exec();
}

void creat(vector<int> &board){
    int temp_p=0,temp_num=1;
    //choose the position to creat number
    do{
        temp_p=rand()%19+1;
    }while( board[temp_p]!=0);

    //randomly choose number 1(80%) 2(20%)
    if(rand()%5==0)
        temp_num=2;

    //input vector
    board[temp_p]=temp_num;
}
