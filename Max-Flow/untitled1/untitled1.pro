#-------------------------------------------------
#
# Project created by QtCreator 2015-12-19T13:12:54
#
#-------------------------------------------------

QT       += core gui  webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    welcome.cpp \
    numberofedges.cpp \
    globalvar.cpp \
    online_graph.cpp \
    frotomax.cpp \
    about_program.cpp

HEADERS  += mainwindow.h \
    welcome.h \
    numberofedges.h \
    globalvar.h \
    online_graph.h \
    frotomax.h \
    about_program.h

FORMS    += mainwindow.ui \
    welcome.ui \
    numberofedges.ui \
    online_graph.ui \
    frotomax.ui \
    about_program.ui
