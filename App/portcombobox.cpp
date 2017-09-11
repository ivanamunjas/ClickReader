#include "portcombobox.h"
//#include "ui_portcombobox.h"
#include <QSerialPortInfo>
#include <QDebug>


PortComboBox::PortComboBox(QWidget *parent) :  QComboBox(parent) {

}

PortComboBox::~PortComboBox() {

}
void PortComboBox::showPopup(){
    this->clear();
    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts())
        (this)->addItem(port.portName());
    QComboBox::showPopup();
}



