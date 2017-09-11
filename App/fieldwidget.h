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

    void updatePlot(const QString &value);

private:
    Ui::FieldWidget *ui;
    float yMin = 0, yMax = 0;
    int x = 0;
};

#endif // FIELDWIDGET_H
