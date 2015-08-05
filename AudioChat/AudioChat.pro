#-------------------------------------------------
#
# Project created by QtCreator 2015-08-03T14:53:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AudioChat
TEMPLATE = app


SOURCES += main.cpp \
            mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui



RESOURCES +=


unix:!macx: LIBS += -L$$PWD/FMOD/lib/x86/ -lfmod

INCLUDEPATH += $$PWD/FMOD/lib/x86 \
               $$PWD/FMOD/inc
DEPENDPATH += $$PWD/FMOD/lib/x86
