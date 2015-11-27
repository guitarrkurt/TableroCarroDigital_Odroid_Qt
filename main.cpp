#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("background-image:url(/home/odroid/Desktop/iconosLoboAuto/piel.jpg)");
    w.show();
   w.showFullScreen();
    return a.exec();
}
