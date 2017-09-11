#ifndef FIELDWIDGETCONTAINER_H
#define FIELDWIDGETCONTAINER_H

#include <QWidget>
#include "fieldwidget.h"

namespace Ui {
class FieldWidgetContainer;
}

class FieldWidgetContainer : public QWidget {
    Q_OBJECT

public:
    explicit FieldWidgetContainer(QWidget *parent = 0);
    ~FieldWidgetContainer();

    void addField(FieldWidget** fw, const QColor &color);

    void clearFields();

private:
    Ui::FieldWidgetContainer *ui;
};

#endif // FIELDWIDGETCONTAINER_H
