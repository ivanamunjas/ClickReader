#include "mainwindow.h"
#include "portcombobox.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QByteArray>
#include "functions.h"
#include <QDebug>
#include <QWidget>
#include <QXmlStreamReader>
#include <QLabel>
#include <QScrollArea>
#include <QSerialPortInfo>
#include <QStringList>
#include <QPixmap>
#include <QColor>
#include <QSerialPort>
#include "fieldwidget.h"
#include "fieldwidgetContainer.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);

    ui->textEdit->setReadOnly(true);
    ui->textEdit->setTextInteractionFlags(Qt::TextEditable);
    ui->textEdit->setCursorWidth(0);

    serial = new QSerialPort(this);
    QObject::connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);

    serial->setBaudRate(56000);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setDataBits(QSerialPort::Data8);

    QObject::connect(ui->combo,  static_cast<void (PortComboBox::*)(int)>(&PortComboBox::currentIndexChanged), this, &MainWindow::on_combo_currentIndexChanged);

    FieldWidgetContainer *container = new FieldWidgetContainer;

    ui->scrollArea->setWidget(container);

    func.setContainer(&container);
    func.setTextEdit(&(ui->textEdit));
    func.setTitle(&(ui->label));

    widgetHeight = ui->widget->maximumHeight();
    textEditHeight = ui->textEdit->maximumHeight();
    ui->logButton->setIcon(QIcon(":/icons/down-arrow (4).png"));
}


void MainWindow::readData() {

    if(!pause && serial->isOpen()){

        buffer += serial->readAll();
        int i;

        while (i=func.msgEnd(buffer)) {
            QByteArray hBuffer;
            for ( int j=0; j<i+1; j++){
                hBuffer.push_back(buffer[j]);
            }

            buffer.remove(0,i+1);

            func.msgParse(hBuffer);
        }
    }
}


MainWindow::~MainWindow() {
    delete ui;
    delete serial; serial = nullptr;
}


void MainWindow::on_pauseButton_clicked() {
    if (!pause) {
        pause = true;
        ui->pauseButton->setText("Unpause");
    }
    else {
        pause = false;
        ui->pauseButton->setText("Pause");
    }
}


void MainWindow::on_clearButton_clicked() {
    func.clearLog();

}

void MainWindow::on_combo_currentIndexChanged(int index) {

    if (serial->isOpen())
        serial->close();

    serial->setPortName((ui->combo)->currentText());

    if (!serial->open(QIODevice::ReadOnly))  {
        qDebug() << "Can't open serial port.";
        qDebug() << serial->errorString();
        serial->close();
    }

}


void MainWindow::on_logButton_clicked() {
    if (ui->textEdit->height() != 0) {
        ui->textEdit->setFixedHeight(0);
        ui->widget->setFixedHeight(widgetHeight - textEditHeight);
        ui->clearButton->setVisible(false);
        ui->logButton->setIcon(QIcon(":/icons/down-arrow (4) - Copy.png"));
    }
    else {
        ui->textEdit->setFixedHeight(textEditHeight);
        ui->widget->setFixedHeight(widgetHeight);
        ui->clearButton->setVisible(true);
        ui->logButton->setIcon(QIcon(":/icons/down-arrow (4).png"));
    }



}
