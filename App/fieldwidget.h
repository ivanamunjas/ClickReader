#ifndef FIELDWIDGET_H
#define FIELDWIDGET_H

#include <QWidget>
#include <QString>

namespace Ui {
class FieldWidget;
}

class FieldWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FieldWidget(const QString &name, const QString &unit, QWidget *parent = 0);
    FieldWidget() {}
    ~FieldWidget();

    void setValue(const QString &value);

private:
    Ui::FieldWidget *ui;
};

#endif // FIELDWIDGET_H
