#include "functions.h"
#include "mainwindow.h"
#include <QXmlStreamReader>
#include <QStringList>
#include <QDebug>
#include <QString>
#include <QLabel>
#include <QtGui>
#include <QDateTime>
#include <QColor>


int Func::msgEnd(QByteArray buff){
    for (int i=0; i< buff.size()-5; i++){
        if (buff[i]=='<'  && buff[i+2]=='m' && buff[i+3]=='s' && buff[i+4]=='g' && buff[i+5]=='>'){
            return i+5;
        }
    }
    return 0;
}

void Func::msgParse(QByteArray buff){
    QXmlStreamReader xmlReader;
    xmlReader.addData(buff);

    while (!xmlReader.atEnd()) {
        xmlReader.readNext();

        if(xmlReader.name()=="msg" && xmlReader.isStartElement()) {

            QXmlStreamAttributes attrib = xmlReader.attributes();

            if (attrib.value("type") == "init") {
                reg(buff);
                title->setText(attrib.value("title").toString());
            }
            else if (attrib.value("type") == "update") {
                update(buff);
            }
            else if (attrib.value("type") == "log") {
                log(buff, attrib.value("title").toString());

            }
        }
    }
}

void Func::update(QByteArray arr){

    QXmlStreamReader xmlReader;
    xmlReader.addData(arr);
    QString n;

    while(!xmlReader.atEnd()) {

        xmlReader.readNext();

        if(xmlReader.isStartElement()) {
            if (xmlReader.name() == "name") {
                n=xmlReader.readElementText();
            }
            else if (xmlReader.name() == "value") {
                if (fieldMap.contains(n)){
                    QString val = xmlReader.readElementText();
                    (fieldMap.value(n))->setValue(val);
                    (fieldMap.value(n))->updatePlot(val);
                }
            }
        }
    }
}

void Func::reg(QByteArray arr){

    if (!fieldMap.empty())
        init();

    QXmlStreamReader xmlReader;
    xmlReader.addData(arr);

    QStringList names, units;

    while(!xmlReader.atEnd()) {

        xmlReader.readNext();

        if(xmlReader.isStartElement()) {
            if (xmlReader.name() == "name") {
                names << xmlReader.readElementText();
            }
            else if (xmlReader.name() == "unit") {
                units << xmlReader.readElementText();
            }
        }
    }

    for (int i=0; i<names.size(); i++){
        FieldWidget* fw = new FieldWidget(names.at(i),units.at(i));
        fieldMap.insert(names.at(i),fw);
        cont->addField(&fw, Qt::red);
    }
}

void Func::init(){

    for (auto e : fieldMap.toStdMap()){
        e.second=nullptr;
        delete e.second;
    }

    fieldMap.clear();
    cont->clearFields();
}

void Func::setContainer(FieldWidgetContainer** cont){
    this->cont = *cont;
}

void Func::setTextEdit(QTextEdit** txt){
    this->txt = *txt;
}

void Func::setTitle(QLabel** title){
    this->title = *title;
}

void Func::log(QByteArray arr, QString title){

    QXmlStreamReader xmlReader;
    QDateTime q;
    txt->setTextColor(QColor(242, 242, 242));
    txt->append("(" + q.currentDateTime().toString("dd-MM-yyyy hh:mm:ss") + ")");

    if (title == "Message")
        txt->setTextColor(QColor(128, 193, 255));
    else if (title == "Warning")
        txt->setTextColor(QColor(255, 255, 102));
    else
        txt->setTextColor(QColor(255, 77, 77));

    txt->append(title + ": ");

    xmlReader.addData(arr);

    while(!xmlReader.atEnd()) {

        xmlReader.readNext();

        if(xmlReader.isStartElement()) {
            if (xmlReader.name() == "txt") {
                txt->moveCursor(QTextCursor::MoveOperation::End,QTextCursor::MoveMode::MoveAnchor);
                txt->setTextColor(QColor(242, 242, 242));
                txt->insertPlainText(xmlReader.readElementText() + "\n");
            }
        }

    }
}

void Func::clearLog() {
    txt->clear();
}
