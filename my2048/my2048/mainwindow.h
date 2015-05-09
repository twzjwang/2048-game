#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QKeyEvent>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
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
    bool Creat();
    void keyPressEvent(QKeyEvent *);
    void do_temp_board();
    bool dir_S();
    bool dir_A();
    bool dir_Q();
    bool dir_W();
    bool dir_E();
    bool dir_D();
    void autoRun();
    void gameOver();

private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();


private:
    Ui::MainWindow *ui;
    vector<int> board;
    vector<int> temp_board;
    vector<int> board_for_compare;
    QPixmap b[16];

};

#endif // MAINWINDOW_H
