/********************************************************************************
** Form generated from reading UI file 'fieldwidgetContainer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIELDWIDGETCONTAINER_H
#define UI_FIELDWIDGETCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FieldWidgetContainer
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *containerLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FieldWidgetContainer)
    {
        if (FieldWidgetContainer->objectName().isEmpty())
            FieldWidgetContainer->setObjectName(QStringLiteral("FieldWidgetContainer"));
        FieldWidgetContainer->resize(411, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FieldWidgetContainer->sizePolicy().hasHeightForWidth());
        FieldWidgetContainer->setSizePolicy(sizePolicy);
        FieldWidgetContainer->setMinimumSize(QSize(411, 400));
        QPalette palette;
        QBrush brush(QColor(26, 26, 26, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        FieldWidgetContainer->setPalette(palette);
        FieldWidgetContainer->setStyleSheet(QLatin1String("QWidget {\n"
"	background-color: #1a1a1a;\n"
"border: 0px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(FieldWidgetContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        containerLayout = new QVBoxLayout();
        containerLayout->setSpacing(0);
        containerLayout->setObjectName(QStringLiteral("containerLayout"));

        verticalLayout_2->addLayout(containerLayout);

        verticalSpacer = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(FieldWidgetContainer);

        QMetaObject::connectSlotsByName(FieldWidgetContainer);
    } // setupUi

    void retranslateUi(QWidget *FieldWidgetContainer)
    {
        FieldWidgetContainer->setWindowTitle(QApplication::translate("FieldWidgetContainer", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FieldWidgetContainer: public Ui_FieldWidgetContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIELDWIDGETCONTAINER_H
