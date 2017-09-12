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
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    PortComboBox *combo;
    QLabel *label_2;
    QPushButton *pauseButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *logButton;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 622);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(26, 26, 26, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../4-20ma-r-click-mikroe-1387.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        centralWidget->setPalette(palette1);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, 5, 5);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));

        verticalLayout->addLayout(verticalLayout_6);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(901, 80));
        QPalette palette2;
        QBrush brush3(QColor(128, 193, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label->setPalette(palette2);
        QFont font;
        font.setFamily(QStringLiteral("Open Sans"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 6);
        combo = new PortComboBox(widget_2);
        combo->setObjectName(QStringLiteral("combo"));
        combo->setMinimumSize(QSize(150, 26));
        combo->setMaximumSize(QSize(80, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Open Sans"));
        font1.setPointSize(12);
        combo->setFont(font1);
        combo->setStyleSheet(QLatin1String("/*QComboBox {\n"
"    border: 2px #404040;\n"
"\n"
"   border-radius: 3px;\n"
"    background-color:  #404040;\n"
"    min-width: 150px;\n"
"	color: #e6e6e6;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"       \n"
"    background-color:#595959;\n"
"                  border: 2px #404040;\n"
"\n"
"   border-radius: 3px;                      \n"
"    min-width: 80px;\n"
"	color: #e6e6e6;\n"
"}\n"
"\n"
"\n"
"QComboBox:editable {\n"
"    background:#404040;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: #404040;\n"
"}\n"
"\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: #404040;\n"
"}\n"
"\n"
"QComboBox:on { \n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"	background-color #000000;\n"
"	color: #00bfff;\n"
"    border-left-width: 1px;\n"
"    border-left-color: #00bfff;\n"
"    border-left-style: solid; "
                        "\n"
"    border-top-right-radius: 3px; \n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::drop-down {\n"
"	border: 1px;\n"
"border-color: #e6e6e6;\n"
"   width: 20px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView{\n"
"	background-color:  #404040;\n"
"	color:#e6e6e6;\n"
" \n"
"	selection-background-color: #006080;\n"
"	selection-color: #e6e6e6;\n"
"}\n"
"\n"
"QComboBox:down-arrow{\n"
"	image: url(C:/Users/mikroe/Downloads/down-arrow (4).png);\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"     border: 0px solid #999900;\n"
"     background: transparent;\n"
"}*/\n"
"\n"
"QComboBox\n"
"{\n"
"    color:#e6e6e6;\n"
"    background-color: #333333;\n"
"    border-color: #333333;\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QComboBox QListView\n"
"{\n"
"    border: 1px ; \n"
"    border-color: #333333;\n"
"    background-color: #8c8c8c;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    width: 20px;\n"
"    border: 1px;\n"
"    border-color:#333333;\n"
"    bor"
                        "der-left-style:solid;\n"
"    border-top-style: none;\n"
"    border-bottom-style: none;\n"
"    border-right-style: none;\n"
"}\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(C:/Users/mikroe/Desktop/Ivane/ClickReader/App/down-arrow (4).png);\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView{\n"
"	background-color:  #404040;\n"
"	color:#e6e6e6;\n"
"    border: 1px;\n"
"   border-color: #333333;\n"
"	selection-background-color: #595959;\n"
"	selection-color: #e6e6e6;\n"
"}\n"
"\n"
"QComboBox:hover\n"
"{\n"
"    color:#e6e6e6;\n"
"    background-color: #404040;\n"
"    border-color: #404040;\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(combo);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pauseButton = new QPushButton(widget_2);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setMaximumSize(QSize(90, 25));
        QPalette palette3;
        QBrush brush5(QColor(230, 230, 230, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(51, 51, 51, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        pauseButton->setPalette(palette3);
        QFont font2;
        font2.setFamily(QStringLiteral("Open Sans"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pauseButton->setFont(font2);
        pauseButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 2px #333333;\n"
"\n"
"   border-radius: 3px;\n"
"    background-color: #333333;\n"
"    min-width: 80px;\n"
"	color: #e6e6e6;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"   \n"
"    background-color:#404040;\n"
"                                     \n"
"    min-width: 80px;\n"
"	color: #e6e6e6;\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(pauseButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMinimumSize(QSize(300, 355));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        scrollArea->setPalette(palette4);
        QFont font3;
        font3.setFamily(QStringLiteral("Open Sans"));
        scrollArea->setFont(font3);
        scrollArea->setStyleSheet(QLatin1String("QScrollBar:vertical {          \n"
"       border: 1px solid #999999;\n"
"       background:#8c8c8c;\n"
"       width:10px;    \n"
"       margin: 0px 0px 0px 0px;\n"
"   }\n"
"    QScrollBar::handle:vertical {\n"
"        background: #737373;\n"
"        min-height: 0px;\n"
"    }\n"
"    QScrollBar::add-line:vertical {\n"
"       background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"      stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"       height: 0px;\n"
"       subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"    QScrollBar::sub-line:vertical {\n"
"       background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"       stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"       height: 0 px;\n"
"       subcontrol-position: top;\n"
"       subcontrol-origin: margin;\n"
"   }\n"
"\n"
"QScrollArea{\n"
" border: 0px;\n"
"}"));
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 572, 355));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, 5);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 141));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 6);
        logButton = new QPushButton(widget);
        logButton->setObjectName(QStringLiteral("logButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(logButton->sizePolicy().hasHeightForWidth());
        logButton->setSizePolicy(sizePolicy4);
        logButton->setMinimumSize(QSize(35, 25));
        logButton->setMaximumSize(QSize(35, 16777215));
        logButton->setSizeIncrement(QSize(0, 0));
        logButton->setFont(font1);
        logButton->setLayoutDirection(Qt::LeftToRight);
        logButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 2px #1a1a1a;\n"
"\n"
"   border-radius: 3px;\n"
"    background-color:  #1a1a1a;\n"
"\n"
"	color: #e6e6e6;\n"
"    \n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"   \n"
"    background-color:#404040;\n"
"\n"
"	color: #e6e6e6;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(logButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        label_3->setPalette(palette5);
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        sizePolicy4.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy4);
        clearButton->setMinimumSize(QSize(80, 25));
        clearButton->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        clearButton->setPalette(palette6);
        clearButton->setFont(font2);
        clearButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 2px #333333;\n"
"\n"
"   border-radius: 3px;\n"
"    background-color:  #333333;\n"
"    min-width: 80px;\n"
"	color: #e6e6e6;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"   \n"
"    background-color:#404040;\n"
"                                     \n"
"    min-width: 80px;\n"
"	color: #e6e6e6;\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(clearButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy5);
        textEdit->setMinimumSize(QSize(300, 0));
        textEdit->setMaximumSize(QSize(16777215, 109));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        textEdit->setPalette(palette7);
        QFont font4;
        font4.setFamily(QStringLiteral("Open Sans"));
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setWeight(50);
        textEdit->setFont(font4);
        textEdit->setStyleSheet(QLatin1String("QScrollBar:vertical {          \n"
"       border: 1px solid #999999;\n"
"       background:#8c8c8c;\n"
"       width:10px;    \n"
"       margin: 0px 0px 0px 0px;\n"
"   }\n"
"    QScrollBar::handle:vertical {\n"
"        background: #737373;\n"
"        min-height: 0px;\n"
"    }\n"
"    QScrollBar::add-line:vertical {\n"
"       background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"      stop: 0 rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"       height: 0px;\n"
"       subcontrol-position: bottom;\n"
"        subcontrol-origin: margin;\n"
"    }\n"
"    QScrollBar::sub-line:vertical {\n"
"       background: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"       stop: 0  rgb(32, 47, 130), stop: 0.5 rgb(32, 47, 130),  stop:1 rgb(32, 47, 130));\n"
"       height: 0 px;\n"
"       subcontrol-position: top;\n"
"       subcontrol-origin: margin;\n"
"   }\n"
"QTextEdit {\n"
"\n"
"background-color: #333333;\n"
"border: 0px;\n"
"padding-left: 5px;\n"
"\n"
"}"));

        verticalLayout_4->addWidget(textEdit);


        horizontalLayout->addWidget(widget);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ClickReader", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>CLICK READER</p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        logButton->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "  Log", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
