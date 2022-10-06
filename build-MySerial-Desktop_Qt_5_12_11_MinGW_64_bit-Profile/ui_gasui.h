/********************************************************************************
** Form generated from reading UI file 'gasui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GASUI_H
#define UI_GASUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GasUI
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_12;
    QTextEdit *GASADText1;
    QTextEdit *GASRealText1;
    QTextEdit *GASAdjuct_1;
    QPushButton *AdjuctReadButton_1;
    QPushButton *AdjuctSetButton_1;
    QPushButton *ZeroButton_1;
    QPushButton *OpenTwoButton_1;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextEdit *textEdit_4;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QTextEdit *GASADText2;
    QTextEdit *GASRealText2;
    QTextEdit *GASAdjuct_2;
    QPushButton *AdjuctReadButton_2;
    QPushButton *AdjuctSetButton_2;
    QPushButton *ZeroButton_2;
    QPushButton *OpenTwoButton_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QLabel *label_6;
    QTextEdit *textEdit_8;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *pushButton_10;
    QWidget *page_3;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QLabel *label_9;
    QTextEdit *textEdit_12;
    QLabel *label_10;
    QLabel *label_17;
    QPushButton *pushButton_13;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QTextEdit *GASADText3;
    QTextEdit *GASRealText3;
    QTextEdit *GASAdjuct_3;
    QPushButton *AdjuctReadButton_3;
    QPushButton *AdjuctSetButton_3;
    QPushButton *ZeroButton_3;
    QPushButton *OpenTwoButton_3;
    QWidget *page_4;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QTextEdit *GASADText4;
    QTextEdit *GASRealText4;
    QTextEdit *GASAdjuct_4;
    QPushButton *AdjuctReadButton_4;
    QPushButton *AdjuctSetButton_4;
    QPushButton *ZeroButton_4;
    QPushButton *OpenTwoButton_4;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_15;
    QLabel *label_24;
    QTextEdit *textEdit_16;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton_20;
    QWidget *page_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QTextEdit *PassWordtextEdit;
    QPushButton *setPWpushButton;
    QListWidget *listWidget;

    void setupUi(QMainWindow *GasUI)
    {
        if (GasUI->objectName().isEmpty())
            GasUI->setObjectName(QString::fromUtf8("GasUI"));
        GasUI->resize(502, 241);
        centralwidget = new QWidget(GasUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(100, 0, 401, 241));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("QWidget#page\n"
" {\n"
"	border-radius: 8px;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QWidget\n"
" {\n"
"    background-color: #fbecde;\n"
"}"));
        gridLayoutWidget_3 = new QWidget(page);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 381, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 0, 2, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        GASADText1 = new QTextEdit(gridLayoutWidget_3);
        GASADText1->setObjectName(QString::fromUtf8("GASADText1"));

        gridLayout_3->addWidget(GASADText1, 0, 3, 1, 1);

        GASRealText1 = new QTextEdit(gridLayoutWidget_3);
        GASRealText1->setObjectName(QString::fromUtf8("GASRealText1"));

        gridLayout_3->addWidget(GASRealText1, 0, 1, 1, 1);

        GASAdjuct_1 = new QTextEdit(gridLayoutWidget_3);
        GASAdjuct_1->setObjectName(QString::fromUtf8("GASAdjuct_1"));

        gridLayout_3->addWidget(GASAdjuct_1, 1, 1, 1, 1);

        AdjuctReadButton_1 = new QPushButton(gridLayoutWidget_3);
        AdjuctReadButton_1->setObjectName(QString::fromUtf8("AdjuctReadButton_1"));

        gridLayout_3->addWidget(AdjuctReadButton_1, 1, 2, 1, 1);

        AdjuctSetButton_1 = new QPushButton(gridLayoutWidget_3);
        AdjuctSetButton_1->setObjectName(QString::fromUtf8("AdjuctSetButton_1"));

        gridLayout_3->addWidget(AdjuctSetButton_1, 1, 3, 1, 1);

        ZeroButton_1 = new QPushButton(gridLayoutWidget_3);
        ZeroButton_1->setObjectName(QString::fromUtf8("ZeroButton_1"));

        gridLayout_3->addWidget(ZeroButton_1, 2, 0, 1, 2);

        OpenTwoButton_1 = new QPushButton(gridLayoutWidget_3);
        OpenTwoButton_1->setObjectName(QString::fromUtf8("OpenTwoButton_1"));

        gridLayout_3->addWidget(OpenTwoButton_1, 2, 2, 1, 2);

        gridLayoutWidget = new QWidget(page);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 110, 379, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 3, 1, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 2, 3, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

        gridLayout->addWidget(textEdit_4, 3, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 4, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 4);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QWidget#page_2\n"
" {\n"
"	border-radius: 8px;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QWidget\n"
" {	\n"
"    background-color: #fbf2e3;\n"
"}"));
        gridLayoutWidget_4 = new QWidget(page_2);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 10, 381, 91));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(gridLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 0, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        GASADText2 = new QTextEdit(gridLayoutWidget_4);
        GASADText2->setObjectName(QString::fromUtf8("GASADText2"));

        gridLayout_4->addWidget(GASADText2, 0, 3, 1, 1);

        GASRealText2 = new QTextEdit(gridLayoutWidget_4);
        GASRealText2->setObjectName(QString::fromUtf8("GASRealText2"));

        gridLayout_4->addWidget(GASRealText2, 0, 1, 1, 1);

        GASAdjuct_2 = new QTextEdit(gridLayoutWidget_4);
        GASAdjuct_2->setObjectName(QString::fromUtf8("GASAdjuct_2"));

        gridLayout_4->addWidget(GASAdjuct_2, 1, 1, 1, 1);

        AdjuctReadButton_2 = new QPushButton(gridLayoutWidget_4);
        AdjuctReadButton_2->setObjectName(QString::fromUtf8("AdjuctReadButton_2"));

        gridLayout_4->addWidget(AdjuctReadButton_2, 1, 2, 1, 1);

        AdjuctSetButton_2 = new QPushButton(gridLayoutWidget_4);
        AdjuctSetButton_2->setObjectName(QString::fromUtf8("AdjuctSetButton_2"));

        gridLayout_4->addWidget(AdjuctSetButton_2, 1, 3, 1, 1);

        ZeroButton_2 = new QPushButton(gridLayoutWidget_4);
        ZeroButton_2->setObjectName(QString::fromUtf8("ZeroButton_2"));

        gridLayout_4->addWidget(ZeroButton_2, 2, 0, 1, 2);

        OpenTwoButton_2 = new QPushButton(gridLayoutWidget_4);
        OpenTwoButton_2->setObjectName(QString::fromUtf8("OpenTwoButton_2"));

        gridLayout_4->addWidget(OpenTwoButton_2, 2, 2, 1, 2);

        gridLayoutWidget_2 = new QWidget(page_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 110, 379, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_2->addWidget(pushButton_9, 3, 2, 1, 1);

        textEdit_5 = new QTextEdit(gridLayoutWidget_2);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));

        gridLayout_2->addWidget(textEdit_5, 3, 1, 1, 1);

        textEdit_6 = new QTextEdit(gridLayoutWidget_2);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));

        gridLayout_2->addWidget(textEdit_6, 2, 3, 1, 1);

        textEdit_7 = new QTextEdit(gridLayoutWidget_2);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));

        gridLayout_2->addWidget(textEdit_7, 2, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 1, 1, 1);

        textEdit_8 = new QTextEdit(gridLayoutWidget_2);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));

        gridLayout_2->addWidget(textEdit_8, 3, 3, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 4, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_2->addWidget(pushButton_10, 4, 0, 1, 4);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("QWidget#page_3\n"
" {\n"
"	border-radius: 8px;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QWidget\n"
" {	\n"
"    background-color: #f8f4ed;\n"
"}"));
        gridLayoutWidget_5 = new QWidget(page_3);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 110, 379, 121));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(gridLayoutWidget_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_5->addWidget(pushButton_11, 2, 2, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_5->addWidget(pushButton_12, 3, 2, 1, 1);

        textEdit_9 = new QTextEdit(gridLayoutWidget_5);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));

        gridLayout_5->addWidget(textEdit_9, 3, 1, 1, 1);

        textEdit_10 = new QTextEdit(gridLayoutWidget_5);
        textEdit_10->setObjectName(QString::fromUtf8("textEdit_10"));

        gridLayout_5->addWidget(textEdit_10, 2, 3, 1, 1);

        textEdit_11 = new QTextEdit(gridLayoutWidget_5);
        textEdit_11->setObjectName(QString::fromUtf8("textEdit_11"));

        gridLayout_5->addWidget(textEdit_11, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 1, 1, 1, 1);

        textEdit_12 = new QTextEdit(gridLayoutWidget_5);
        textEdit_12->setObjectName(QString::fromUtf8("textEdit_12"));

        gridLayout_5->addWidget(textEdit_12, 3, 3, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 1, 3, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 0, 0, 4, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_5);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_5->addWidget(pushButton_13, 4, 0, 1, 4);

        gridLayoutWidget_6 = new QWidget(page_3);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(10, 10, 381, 91));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(gridLayoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_6->addWidget(label_18, 0, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_6->addWidget(label_19, 0, 2, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_6->addWidget(label_20, 1, 0, 1, 1);

        GASADText3 = new QTextEdit(gridLayoutWidget_6);
        GASADText3->setObjectName(QString::fromUtf8("GASADText3"));

        gridLayout_6->addWidget(GASADText3, 0, 3, 1, 1);

        GASRealText3 = new QTextEdit(gridLayoutWidget_6);
        GASRealText3->setObjectName(QString::fromUtf8("GASRealText3"));

        gridLayout_6->addWidget(GASRealText3, 0, 1, 1, 1);

        GASAdjuct_3 = new QTextEdit(gridLayoutWidget_6);
        GASAdjuct_3->setObjectName(QString::fromUtf8("GASAdjuct_3"));

        gridLayout_6->addWidget(GASAdjuct_3, 1, 1, 1, 1);

        AdjuctReadButton_3 = new QPushButton(gridLayoutWidget_6);
        AdjuctReadButton_3->setObjectName(QString::fromUtf8("AdjuctReadButton_3"));

        gridLayout_6->addWidget(AdjuctReadButton_3, 1, 2, 1, 1);

        AdjuctSetButton_3 = new QPushButton(gridLayoutWidget_6);
        AdjuctSetButton_3->setObjectName(QString::fromUtf8("AdjuctSetButton_3"));

        gridLayout_6->addWidget(AdjuctSetButton_3, 1, 3, 1, 1);

        ZeroButton_3 = new QPushButton(gridLayoutWidget_6);
        ZeroButton_3->setObjectName(QString::fromUtf8("ZeroButton_3"));

        gridLayout_6->addWidget(ZeroButton_3, 2, 0, 1, 2);

        OpenTwoButton_3 = new QPushButton(gridLayoutWidget_6);
        OpenTwoButton_3->setObjectName(QString::fromUtf8("OpenTwoButton_3"));

        gridLayout_6->addWidget(OpenTwoButton_3, 2, 2, 1, 2);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setStyleSheet(QString::fromUtf8("QWidget#page_4\n"
" {\n"
"	border-radius: 8px;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QWidget\n"
" {\n"
"    background-color: #f9f1db;\n"
"}"));
        gridLayoutWidget_7 = new QWidget(page_4);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 10, 381, 91));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(gridLayoutWidget_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_7->addWidget(label_21, 0, 0, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_7->addWidget(label_22, 0, 2, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_7->addWidget(label_23, 1, 0, 1, 1);

        GASADText4 = new QTextEdit(gridLayoutWidget_7);
        GASADText4->setObjectName(QString::fromUtf8("GASADText4"));

        gridLayout_7->addWidget(GASADText4, 0, 3, 1, 1);

        GASRealText4 = new QTextEdit(gridLayoutWidget_7);
        GASRealText4->setObjectName(QString::fromUtf8("GASRealText4"));

        gridLayout_7->addWidget(GASRealText4, 0, 1, 1, 1);

        GASAdjuct_4 = new QTextEdit(gridLayoutWidget_7);
        GASAdjuct_4->setObjectName(QString::fromUtf8("GASAdjuct_4"));

        gridLayout_7->addWidget(GASAdjuct_4, 1, 1, 1, 1);

        AdjuctReadButton_4 = new QPushButton(gridLayoutWidget_7);
        AdjuctReadButton_4->setObjectName(QString::fromUtf8("AdjuctReadButton_4"));

        gridLayout_7->addWidget(AdjuctReadButton_4, 1, 2, 1, 1);

        AdjuctSetButton_4 = new QPushButton(gridLayoutWidget_7);
        AdjuctSetButton_4->setObjectName(QString::fromUtf8("AdjuctSetButton_4"));

        gridLayout_7->addWidget(AdjuctSetButton_4, 1, 3, 1, 1);

        ZeroButton_4 = new QPushButton(gridLayoutWidget_7);
        ZeroButton_4->setObjectName(QString::fromUtf8("ZeroButton_4"));

        gridLayout_7->addWidget(ZeroButton_4, 2, 0, 1, 2);

        OpenTwoButton_4 = new QPushButton(gridLayoutWidget_7);
        OpenTwoButton_4->setObjectName(QString::fromUtf8("OpenTwoButton_4"));

        gridLayout_7->addWidget(OpenTwoButton_4, 2, 2, 1, 2);

        gridLayoutWidget_8 = new QWidget(page_4);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(10, 110, 379, 121));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(gridLayoutWidget_8);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        gridLayout_8->addWidget(pushButton_18, 2, 2, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget_8);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout_8->addWidget(pushButton_19, 3, 2, 1, 1);

        textEdit_13 = new QTextEdit(gridLayoutWidget_8);
        textEdit_13->setObjectName(QString::fromUtf8("textEdit_13"));

        gridLayout_8->addWidget(textEdit_13, 3, 1, 1, 1);

        textEdit_14 = new QTextEdit(gridLayoutWidget_8);
        textEdit_14->setObjectName(QString::fromUtf8("textEdit_14"));

        gridLayout_8->addWidget(textEdit_14, 2, 3, 1, 1);

        textEdit_15 = new QTextEdit(gridLayoutWidget_8);
        textEdit_15->setObjectName(QString::fromUtf8("textEdit_15"));

        gridLayout_8->addWidget(textEdit_15, 2, 1, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_8);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_8->addWidget(label_24, 1, 1, 1, 1);

        textEdit_16 = new QTextEdit(gridLayoutWidget_8);
        textEdit_16->setObjectName(QString::fromUtf8("textEdit_16"));

        gridLayout_8->addWidget(textEdit_16, 3, 3, 1, 1);

        label_25 = new QLabel(gridLayoutWidget_8);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_8->addWidget(label_25, 1, 3, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_8);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_8->addWidget(label_26, 0, 0, 4, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget_8);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout_8->addWidget(pushButton_20, 4, 0, 1, 4);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setStyleSheet(QString::fromUtf8("QWidget#page_5\n"
" {\n"
"	border-radius: 8px;\n"
"    border: 2px solid #00a383;\n"
"}\n"
"QWidget\n"
" {\n"
"    background-color: #f0f5e5;\n"
"}"));
        verticalLayoutWidget = new QWidget(page_5);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 70, 141, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        PassWordtextEdit = new QTextEdit(verticalLayoutWidget);
        PassWordtextEdit->setObjectName(QString::fromUtf8("PassWordtextEdit"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        PassWordtextEdit->setFont(font);

        verticalLayout->addWidget(PassWordtextEdit, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        setPWpushButton = new QPushButton(verticalLayoutWidget);
        setPWpushButton->setObjectName(QString::fromUtf8("setPWpushButton"));

        verticalLayout->addWidget(setPWpushButton);

        stackedWidget->addWidget(page_5);
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 101, 241));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
" font-size:16px;\n"
"}\n"
"QListWidget::item\n"
" {\n"
"	background-color: #393d49;\n"
"    color: #ffffff;\n"
"    border: transparent;\n"
"    padding:12px;\n"
"   \n"
"}\n"
"QListWidget::item:hover\n"
"{\n"
"  background-color: #4e5465;\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"  border-left: 5px solid #009688;\n"
"}"));
        GasUI->setCentralWidget(centralwidget);

        retranslateUi(GasUI);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GasUI);
    } // setupUi

    void retranslateUi(QMainWindow *GasUI)
    {
        GasUI->setWindowTitle(QApplication::translate("GasUI", "MainWindow", nullptr));
        label_11->setText(QApplication::translate("GasUI", "\345\256\236\351\231\205\346\265\223\345\272\246\345\200\274\357\274\232", nullptr));
        label_13->setText(QApplication::translate("GasUI", "\345\275\223\345\211\215\346\250\241\346\213\237\351\207\217\345\200\274\357\274\232", nullptr));
        label_12->setText(QApplication::translate("GasUI", "\346\225\260\346\215\256\345\276\256\350\260\203\357\274\232", nullptr));
        AdjuctReadButton_1->setText(QApplication::translate("GasUI", "\350\257\273\345\217\226", nullptr));
        AdjuctSetButton_1->setText(QApplication::translate("GasUI", "\350\256\276\347\275\256", nullptr));
        ZeroButton_1->setText(QApplication::translate("GasUI", "\351\233\266\347\202\271\346\240\241\345\207\206", nullptr));
        OpenTwoButton_1->setText(QApplication::translate("GasUI", "\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        pushButton_3->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        label_4->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\346\260\224\344\275\223\346\265\223\345\272\246\345\200\274", nullptr));
        label_5->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\345\217\202\346\225\260\345\200\274", nullptr));
        label_2->setText(QApplication::translate("GasUI", "\346\260\224\344\275\223\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_5->setText(QApplication::translate("GasUI", "\346\234\200\347\273\210\346\240\207\345\256\232", nullptr));
        label_14->setText(QApplication::translate("GasUI", "\345\256\236\351\231\205\346\265\223\345\272\246\345\200\274\357\274\232", nullptr));
        label_15->setText(QApplication::translate("GasUI", "\345\275\223\345\211\215\346\250\241\346\213\237\351\207\217\345\200\274\357\274\232", nullptr));
        label_16->setText(QApplication::translate("GasUI", "\346\225\260\346\215\256\345\276\256\350\260\203\357\274\232", nullptr));
        AdjuctReadButton_2->setText(QApplication::translate("GasUI", "\350\257\273\345\217\226", nullptr));
        AdjuctSetButton_2->setText(QApplication::translate("GasUI", "\350\256\276\347\275\256", nullptr));
        ZeroButton_2->setText(QApplication::translate("GasUI", "\351\233\266\347\202\271\346\240\241\345\207\206", nullptr));
        OpenTwoButton_2->setText(QApplication::translate("GasUI", "\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_8->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        pushButton_9->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        label_6->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\346\260\224\344\275\223\346\265\223\345\272\246\345\200\274", nullptr));
        label_7->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\345\217\202\346\225\260\345\200\274", nullptr));
        label_3->setText(QApplication::translate("GasUI", "\346\260\224\344\275\223\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_10->setText(QApplication::translate("GasUI", "\346\234\200\347\273\210\346\240\207\345\256\232", nullptr));
        pushButton_11->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        pushButton_12->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        label_9->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\346\260\224\344\275\223\346\265\223\345\272\246\345\200\274", nullptr));
        label_10->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\345\217\202\346\225\260\345\200\274", nullptr));
        label_17->setText(QApplication::translate("GasUI", "\346\260\224\344\275\223\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_13->setText(QApplication::translate("GasUI", "\346\234\200\347\273\210\346\240\207\345\256\232", nullptr));
        label_18->setText(QApplication::translate("GasUI", "\345\256\236\351\231\205\346\265\223\345\272\246\345\200\274\357\274\232", nullptr));
        label_19->setText(QApplication::translate("GasUI", "\345\275\223\345\211\215\346\250\241\346\213\237\351\207\217\345\200\274\357\274\232", nullptr));
        label_20->setText(QApplication::translate("GasUI", "\346\225\260\346\215\256\345\276\256\350\260\203\357\274\232", nullptr));
        AdjuctReadButton_3->setText(QApplication::translate("GasUI", "\350\257\273\345\217\226", nullptr));
        AdjuctSetButton_3->setText(QApplication::translate("GasUI", "\350\256\276\347\275\256", nullptr));
        ZeroButton_3->setText(QApplication::translate("GasUI", "\351\233\266\347\202\271\346\240\241\345\207\206", nullptr));
        OpenTwoButton_3->setText(QApplication::translate("GasUI", "\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        label_21->setText(QApplication::translate("GasUI", "\345\256\236\351\231\205\346\265\223\345\272\246\345\200\274\357\274\232", nullptr));
        label_22->setText(QApplication::translate("GasUI", "\345\275\223\345\211\215\346\250\241\346\213\237\351\207\217\345\200\274\357\274\232", nullptr));
        label_23->setText(QApplication::translate("GasUI", "\346\225\260\346\215\256\345\276\256\350\260\203\357\274\232", nullptr));
        AdjuctReadButton_4->setText(QApplication::translate("GasUI", "\350\257\273\345\217\226", nullptr));
        AdjuctSetButton_4->setText(QApplication::translate("GasUI", "\350\256\276\347\275\256", nullptr));
        ZeroButton_4->setText(QApplication::translate("GasUI", "\351\233\266\347\202\271\346\240\241\345\207\206", nullptr));
        OpenTwoButton_4->setText(QApplication::translate("GasUI", "\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_18->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        pushButton_19->setText(QApplication::translate("GasUI", "\345\206\231\345\205\245\345\217\202\346\225\260", nullptr));
        label_24->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\346\260\224\344\275\223\346\265\223\345\272\246\345\200\274", nullptr));
        label_25->setText(QApplication::translate("GasUI", "\346\240\207\345\256\232\345\217\202\346\225\260\345\200\274", nullptr));
        label_26->setText(QApplication::translate("GasUI", "\346\260\224\344\275\223\344\270\244\347\202\271\346\240\207\345\256\232", nullptr));
        pushButton_20->setText(QApplication::translate("GasUI", "\346\234\200\347\273\210\346\240\207\345\256\232", nullptr));
        label_8->setText(QApplication::translate("GasUI", "\345\257\206\347\240\201\346\233\264\346\224\271-\350\257\267\350\276\223\345\205\2454\344\275\215\346\225\260\345\255\227", nullptr));
        setPWpushButton->setText(QApplication::translate("GasUI", "\350\256\276\347\275\256", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("GasUI", "\346\260\224\344\275\2231", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("GasUI", "\346\260\224\344\275\2232", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("GasUI", "\346\260\224\344\275\2233", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("GasUI", "\346\260\224\344\275\2234", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("GasUI", "\345\257\206\347\240\201", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class GasUI: public Ui_GasUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GASUI_H
