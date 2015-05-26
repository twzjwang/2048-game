#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QKeyEvent>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void myShow();
    void setP(int,int);
    bool Creat(int);
    void keyPressEvent(QKeyEvent *);
    void do_temp_board(int x=1);
    bool dir_S();
    bool dir_A();
    bool dir_Q();
    bool dir_W();
    bool dir_E();
    bool dir_D();
    bool dir_S(int x);
    bool dir_A(int x);
    bool dir_Q(int x);
    bool dir_W(int x);
    bool dir_E(int x);
    bool dir_D(int x);
    void autoRun();
    void autoRun_2(int);
    void gameOver();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

private:
    Ui::MainWindow *ui;
    vector<int> board;
    vector<int> pre_board;
    vector<int> temp_board;
    vector<int> board_for_compare;
    QPixmap b[19];
    int score,pre_score,best,x;
    int gameover_check;//gameover:1

};

#endif // MAINWINDOW_H
