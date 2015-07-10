#-------------------------------------------------
#
# Project created by QtCreator 2015-07-02T23:29:18
#
#-------------------------------------------------

QT       += core
QT       += testlib
QT       -= gui

TARGET = second
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    mylist.cpp \
    test_mylist.cpp \
    obr.cpp \
    queue.cpp \
    test_queue.cpp

HEADERS += \
    mylist.h \
    test_mylist.h \
    obr.h \
    queue.h \
    test_queue.h

DISTFILES += \
    TextFile.txt
