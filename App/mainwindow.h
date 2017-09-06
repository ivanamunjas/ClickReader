#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QPixmap>
#include <QStringList>
#include "functions.h"
#include "portcombobox.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QStringList getPorts(){ return ports; }

    ~MainWindow();

private slots:
    void readData();

    void on_pauseButton_clicked();

    void on_clearButton_clicked();

    void on_logButton_clicked();

    void on_combo_currentIndexChanged(int index);


    void on_refreshButton_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort* serial;
    Func func;
    QByteArray buffer;
    bool pause = false;
    QStringList ports;
    QPixmap pix;
    int widgetHeight, textEditHeight;
   // PortComboBox* combo;
};

#endif // MAINWINDOW_H
