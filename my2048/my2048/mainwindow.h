#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <iostream>
#include <string>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setP(int,QPixmap*,int);
    ~MainWindow();

    QPixmap b[16];

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
