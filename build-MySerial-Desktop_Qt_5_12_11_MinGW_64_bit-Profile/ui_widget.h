/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *OutputButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QDoubleSpinBox *up3_data;
    QDoubleSpinBox *up4_data;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *ReadDataButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QDoubleSpinBox *down3_data;
    QDoubleSpinBox *up2_data;
    QDoubleSpinBox *down2_data;
    QDoubleSpinBox *down4_data;
    QDoubleSpinBox *up1_data;
    QPushButton *pushButton_4;
    QPushButton *RestButton;
    QDoubleSpinBox *down1_data;
    QPushButton *pushButton_11;
    QPushButton *SetTimeButton;
    QSpinBox *SetTimeSpinBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QGridLayout *basicset1;
    QComboBox *portComboBox;
    QPushButton *openPortButton;
    QComboBox *baudComboBox;
    QPushButton *clearTextButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *basicset2;
    QLabel *label_9;
    QPushButton *sendButton_8;
    QPushButton *readdata_Button;
    QPushButton *sendButton_7;
    QTextBrowser *textBrowser;
    QPushButton *clearTextButton_2;
    QPushButton *clearTextButton_3;
    QLineEdit *PasswordlineEdit;
    QPushButton *PasswordButton;
    QLabel *Passwordlabel;
    QLabel *Passwordlabel_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(984, 471);
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 11)
            tableWidget->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(160, 40, 371, 371));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableView QTableCornerButton::section {    /*  background: red;     border: 2px outset red;*/     \n"
"color: red;     \n"
"background-color: rgb(64, 64, 64);     \n"
"border: 5px solid #f6f7fa;     \n"
"border-radius:0px;     \n"
"border-color: rgb(64, 64, 64);  \n"
"}   \n"
"QTableView {     \n"
"color: white;                  /*\350\241\250\346\240\274\345\206\205\346\226\207\345\255\227\351\242\234\350\211\262*/     gridline-color: black;            /*\350\241\250\346\240\274\345\206\205\346\241\206\351\242\234\350\211\262*/     background-color: rgb(108, 108, 108);      /*\350\241\250\346\240\274\345\206\205\350\203\214\346\231\257\350\211\262*/     alternate-background-color: rgb(64, 64, 64);     \n"
"selection-color: white;         /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262*/     selection-background-color: rgb(77, 77, 77);  /*\351\200\211\344\270\255\345\214\272\345\237\237\347\232\204\350\203\214\346\231\257\350\211\262*/     \n"
"bo"
                        "rder: 2px groove gray;     \n"
"border-radius: 0px;     \n"
"padding: 2px 4px; \n"
"}  \n"
"QHeaderView {     \n"
"color: white;     \n"
"font: bold 10pt;     \n"
"background-color: rgb(108, 108, 108);     \n"
"border: 0px solid rgb(144, 144, 144);     \n"
"border:0px solid rgb(191,191,191);     \n"
"border-left-color: rgba(255, 255, 255, 0);     \n"
"border-top-color: rgba(255, 255, 255, 0);     \n"
"border-radius:0px;     \n"
"min-height:29px; }  \n"
"QHeaderView::section {     \n"
"color: white;     \n"
"background-color: rgb(64, 64, 64);     \n"
"border: 5px solid #f6f7fa;     \n"
"border-radius:0px;     \n"
"border-color: rgb(64, 64, 64); }  \n"
""));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 91, 16));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 420, 601, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OutputButton = new QPushButton(layoutWidget);
        OutputButton->setObjectName(QString::fromUtf8("OutputButton"));
        OutputButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        horizontalLayout->addWidget(OutputButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 40, 211, 374));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        up3_data = new QDoubleSpinBox(layoutWidget1);
        up3_data->setObjectName(QString::fromUtf8("up3_data"));
        up3_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        up3_data->setDecimals(1);
        up3_data->setMaximum(999.000000000000000);

        gridLayout->addWidget(up3_data, 6, 1, 1, 1);

        up4_data = new QDoubleSpinBox(layoutWidget1);
        up4_data->setObjectName(QString::fromUtf8("up4_data"));
        up4_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        up4_data->setDecimals(1);

        gridLayout->addWidget(up4_data, 8, 1, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_7, 6, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_8, 7, 0, 1, 1);

        ReadDataButton = new QPushButton(layoutWidget1);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(ReadDataButton, 10, 0, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget1);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_10, 8, 0, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget1);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_13, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_6, 5, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        down3_data = new QDoubleSpinBox(layoutWidget1);
        down3_data->setObjectName(QString::fromUtf8("down3_data"));
        down3_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        down3_data->setDecimals(1);
        down3_data->setMaximum(999.000000000000000);

        gridLayout->addWidget(down3_data, 7, 1, 1, 1);

        up2_data = new QDoubleSpinBox(layoutWidget1);
        up2_data->setObjectName(QString::fromUtf8("up2_data"));
        up2_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        up2_data->setDecimals(1);

        gridLayout->addWidget(up2_data, 4, 1, 1, 1);

        down2_data = new QDoubleSpinBox(layoutWidget1);
        down2_data->setObjectName(QString::fromUtf8("down2_data"));
        down2_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        down2_data->setDecimals(1);

        gridLayout->addWidget(down2_data, 5, 1, 1, 1);

        down4_data = new QDoubleSpinBox(layoutWidget1);
        down4_data->setObjectName(QString::fromUtf8("down4_data"));
        down4_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        down4_data->setDecimals(1);

        gridLayout->addWidget(down4_data, 9, 1, 1, 1);

        up1_data = new QDoubleSpinBox(layoutWidget1);
        up1_data->setObjectName(QString::fromUtf8("up1_data"));
        up1_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        up1_data->setDecimals(1);
        up1_data->setMaximum(100.000000000000000);

        gridLayout->addWidget(up1_data, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        RestButton = new QPushButton(layoutWidget1);
        RestButton->setObjectName(QString::fromUtf8("RestButton"));
        RestButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(RestButton, 10, 1, 1, 1);

        down1_data = new QDoubleSpinBox(layoutWidget1);
        down1_data->setObjectName(QString::fromUtf8("down1_data"));
        down1_data->setStyleSheet(QString::fromUtf8("QDoubleSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QDoubleSpinBox::down-button:pressed\n"
""
                        "{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QDoubleSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        down1_data->setDecimals(1);

        gridLayout->addWidget(down1_data, 3, 1, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget1);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_11, 9, 0, 1, 1);

        SetTimeButton = new QPushButton(layoutWidget1);
        SetTimeButton->setObjectName(QString::fromUtf8("SetTimeButton"));
        SetTimeButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        gridLayout->addWidget(SetTimeButton, 1, 0, 1, 1);

        SetTimeSpinBox = new QSpinBox(layoutWidget1);
        SetTimeSpinBox->setObjectName(QString::fromUtf8("SetTimeSpinBox"));
        SetTimeSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}\n"
"QSpinBox::up-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: top right;\n"
"   margin-right:4px;\n"
"   margin-top:2px;\n"
"   width:13px;\n"
"  image:url(:/image/img/up_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"\n"
"}\n"
"QSpinBox::up-button:pressed\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QSpinBox::up-button:disabled\n"
"{\n"
"  image:url(:/image/img/up_gray.png);\n"
"}\n"
"QSpinBox::down-button\n"
"{\n"
"   subcontrol-origin:border;\n"
"   subcontrol-position: bottom right;\n"
"   margin-right:4px;\n"
"   margin-bottom:2px;\n"
"   width:13px;\n"
"   border-top-width:0;\n"
"  image:url(:/image/img/down_white.png);\n"
"  border-width:1px;\n"
"  border-radius:3px;\n"
"}\n"
"QSpinBox::down-button:pressed\n"
"{\n"
"  image:url(:/image/img/down_"
                        "gray.png);\n"
"}\n"
"QSpinBox::down-button:disabled\n"
"{\n"
"  image:url(:/image/img/down_gray.png);\n"
"}\n"
"QSpinBox:disabled\n"
"{\n"
"    border: 2px solid  #cfccc9;\n"
"    background: white;\n"
"}"));
        SetTimeSpinBox->setMaximum(3600);

        gridLayout->addWidget(SetTimeSpinBox, 1, 1, 1, 1);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 40, 120, 371));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        basicset1 = new QGridLayout();
        basicset1->setSpacing(6);
        basicset1->setObjectName(QString::fromUtf8("basicset1"));
        portComboBox = new QComboBox(layoutWidget2);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));
        portComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"     border :  2px  solid  #00a383 ;\n"
"     border-radius:  3px ;\n"
"     padding :  1px  2px  1px  2px ; \n"
"     min-width :  9em ;   \n"
"}"));

        basicset1->addWidget(portComboBox, 0, 0, 1, 1);

        openPortButton = new QPushButton(layoutWidget2);
        openPortButton->setObjectName(QString::fromUtf8("openPortButton"));
        openPortButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
""));

        basicset1->addWidget(openPortButton, 2, 0, 1, 1);

        baudComboBox = new QComboBox(layoutWidget2);
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->setObjectName(QString::fromUtf8("baudComboBox"));
        baudComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"     border :  2px  solid  #00a383 ;\n"
"     border-radius:  3px ;\n"
"     padding :  1px  2px  1px  2px ; \n"
"     min-width :  9em ;   \n"
"}"));

        basicset1->addWidget(baudComboBox, 1, 0, 1, 1);

        clearTextButton = new QPushButton(layoutWidget2);
        clearTextButton->setObjectName(QString::fromUtf8("clearTextButton"));
        clearTextButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    color: white;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
""));

        basicset1->addWidget(clearTextButton, 3, 0, 1, 1);


        verticalLayout->addLayout(basicset1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        basicset2 = new QVBoxLayout();
        basicset2->setSpacing(6);
        basicset2->setObjectName(QString::fromUtf8("basicset2"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 25));

        basicset2->addWidget(label_9);

        sendButton_8 = new QPushButton(layoutWidget2);
        sendButton_8->setObjectName(QString::fromUtf8("sendButton_8"));
        sendButton_8->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    color: white;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
""));

        basicset2->addWidget(sendButton_8);

        readdata_Button = new QPushButton(layoutWidget2);
        readdata_Button->setObjectName(QString::fromUtf8("readdata_Button"));
        readdata_Button->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        basicset2->addWidget(readdata_Button);

        sendButton_7 = new QPushButton(layoutWidget2);
        sendButton_7->setObjectName(QString::fromUtf8("sendButton_7"));
        sendButton_7->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));

        basicset2->addWidget(sendButton_7);


        verticalLayout->addLayout(basicset2);

        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(780, 40, 181, 331));
        textBrowser->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QTextBrowser\n"
" {\n"
"	border-radius: 8px;\n"
"    color: white;\n"
"    padding: 4px;\n"
"    font-size:12px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
""));
        clearTextButton_2 = new QPushButton(Widget);
        clearTextButton_2->setObjectName(QString::fromUtf8("clearTextButton_2"));
        clearTextButton_2->setGeometry(QRect(820, 380, 107, 31));
        clearTextButton_2->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
""));
        clearTextButton_3 = new QPushButton(Widget);
        clearTextButton_3->setObjectName(QString::fromUtf8("clearTextButton_3"));
        clearTextButton_3->setGeometry(QRect(770, 420, 211, 31));
        clearTextButton_3->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"\n"
"    border-radius: 8px;\n"
"    padding: 4px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    margin: 2px 2px;\n"
"    background-color: white;\n"
"    color: black;\n"
"	background: transparent\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"    border: 2px solid #00a383;\n"
"}\n"
""));
        clearTextButton_3->setFlat(true);
        PasswordlineEdit = new QLineEdit(Widget);
        PasswordlineEdit->setObjectName(QString::fromUtf8("PasswordlineEdit"));
        PasswordlineEdit->setGeometry(QRect(700, 10, 61, 21));
        PasswordlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    border: 2px solid  #00a383;\n"
"    padding: 2px;\n"
"    border-radius: 8px;\n"
"    background: white;\n"
"    selection-background-color: green;\n"
"    font-size: 12px ;\n"
"}"));
        PasswordButton = new QPushButton(Widget);
        PasswordButton->setObjectName(QString::fromUtf8("PasswordButton"));
        PasswordButton->setGeometry(QRect(770, 10, 51, 21));
        PasswordButton->setStyleSheet(QString::fromUtf8("/* Blue Button */\n"
"QPushButton {\n"
"    border-radius: 8px;\n"
"    padding: 2px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    font-size:12px;\n"
"    background-color: white;\n"
"    color: black;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266*/\n"
"QPushButton:hover {\n"
"    background-color: #00a383;\n"
"    color: white;\n"
"}\n"
"/*\346\214\211\344\270\213\346\227\266*/\n"
"QPushButton:pressed {\n"
"    background-color: #1f7a68;\n"
"}\n"
"/*\347\246\201\347\224\250\346\227\266\346\240\267\345\274\217*/\n"
"QPushButton:disabled{\n"
"    background-color: #cfccc9;\n"
"    color:white ;\n"
"    border: 2px solid #cfccc9;\n"
"}\n"
""));
        Passwordlabel = new QLabel(Widget);
        Passwordlabel->setObjectName(QString::fromUtf8("Passwordlabel"));
        Passwordlabel->setGeometry(QRect(620, 10, 71, 16));
        Passwordlabel_2 = new QLabel(Widget);
        Passwordlabel_2->setObjectName(QString::fromUtf8("Passwordlabel_2"));
        Passwordlabel_2->setGeometry(QRect(830, 10, 71, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\346\212\245\350\255\246\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\346\260\224\344\275\223\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\346\260\224\344\275\223\346\212\245\350\255\246\345\200\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("Widget", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("Widget", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("Widget", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("Widget", "11", nullptr));
        label->setText(QApplication::translate("Widget", "\345\255\230\345\202\250\345\206\205\345\256\271\350\257\273\345\217\226", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\276\205\350\257\273\345\217\226\346\225\260\346\215\256.....", nullptr));
        OutputButton->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\345\257\274\345\207\272Excel", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\344\270\200\351\224\256\346\270\205\351\231\244\350\212\257\347\211\207\345\255\230\345\202\250", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "\346\260\224\344\275\2233\346\212\245\350\255\246\351\253\230\346\212\245", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "\346\260\224\344\275\2233\346\212\245\350\255\246\344\275\216\346\212\245", nullptr));
        ReadDataButton->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\345\217\202\346\225\260", nullptr));
        pushButton_10->setText(QApplication::translate("Widget", "\346\260\224\344\275\2234\346\212\245\350\255\246\351\253\230\346\212\245", nullptr));
        pushButton_13->setText(QApplication::translate("Widget", "\346\260\224\344\275\223\346\240\207\345\256\232", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\346\260\224\344\275\2231\346\212\245\350\255\246\344\270\212\351\231\220", nullptr));
        pushButton_6->setText(QApplication::translate("Widget", "\346\260\224\344\275\2232\346\212\245\350\255\246\344\275\216\346\212\245", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\346\260\224\344\275\2232\346\212\245\350\255\246\351\253\230\346\212\245", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\346\240\241\345\207\206\346\227\266\351\227\264", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\346\260\224\344\275\2231\346\212\245\350\255\246\344\270\213\351\231\220", nullptr));
        RestButton->setText(QApplication::translate("Widget", "\344\270\200\351\224\256\346\201\242\345\244\215\351\273\230\350\256\244\345\200\274", nullptr));
        pushButton_11->setText(QApplication::translate("Widget", "\346\260\224\344\275\2234\346\212\245\350\255\246\344\275\216\346\212\245", nullptr));
        SetTimeButton->setText(QApplication::translate("Widget", "\346\201\257\345\261\217\346\227\266\351\227\264", nullptr));
        SetTimeSpinBox->setSuffix(QApplication::translate("Widget", "s", nullptr));
        openPortButton->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        baudComboBox->setItemText(0, QApplication::translate("Widget", "2400", nullptr));
        baudComboBox->setItemText(1, QApplication::translate("Widget", "4800", nullptr));
        baudComboBox->setItemText(2, QApplication::translate("Widget", "9600", nullptr));
        baudComboBox->setItemText(3, QApplication::translate("Widget", "19200", nullptr));
        baudComboBox->setItemText(4, QApplication::translate("Widget", "57600", nullptr));
        baudComboBox->setItemText(5, QApplication::translate("Widget", "115200", nullptr));

        clearTextButton->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        label_9->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\346\234\252\350\277\236\346\216\245", nullptr));
        sendButton_8->setText(QApplication::translate("Widget", "\350\277\236\346\216\245\350\256\276\345\244\207", nullptr));
        readdata_Button->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\346\225\260\346\215\256", nullptr));
        sendButton_7->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\350\257\273\345\217\226", nullptr));
        clearTextButton_2->setText(QApplication::translate("Widget", "\346\270\205\345\261\217", nullptr));
        clearTextButton_3->setText(QString());
        PasswordButton->setText(QApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        Passwordlabel->setText(QString());
        Passwordlabel_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
