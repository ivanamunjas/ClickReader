#include "fieldwidget.h"
#include "ui_fieldwidget.h"

FieldWidget::FieldWidget(const QString &name, const QString &unit, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FieldWidget)
{
    ui->setupUi(this);
    ui->nameLabel->setText(name);
    ui->unitLabel->setText(unit+"   ");

}

FieldWidget::~FieldWidget()
{
    delete ui;
}

void FieldWidget::setValue(const QString &value)
{
    ui->valueLabel->setText(value);
}
