#-------------------------------------------------
#
# Project created by QtCreator 2019-11-20T14:35:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uartMasager
TEMPLATE = app


SOURCES += main.cpp\
        window.cpp \
    accaunt.cpp \
    everyexception.cpp \
    comunication.cpp

HEADERS  += window.h \
    accaunt.h \
    everyexception.h \
    comunication.h

FORMS    += window.ui
