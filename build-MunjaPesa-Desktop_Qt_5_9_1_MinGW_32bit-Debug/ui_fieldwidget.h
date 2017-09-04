/********************************************************************************
** Form generated from reading UI file 'fieldwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDWIDGET_H
#define UI_FIELDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FieldWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_2;
    QLabel *nameLabel;
    QLabel *valueLabel;
    QLabel *unitLabel;
    QWidget *widget;

    void setupUi(QWidget *FieldWidget)
    {
        if (FieldWidget->objectName().isEmpty())
            FieldWidget->setObjectName(QStringLiteral("FieldWidget"));
        FieldWidget->resize(473, 175);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FieldWidget->sizePolicy().hasHeightForWidth());
        FieldWidget->setSizePolicy(sizePolicy);
        FieldWidget->setMinimumSize(QSize(240, 175));
        FieldWidget->setMaximumSize(QSize(16777215, 16777215));
        FieldWidget->setStyleSheet(QLatin1String("QWidget {\n"
"	background-color: black;\n"
"	border: 0px;\n"
"	\n"
"}"));
        horizontalLayout = new QHBoxLayout(FieldWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 2, 0, 2);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget_2 = new QWidget(FieldWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(165, 0));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        widget_2->setStyleSheet(QLatin1String("QWidget {\n"
"background-color: #404040;\n"
"}"));
        nameLabel = new QLabel(widget_2);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(20, 10, 150, 21));
        QPalette palette;
        QBrush brush(QColor(230, 230, 230, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(64, 64, 64, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        nameLabel->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        nameLabel->setFont(font);
        valueLabel = new QLabel(widget_2);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));
        valueLabel->setGeometry(QRect(20, 53, 661, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(valueLabel->sizePolicy().hasHeightForWidth());
        valueLabel->setSizePolicy(sizePolicy1);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        valueLabel->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setWeight(50);
        valueLabel->setFont(font1);
        unitLabel = new QLabel(widget_2);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setGeometry(QRect(20, 138, 150, 21));
        QPalette palette2;
        QBrush brush4(QColor(128, 193, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        unitLabel->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setPointSize(14);
        unitLabel->setFont(font2);

        horizontalLayout_3->addWidget(widget_2);

        widget = new QWidget(FieldWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(350, 0));
        widget->setStyleSheet(QLatin1String("QWidget {\n"
"background-color: #404040;\n"
"}"));

        horizontalLayout_3->addWidget(widget);


        horizontalLayout->addLayout(horizontalLayout_3);


        retranslateUi(FieldWidget);

        QMetaObject::connectSlotsByName(FieldWidget);
    } // setupUi

    void retranslateUi(QWidget *FieldWidget)
    {
        FieldWidget->setWindowTitle(QApplication::translate("FieldWidget", "Form", Q_NULLPTR));
        nameLabel->setText(QString());
        valueLabel->setText(QApplication::translate("FieldWidget", "0", Q_NULLPTR));
        unitLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FieldWidget: public Ui_FieldWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDWIDGET_H
