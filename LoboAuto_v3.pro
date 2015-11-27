#-------------------------------------------------
#
# Project created by QtCreator 2015-11-24T12:23:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoboAuto_v3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    imagenes.qrc

LIBS +=-L/usr/local/lib -lwiringPi
