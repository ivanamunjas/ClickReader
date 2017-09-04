/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <portcombobox.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    PortComboBox *combo;
    QPushButton *refreshButton;
    QPushButton *pauseButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(901, 622);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        centralWidget->setPalette(palette1);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(901, 100));
        QPalette palette2;
        QBrush brush2(QColor(0, 191, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label->setPalette(palette2);
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        combo = new PortComboBox(widget_2);
        combo->setObjectName(QStringLiteral("combo"));
        combo->setMinimumSize(QSize(0, 26));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        combo->setFont(font1);
        combo->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 2px solid #00bfff;\n"
"    border-radius: 6px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 130px;\n"
"\n"
"	color: #33ccff;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid  #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #006080, stop: 1 #000000);\n"
"    min-width: 130px;\n"
"	color: #33ccff;\n"
"}\n"
"\n"
"\n"
"QComboBox:editable {\n"
"    background: #00bfff;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: #000000;\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background:  #000000;\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top ri"
                        "ght;\n"
"    width: 15px;\n"
"	background-color #000000;\n"
"	color: #00bfff;\n"
"    border-left-width: 1px;\n"
"    border-left-color: #00bfff;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView{\n"
"	background-color:  #006080;\n"
"	color:#00bfff;\n"
" \n"
"	selection-background-color: #00bfff;\n"
"	selection-color:  #000000;\n"
"}\n"
"\n"
"QComboBox:drop-arrow{\n"
"	color:#00bfff;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"     border: 0px solid #999900;\n"
"     background: transparent;\n"
"}"));

        horizontalLayout_2->addWidget(combo);

        refreshButton = new QPushButton(widget_2);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setMinimumSize(QSize(44, 0));
        refreshButton->setMaximumSize(QSize(40, 30));
        refreshButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:\n"
"                                      #000000;\n"
"    min-width: 40px;\n"
"	color:#00bfff;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid  #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #006080, stop: 1 #000000);\n"
"    min-width: 40px;\n"
"	color: #33ccff;\n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../Downloads/if_5_-_Refresh_1815572 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon);
        refreshButton->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(refreshButton);

        pauseButton = new QPushButton(widget_2);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        pauseButton->setPalette(palette3);
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pauseButton->setFont(font2);
        pauseButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:\n"
"                                      #000000;\n"
"    min-width: 80px;\n"
"	color:#00bfff;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid  #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #006080, stop: 1 #000000);\n"
"    min-width: 80px;\n"
"	color: #33ccff;\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(pauseButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(300, 100));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        scrollArea->setPalette(palette4);
        QFont font3;
        font3.setFamily(QStringLiteral("Open Sans"));
        scrollArea->setFont(font3);
        scrollArea->setStyleSheet(QLatin1String("QScrollArea  {\n"
"	background-color: #000000;\n"
"	border: 0px;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"\n"
"  border-color: solid #00bfff;\n"
"  border-width: 2px;\n"
"\n"
"  background-color: #002633;\n"
"  width: 15px;\n"
"  margin: 20px 0 20px 0;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"\n"
"  background-color: #007399;\n"
"  min-height: 25px;\n"
"  border: 1px solid  #00bfff;\n"
"\n"
"}\n"
"\n"
" QScrollBar::add-line:vertical {\n"
"    border: 1px solid  #00bfff;\n"
"    background-color: #000000;\n"
"    height: 18px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    border: 1px solid #00bfff;\n"
"    background-color: #000000;\n"
"    height: 18px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
""));
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 473));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setMinimumSize(QSize(84, 0));
        clearButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        clearButton->setPalette(palette5);
        clearButton->setFont(font2);
        clearButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: 2px solid #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:\n"
"                                      #000000;\n"
"    min-width: 80px;\n"
"	color:#00bfff;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid  #00bfff;\n"
"    border-radius: 6px;\n"
"    background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #006080, stop: 1 #000000);\n"
"    min-width: 80px;\n"
"	color: #33ccff\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(clearButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);
        textEdit->setMinimumSize(QSize(300, 0));
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QLatin1String("QScrollBar:vertical {\n"
"\n"
"  border-color: solid #00bfff;\n"
"  border-width: 2px;\n"
"\n"
"  background-color: #ffffff;\n"
"  width: 15px;\n"
"  margin: 20px 0 20px 0;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"\n"
"  background-color:#ccf2ff;\n"
"  min-height: 25px;\n"
"  border: 1px solid  #00bfff;\n"
"\n"
"}\n"
"\n"
" QScrollBar::add-line:vertical {\n"
"    border: 1px solid  #0086b3;\n"
"    background-color:#99e6ff ;\n"
"    height: 18px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"    border: 1px solid #0086b3;\n"
"    background-color: #99e6ff;\n"
"    height: 18px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QTextEdit {\n"
"border: 2px solid #00bfff;\n"
"  border-radius: 6px;\n"
"background-color: #ffffff;\n"
"}"));

        verticalLayout_4->addWidget(textEdit);


        horizontalLayout->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ClickReader", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt;\">Click Reader</span></p></body></html>", Q_NULLPTR));
        refreshButton->setText(QString());
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
