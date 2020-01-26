#-------------------------------------------------
#
# Project created by QtCreator 2018-04-24T00:35:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mylib
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    findbook.cpp \
    main.cpp \
    mainwindow.cpp \
    login.cpp \
    account.cpp \
    accountuser.cpp \
    borrow.cpp \
    returnbook.cpp \
    insone.cpp \
    record.cpp \
    addcard.cpp \
    delcard.cpp \
    instext.cpp

HEADERS += \
    findbook.h \
    mainwindow.h \
    login.h \
    account.h \
    accountuser.h \
    borrow.h \
    returnbook.h \
    insone.h \
    record.h \
    addcard.h \
    delcard.h \
    instext.h

FORMS += \
    findbook.ui \
    mainwindow.ui \
    login.ui \
    account.ui \
    accountuser.ui \
    borrow.ui \
    returnbook.ui \
    insone.ui \
    addcard.ui \
    delcard.ui \
    instext.ui
QT += sql
