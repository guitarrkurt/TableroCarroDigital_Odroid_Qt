#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qthread.h>
bool led1=false;
bool led2=false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_downLeft_clicked()
{
//derecha
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    //sleep(2000);
    QThread::msleep(3000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
}


void MainWindow::on_downRight_clicked()
{
//izquierda
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    //sleep(2000);
    QThread::msleep(3000);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
}

//void MainWindow::on_lcd_overflow()
//{

//}

void MainWindow::on_pushButton_clicked()
{
    digitalWrite(1,HIGH);
}

void MainWindow::on_pushButton_3_clicked()
{
    digitalWrite(1,LOW);
}

void MainWindow::on_pushButton_2_clicked()
{
    digitalWrite(4,HIGH);
}

void MainWindow::on_pushButton_4_clicked()
{
    digitalWrite(4,LOW);
}
