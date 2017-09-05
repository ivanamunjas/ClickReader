#include "fieldwidget.h"
#include "ui_fieldwidget.h"
#include "qcustomplot.h";
#include <QtGlobal>
#include <QPalette>


FieldWidget::FieldWidget(const QString &name, const QString &unit, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FieldWidget) {
    ui->setupUi(this);
    ui->nameLabel->setText(name);
    ui->unitLabel->setText(unit+"   ");
    ui->plotWidget->addGraph();
    ui->plotWidget->graph(0)->setPen(QPen(QColor(121,210,121)));
  //  ui->plotWidget->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->plotWidget->setBackground(QColor(51,51,51));
    ui->plotWidget->xAxis->grid()->setVisible(false);
    ui->plotWidget->yAxis->grid()->setPen(QPen(QColor(102, 102, 102)));
    ui->plotWidget->yAxis->setBasePen(QPen(QColor(102, 102, 102)));
    ui->plotWidget->xAxis->setBasePen(QPen(QColor(102, 102, 102)));
      //ui->plotWidget->yAxis->setTickPen(true);
    ui->plotWidget->xAxis->setTickLabelColor(QColor(230, 230, 230));
    ui->plotWidget->yAxis->setTickLabelColor(QColor(230, 230, 230));
    ui->plotWidget->xAxis->setSubTickPen(QPen(QColor(102, 102, 102)));
     ui->plotWidget->xAxis->setTickPen(QPen(QColor(102, 102, 102)));
    ui->plotWidget->yAxis->setSubTickPen(QPen(QColor(102, 102, 102)));
    ui->plotWidget->yAxis->setTickPen(QPen(QColor(102, 102, 102)));
}

FieldWidget::~FieldWidget() {
    delete ui;
}

void FieldWidget::setValue(const QString &value) {
    ui->valueLabel->setText(value);
}

void FieldWidget::updatePlot(const QString &value) {
    float n  = static_cast<float>(static_cast<int>(value.toFloat()*100+0.5))/100.0;
    yMin = qMin(yMin, n);
    yMax = qMax(yMax, n);
    if (x==0)
    ui->plotWidget->xAxis->setRange(x + 10, 10, Qt::AlignRight);
    if (x>10)
        ui->plotWidget->xAxis->setRange(x, 10, Qt::AlignRight);
    ui->plotWidget->yAxis->setRange(yMin, yMax);
    ui->plotWidget->graph(0)->addData(x, n);

    ui->plotWidget->replot();
    x += 1;

}
