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
#include <QBitmap>
#include <QColor>
#include <QTextBlock>
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

//    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts()) {

//            (ui->comboBox)->addItem(port.portName());
//            ports.push_back(port.portName());
//     }
    serial->setBaudRate(56000);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setDataBits(QSerialPort::Data8);

    combo = new PortComboBox();
    ui->horizontalLayout_4->addWidget(combo);
    QObject::connect(combo,  static_cast<void (PortComboBox::*)(int)>(&PortComboBox::currentIndexChanged), this, &MainWindow::on_combo_currentIndexChanged);
   // static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::activated)
    // static_cast<void (QTcpSocket::*) (QAbstractSocket::SocketError)>(&QTcpSocket::error)

    FieldWidgetContainer *container = new FieldWidgetContainer;

    ui->scrollArea->setWidget(container);

    func.setContainer(&container);
    func.setTextEdit(&(ui->textEdit));
    func.setTitle(&(ui->label)); //ovo
}


void MainWindow::readData() {

//    if (serial->error() != QSerialPort::NoError) {
//        qDebug() << serial->error();
//        pix.load("C:/Users/mikroe/Downloads/disconnect1.png");
//        ui->label_3->setPixmap(pix);
//        serial->close();
//    }


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

    serial->setPortName((combo)->currentText());

    if (!serial->open(QIODevice::ReadOnly))  {
        qDebug() << "Can't open serial port.";
        qDebug() << serial->errorString();
        serial->close();
        pix.load("C:/Users/mikroe/Downloads/disconnect1.png");
              ui->label_3->setPixmap(pix);
    }
    else {
     //   QObject::connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
        pix.load("C:/Users/mikroe/Downloads/usb1.png");
        ui->label_3->setPixmap(pix);
    }
}

















