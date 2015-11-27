#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include "wiringPi.h"
#include "wiringPiI2C.h"
#include "wiringPiSPI.h"
#include "wiringSerial.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_upLeft_clicked();

    void on_downLeft_clicked();

    //void on_upRight_clicked();

    void on_downRight_clicked();

    //void on_lcd_overflow();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
