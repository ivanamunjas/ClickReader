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
    QLabel *nameLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *valueLabel;
    QLabel *unitLabel;

    void setupUi(QWidget *FieldWidget)
    {
        if (FieldWidget->objectName().isEmpty())
            FieldWidget->setObjectName(QStringLiteral("FieldWidget"));
        FieldWidget->resize(473, 118);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FieldWidget->sizePolicy().hasHeightForWidth());
        FieldWidget->setSizePolicy(sizePolicy);
        FieldWidget->setMinimumSize(QSize(240, 90));
        FieldWidget->setMaximumSize(QSize(16777215, 16777215));
        FieldWidget->setStyleSheet(QLatin1String("QWidget {\n"
"	background-color: black;\n"
"	border: 2px solid #00bfff;\n"
"	border-radius: 5px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(FieldWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        nameLabel = new QLabel(FieldWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(80, 80));
        nameLabel->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        nameLabel->setFont(font);
        nameLabel->setStyleSheet(QLatin1String("QLabel {\n"
"	color: #ffffff;\n"
"	border: 2px solid #00bfff;\n"
"	border-radius: 4px;\n"
"}"));
        nameLabel->setTextFormat(Qt::RichText);
        nameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(nameLabel);

        widget = new QWidget(FieldWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(160, 80));
        widget->setMaximumSize(QSize(350, 16777215));
        widget->setStyleSheet(QLatin1String("border: 2px solid #00bfff;\n"
"	border-radius: 4px;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        valueLabel = new QLabel(widget);
        valueLabel->setObjectName(QStringLiteral("valueLabel"));
        valueLabel->setMinimumSize(QSize(60, 0));
        valueLabel->setMaximumSize(QSize(16777215, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        valueLabel->setFont(font1);
        valueLabel->setStyleSheet(QLatin1String("QLabel {\n"
"	color: #ffffff;\n"
"border: 0px;\n"
"}"));
        valueLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(valueLabel);

        unitLabel = new QLabel(widget);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setMinimumSize(QSize(60, 0));
        unitLabel->setFont(font1);
        unitLabel->setStyleSheet(QLatin1String("QLabel {\n"
"	color: #ffffff;\n"
"	border: 0px;\n"
"\n"
"}"));
        unitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(unitLabel);


        horizontalLayout->addWidget(widget);


        retranslateUi(FieldWidget);

        QMetaObject::connectSlotsByName(FieldWidget);
    } // setupUi

    void retranslateUi(QWidget *FieldWidget)
    {
        FieldWidget->setWindowTitle(QApplication::translate("FieldWidget", "Form", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("FieldWidget", "TextLabel", Q_NULLPTR));
        valueLabel->setText(QApplication::translate("FieldWidget", "0", Q_NULLPTR));
        unitLabel->setText(QApplication::translate("FieldWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FieldWidget: public Ui_FieldWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDWIDGET_H
