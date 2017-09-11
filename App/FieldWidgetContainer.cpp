#include "fieldwidgetContainer.h"
#include "ui_FieldWidgetContainer.h"

//#include "fieldwidget.h"

FieldWidgetContainer::FieldWidgetContainer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FieldWidgetContainer) {
    ui->setupUi(this);
    ui->containerLayout->setSpacing(1);
}

FieldWidgetContainer::~FieldWidgetContainer() {
    delete ui;
}

void FieldWidgetContainer::addField(FieldWidget** fw, const QColor &color) {
    ui->containerLayout->addWidget(*fw);
}

void FieldWidgetContainer::clearFields() {
    QList<QWidget *> widgets = findChildren<QWidget*>();
    for (auto widget: widgets) {
        widget->deleteLater();
    }
}
