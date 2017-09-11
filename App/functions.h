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
    /*!
     * \brief Registers the end of a message.
     */
    int msgEnd(QByteArray buff);
    /*!
     * \brief Parses the message and recognizes its type.
     */
    void msgParse(QByteArray buff);
    /*!
     * \brief Updates the value in an appropriate fieldwiget.
     */
    void update(QByteArray arr);
    /*!
     * \brief Clears all fieldwidgets and sets the app in its initial state.
     */
    void init();
    /*!
     * \brief Makes fieldwidgets by its name and unit.
     */
    void reg(QByteArray arr);
    void setContainer(FieldWidgetContainer** cont);
    void setTextEdit(QTextEdit** txt);
    void setTitle(QLabel** title);
    /*!
     * \brief Displays messages recieved from mikroC.
     */
    void log(QByteArray arr, QString title);
    void clearLog();

    ~Func();
};




#endif // FUNCTIONS_H
