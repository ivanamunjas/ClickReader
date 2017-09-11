#-------------------------------------------------
#
# Project created by QtCreator 2017-08-17T15:25:05
#
#                   ClickReader
#
# This app displays names, values and units of the
# signals that are recieved from a development
# board. Their read values are being sent from
# mikroC via UART. The user has to use MED_library
# in mikroC to perform registration and choose
# an interval for sending updated values.
# When the right COM is selected, the app will make
# the right number of fields and allow the user to
# track changes of measured signals.
#
#-------------------------------------------------
#
#       Authors: Ivana Munjas & Ivana Pesic
#
#-------------------------------------------------

QT       += core gui serialport printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MunjaPesa
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    functions.cpp \
    fieldwidget.cpp \
    fieldwidgetContainer.cpp \
    portcombobox.cpp \
    qcustomplot.cpp

HEADERS += \
        mainwindow.h \
    functions.h \
    fieldwidget.h \
    fieldwidget.h \
    functions.h \
    mainwindow.h \
    fieldwidgetContainer.h \
    portcombobox.h \
    qcustomplot.h

FORMS += \
        mainwindow.ui \
    fieldwidget.ui \
    fieldwidgetContainer.ui

DISTFILES += \
    style.qss

RESOURCES += \
    icons.qrc
