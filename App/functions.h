#include <QByteArray>
#include <QWidget>
#include <QString>
#include <QStringRef>
#include <QMap>
#include <QListWidget>
#include <QTextEdit>
#include <QLabel>
#include "fieldwidget.h"
#include "fieldwidgetContainer.h"
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Func{

private:
    QMap<QString, FieldWidget*> fieldMap;
    FieldWidgetContainer* cont;
    QTextEdit* txt;
    QLabel* title;

public:
    int msgEnd(QByteArray buff);
    void msgParse(QByteArray buff);
    void update(QByteArray arr);
    void init();
    void reg(QByteArray arr);
    void setContainer(FieldWidgetContainer** cont);
    void setTextEdit(QTextEdit** txt);
    void setTitle(QLabel** title);
    void log(QByteArray arr, QString title);
    void clearLog();
};




#endif // FUNCTIONS_H
