#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    w.show();

    //blablablabla
    return a.exec();
}
