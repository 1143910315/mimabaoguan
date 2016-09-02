#-------------------------------------------------
#
# Project created by QtCreator 2016-09-01T20:14:24
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += core
QT+=testlib
#CONFIG+=qtestlib
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mimabaoguan
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    db.cpp \
    qd.cpp

HEADERS  += mainwindow.h \
    db.h \
    qd.h

FORMS    += mainwindow.ui
