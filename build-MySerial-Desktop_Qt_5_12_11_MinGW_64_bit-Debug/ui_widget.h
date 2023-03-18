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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QGridLayout *basicset1;
    QComboBox *portComboBox;
    QPushButton *openPortButton;
    QComboBox *baudComboBox;
    QPushButton *clearTextButton;
    QPushButton *clearSendButton;
    QPushButton *sendButton_9;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *basicset2;
    QLabel *label_9;
    QTextEdit *recvTextEdit_8;
    QPushButton *sendButton_8;
    QPushButton *readdata_Button;
    QPushButton *sendButton_7;
    QLabel *label_7;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_7;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *sendButton_17;
    QLabel *label_14;
    QPushButton *sendButton_16;
    QLabel *label_18;
    QPushButton *sendButton_14;
    QTextEdit *recvTextEdit_17;
    QPushButton *pushButton_3;
    QPushButton *sendButton_5;
    QTextEdit *recvTextEdit_12;
    QPushButton *sendButton_4;
    QPushButton *sendButton_10;
    QPushButton *sendButton_15;
    QTextEdit *recvTextEdit_9;
    QPushButton *pushButton_4;
    QTextEdit *recvTextEdit_14;
    QPushButton *sendButton_13;
    QLabel *label_10;
    QPushButton *sendButton_11;
    QPushButton *pushButton_2;
    QLabel *label_15;
    QPushButton *sendButton_2;
    QLabel *label_17;
    QTextEdit *recvTextEdit_10;
    QTextEdit *recvTextEdit_11;
    QLabel *label_20;
    QPushButton *pushButton;
    QPushButton *sendButton_6;
    QPushButton *sendButton_12;
    QPushButton *sendButton_3;
    QTextEdit *recvTextEdit_13;
    QLabel *label_19;
    QPushButton *sendButton_18;
    QWidget *gridLayoutWidget;
    QGridLayout *dataread;
    QTextEdit *recvTextEdit_5;
    QTextEdit *recvTextEdit_2;
    QTextEdit *recvTextEdit;
    QLabel *label_5;
    QLabel *label_3;
    QTextEdit *recvTextEdit_4;
    QTextEdit *recvTextEdit_6;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *recvTextEdit_3;
    QLabel *label_6;
    QLabel *label_8;
    QTextEdit *recvTextEdit_7;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *dataread_2;
    QTextEdit *recvTextEdit_16;
    QTextEdit *recvTextEdit_19;
    QLabel *label_12;
    QLabel *label_11;
    QTextEdit *recvTextEdit_15;
    QLabel *label_13;
    QTextEdit *recvTextEdit_20;
    QLabel *label_16;
    QWidget *gridLayoutWidget_3;
    QGridLayout *dataread_3;
    QTextEdit *recvTextEdit_18;
    QLabel *label_21;
    QPushButton *sendButton_19;
    QPushButton *sendButton_20;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(881, 466);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 40, 77, 135));
        basicset1 = new QGridLayout(layoutWidget);
        basicset1->setSpacing(6);
        basicset1->setContentsMargins(11, 11, 11, 11);
        basicset1->setObjectName(QString::fromUtf8("basicset1"));
        basicset1->setContentsMargins(0, 0, 0, 0);
        portComboBox = new QComboBox(layoutWidget);
        portComboBox->setObjectName(QString::fromUtf8("portComboBox"));

        basicset1->addWidget(portComboBox, 0, 0, 1, 1);

        openPortButton = new QPushButton(layoutWidget);
        openPortButton->setObjectName(QString::fromUtf8("openPortButton"));

        basicset1->addWidget(openPortButton, 2, 0, 1, 1);

        baudComboBox = new QComboBox(layoutWidget);
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->addItem(QString());
        baudComboBox->setObjectName(QString::fromUtf8("baudComboBox"));

        basicset1->addWidget(baudComboBox, 1, 0, 1, 1);

        clearTextButton = new QPushButton(layoutWidget);
        clearTextButton->setObjectName(QString::fromUtf8("clearTextButton"));

        basicset1->addWidget(clearTextButton, 3, 0, 1, 1);

        clearSendButton = new QPushButton(layoutWidget);
        clearSendButton->setObjectName(QString::fromUtf8("clearSendButton"));

        basicset1->addWidget(clearSendButton, 4, 0, 1, 1);

        sendButton_9 = new QPushButton(Widget);
        sendButton_9->setObjectName(QString::fromUtf8("sendButton_9"));
        sendButton_9->setGeometry(QRect(170, 350, 75, 23));
        sendButton_9->setIconSize(QSize(100, 16));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 190, 91, 132));
        basicset2 = new QVBoxLayout(verticalLayoutWidget);
        basicset2->setSpacing(6);
        basicset2->setContentsMargins(11, 11, 11, 11);
        basicset2->setObjectName(QString::fromUtf8("basicset2"));
        basicset2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 25));

        basicset2->addWidget(label_9);

        recvTextEdit_8 = new QTextEdit(verticalLayoutWidget);
        recvTextEdit_8->setObjectName(QString::fromUtf8("recvTextEdit_8"));
        recvTextEdit_8->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_8->setReadOnly(true);

        basicset2->addWidget(recvTextEdit_8);

        sendButton_8 = new QPushButton(verticalLayoutWidget);
        sendButton_8->setObjectName(QString::fromUtf8("sendButton_8"));

        basicset2->addWidget(sendButton_8);

        readdata_Button = new QPushButton(verticalLayoutWidget);
        readdata_Button->setObjectName(QString::fromUtf8("readdata_Button"));

        basicset2->addWidget(readdata_Button);

        sendButton_7 = new QPushButton(verticalLayoutWidget);
        sendButton_7->setObjectName(QString::fromUtf8("sendButton_7"));

        basicset2->addWidget(sendButton_7);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(380, 10, 156, 16));
        formLayoutWidget_2 = new QWidget(Widget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(170, 260, 171, 84));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_1 = new QCheckBox(formLayoutWidget_2);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, checkBox_1);

        checkBox_4 = new QCheckBox(formLayoutWidget_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        formLayout->setWidget(0, QFormLayout::FieldRole, checkBox_4);

        checkBox_5 = new QCheckBox(formLayoutWidget_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkBox_5);

        checkBox_3 = new QCheckBox(formLayoutWidget_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBox_3);

        checkBox_6 = new QCheckBox(formLayoutWidget_2);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBox_6);

        checkBox_2 = new QCheckBox(formLayoutWidget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBox_2);

        checkBox_7 = new QCheckBox(formLayoutWidget_2);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, checkBox_7);

        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(390, 40, 261, 358));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sendButton_17 = new QPushButton(formLayoutWidget);
        sendButton_17->setObjectName(QString::fromUtf8("sendButton_17"));

        gridLayout->addWidget(sendButton_17, 11, 2, 1, 1);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        sendButton_16 = new QPushButton(formLayoutWidget);
        sendButton_16->setObjectName(QString::fromUtf8("sendButton_16"));

        gridLayout->addWidget(sendButton_16, 10, 2, 1, 1);

        label_18 = new QLabel(formLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 9, 0, 1, 1);

        sendButton_14 = new QPushButton(formLayoutWidget);
        sendButton_14->setObjectName(QString::fromUtf8("sendButton_14"));

        gridLayout->addWidget(sendButton_14, 1, 2, 1, 1);

        recvTextEdit_17 = new QTextEdit(formLayoutWidget);
        recvTextEdit_17->setObjectName(QString::fromUtf8("recvTextEdit_17"));
        recvTextEdit_17->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_17, 6, 1, 1, 1);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 6, 2, 1, 1);

        sendButton_5 = new QPushButton(formLayoutWidget);
        sendButton_5->setObjectName(QString::fromUtf8("sendButton_5"));

        gridLayout->addWidget(sendButton_5, 1, 1, 1, 1);

        recvTextEdit_12 = new QTextEdit(formLayoutWidget);
        recvTextEdit_12->setObjectName(QString::fromUtf8("recvTextEdit_12"));
        recvTextEdit_12->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_12, 10, 1, 1, 1);

        sendButton_4 = new QPushButton(formLayoutWidget);
        sendButton_4->setObjectName(QString::fromUtf8("sendButton_4"));

        gridLayout->addWidget(sendButton_4, 2, 1, 1, 1);

        sendButton_10 = new QPushButton(formLayoutWidget);
        sendButton_10->setObjectName(QString::fromUtf8("sendButton_10"));

        gridLayout->addWidget(sendButton_10, 8, 2, 1, 1);

        sendButton_15 = new QPushButton(formLayoutWidget);
        sendButton_15->setObjectName(QString::fromUtf8("sendButton_15"));

        gridLayout->addWidget(sendButton_15, 9, 2, 1, 1);

        recvTextEdit_9 = new QTextEdit(formLayoutWidget);
        recvTextEdit_9->setObjectName(QString::fromUtf8("recvTextEdit_9"));
        recvTextEdit_9->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_9, 7, 1, 1, 1);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 7, 2, 1, 1);

        recvTextEdit_14 = new QTextEdit(formLayoutWidget);
        recvTextEdit_14->setObjectName(QString::fromUtf8("recvTextEdit_14"));
        recvTextEdit_14->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_14, 5, 1, 1, 1);

        sendButton_13 = new QPushButton(formLayoutWidget);
        sendButton_13->setObjectName(QString::fromUtf8("sendButton_13"));

        gridLayout->addWidget(sendButton_13, 2, 0, 1, 1);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        sendButton_11 = new QPushButton(formLayoutWidget);
        sendButton_11->setObjectName(QString::fromUtf8("sendButton_11"));

        gridLayout->addWidget(sendButton_11, 8, 1, 1, 1);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 5, 2, 1, 1);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 6, 0, 1, 1);

        sendButton_2 = new QPushButton(formLayoutWidget);
        buttonGroup = new QButtonGroup(Widget);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(sendButton_2);
        sendButton_2->setObjectName(QString::fromUtf8("sendButton_2"));

        gridLayout->addWidget(sendButton_2, 0, 0, 1, 1);

        label_17 = new QLabel(formLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 7, 0, 1, 1);

        recvTextEdit_10 = new QTextEdit(formLayoutWidget);
        recvTextEdit_10->setObjectName(QString::fromUtf8("recvTextEdit_10"));
        recvTextEdit_10->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_10, 9, 1, 1, 1);

        recvTextEdit_11 = new QTextEdit(formLayoutWidget);
        recvTextEdit_11->setObjectName(QString::fromUtf8("recvTextEdit_11"));
        recvTextEdit_11->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_11, 11, 1, 1, 1);

        label_20 = new QLabel(formLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 11, 0, 1, 1);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);

        sendButton_6 = new QPushButton(formLayoutWidget);
        sendButton_6->setObjectName(QString::fromUtf8("sendButton_6"));

        gridLayout->addWidget(sendButton_6, 8, 0, 1, 1);

        sendButton_12 = new QPushButton(formLayoutWidget);
        buttonGroup->addButton(sendButton_12);
        sendButton_12->setObjectName(QString::fromUtf8("sendButton_12"));

        gridLayout->addWidget(sendButton_12, 1, 0, 1, 1);

        sendButton_3 = new QPushButton(formLayoutWidget);
        buttonGroup->addButton(sendButton_3);
        sendButton_3->setObjectName(QString::fromUtf8("sendButton_3"));

        gridLayout->addWidget(sendButton_3, 0, 1, 1, 1);

        recvTextEdit_13 = new QTextEdit(formLayoutWidget);
        recvTextEdit_13->setObjectName(QString::fromUtf8("recvTextEdit_13"));
        recvTextEdit_13->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(recvTextEdit_13, 4, 1, 1, 1);

        label_19 = new QLabel(formLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 10, 0, 1, 1);

        sendButton_18 = new QPushButton(formLayoutWidget);
        sendButton_18->setObjectName(QString::fromUtf8("sendButton_18"));

        gridLayout->addWidget(sendButton_18, 12, 0, 1, 3);

        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(170, 40, 171, 213));
        dataread = new QGridLayout(gridLayoutWidget);
        dataread->setSpacing(6);
        dataread->setContentsMargins(11, 11, 11, 11);
        dataread->setObjectName(QString::fromUtf8("dataread"));
        dataread->setContentsMargins(0, 0, 0, 0);
        recvTextEdit_5 = new QTextEdit(gridLayoutWidget);
        recvTextEdit_5->setObjectName(QString::fromUtf8("recvTextEdit_5"));
        recvTextEdit_5->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_5->setReadOnly(true);

        dataread->addWidget(recvTextEdit_5, 5, 1, 1, 1);

        recvTextEdit_2 = new QTextEdit(gridLayoutWidget);
        recvTextEdit_2->setObjectName(QString::fromUtf8("recvTextEdit_2"));
        recvTextEdit_2->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_2->setReadOnly(true);

        dataread->addWidget(recvTextEdit_2, 2, 1, 1, 1);

        recvTextEdit = new QTextEdit(gridLayoutWidget);
        recvTextEdit->setObjectName(QString::fromUtf8("recvTextEdit"));
        recvTextEdit->setMaximumSize(QSize(16777215, 25));
        recvTextEdit->setReadOnly(true);

        dataread->addWidget(recvTextEdit, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        dataread->addWidget(label_5, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        dataread->addWidget(label_3, 3, 0, 1, 1);

        recvTextEdit_4 = new QTextEdit(gridLayoutWidget);
        recvTextEdit_4->setObjectName(QString::fromUtf8("recvTextEdit_4"));
        recvTextEdit_4->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_4->setReadOnly(true);

        dataread->addWidget(recvTextEdit_4, 4, 1, 1, 1);

        recvTextEdit_6 = new QTextEdit(gridLayoutWidget);
        recvTextEdit_6->setObjectName(QString::fromUtf8("recvTextEdit_6"));
        recvTextEdit_6->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_6->setReadOnly(true);

        dataread->addWidget(recvTextEdit_6, 6, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        dataread->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        dataread->addWidget(label_4, 4, 0, 1, 1);

        recvTextEdit_3 = new QTextEdit(gridLayoutWidget);
        recvTextEdit_3->setObjectName(QString::fromUtf8("recvTextEdit_3"));
        recvTextEdit_3->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_3->setReadOnly(true);

        dataread->addWidget(recvTextEdit_3, 3, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        dataread->addWidget(label_6, 6, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        dataread->addWidget(label_8, 7, 0, 1, 1);

        recvTextEdit_7 = new QTextEdit(gridLayoutWidget);
        recvTextEdit_7->setObjectName(QString::fromUtf8("recvTextEdit_7"));
        recvTextEdit_7->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_7->setReadOnly(true);

        dataread->addWidget(recvTextEdit_7, 7, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        dataread->addWidget(label, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(Widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(680, 40, 171, 138));
        dataread_2 = new QGridLayout(gridLayoutWidget_2);
        dataread_2->setSpacing(6);
        dataread_2->setContentsMargins(11, 11, 11, 11);
        dataread_2->setObjectName(QString::fromUtf8("dataread_2"));
        dataread_2->setContentsMargins(0, 0, 0, 0);
        recvTextEdit_16 = new QTextEdit(gridLayoutWidget_2);
        recvTextEdit_16->setObjectName(QString::fromUtf8("recvTextEdit_16"));
        recvTextEdit_16->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_16->setReadOnly(true);

        dataread_2->addWidget(recvTextEdit_16, 1, 1, 1, 1);

        recvTextEdit_19 = new QTextEdit(gridLayoutWidget_2);
        recvTextEdit_19->setObjectName(QString::fromUtf8("recvTextEdit_19"));
        recvTextEdit_19->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_19->setReadOnly(true);

        dataread_2->addWidget(recvTextEdit_19, 3, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        dataread_2->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        dataread_2->addWidget(label_11, 3, 0, 1, 1);

        recvTextEdit_15 = new QTextEdit(gridLayoutWidget_2);
        recvTextEdit_15->setObjectName(QString::fromUtf8("recvTextEdit_15"));
        recvTextEdit_15->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_15->setReadOnly(true);

        dataread_2->addWidget(recvTextEdit_15, 2, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        dataread_2->addWidget(label_13, 4, 0, 1, 1);

        recvTextEdit_20 = new QTextEdit(gridLayoutWidget_2);
        recvTextEdit_20->setObjectName(QString::fromUtf8("recvTextEdit_20"));
        recvTextEdit_20->setMaximumSize(QSize(16777215, 25));
        recvTextEdit_20->setReadOnly(true);

        dataread_2->addWidget(recvTextEdit_20, 4, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        dataread_2->addWidget(label_16, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(Widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(390, 410, 261, 56));
        dataread_3 = new QGridLayout(gridLayoutWidget_3);
        dataread_3->setSpacing(6);
        dataread_3->setContentsMargins(11, 11, 11, 11);
        dataread_3->setObjectName(QString::fromUtf8("dataread_3"));
        dataread_3->setContentsMargins(0, 0, 0, 0);
        recvTextEdit_18 = new QTextEdit(gridLayoutWidget_3);
        recvTextEdit_18->setObjectName(QString::fromUtf8("recvTextEdit_18"));
        recvTextEdit_18->setMaximumSize(QSize(16777215, 25));

        dataread_3->addWidget(recvTextEdit_18, 0, 1, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        dataread_3->addWidget(label_21, 0, 0, 1, 1);

        sendButton_19 = new QPushButton(gridLayoutWidget_3);
        sendButton_19->setObjectName(QString::fromUtf8("sendButton_19"));

        dataread_3->addWidget(sendButton_19, 0, 2, 1, 1);

        sendButton_20 = new QPushButton(gridLayoutWidget_3);
        sendButton_20->setObjectName(QString::fromUtf8("sendButton_20"));

        dataread_3->addWidget(sendButton_20, 1, 0, 1, 3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        openPortButton->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        baudComboBox->setItemText(0, QApplication::translate("Widget", "2400", nullptr));
        baudComboBox->setItemText(1, QApplication::translate("Widget", "4800", nullptr));
        baudComboBox->setItemText(2, QApplication::translate("Widget", "9600", nullptr));
        baudComboBox->setItemText(3, QApplication::translate("Widget", "19200", nullptr));
        baudComboBox->setItemText(4, QApplication::translate("Widget", "57600", nullptr));
        baudComboBox->setItemText(5, QApplication::translate("Widget", "115200", nullptr));

        clearTextButton->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        clearSendButton->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\217\221\351\200\201\346\241\206", nullptr));
        sendButton_9->setText(QApplication::translate("Widget", "\344\274\240\346\204\237\345\231\250\351\200\211\346\213\251", nullptr));
        label_9->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\345\234\260\345\235\200", nullptr));
        sendButton_8->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\345\275\223\345\211\215\345\234\260\345\235\200", nullptr));
        readdata_Button->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\346\225\260\346\215\256", nullptr));
        sendButton_7->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\350\257\273\345\217\226", nullptr));
        label_7->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\346\240\241\345\207\206\357\274\210\351\235\236\344\270\223\344\270\232\344\272\272\345\243\253\345\213\277\345\212\250\357\274\211", nullptr));
        checkBox_1->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\270\251\345\272\246", nullptr));
        checkBox_4->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\260\256", nullptr));
        checkBox_5->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\347\243\267", nullptr));
        checkBox_3->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\347\224\265\345\257\274\347\216\207", nullptr));
        checkBox_6->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\351\222\276", nullptr));
        checkBox_2->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\271\277\345\272\246", nullptr));
        checkBox_7->setText(QApplication::translate("Widget", "\345\234\237\345\243\244PH", nullptr));
        sendButton_17->setText(QApplication::translate("Widget", "SET", nullptr));
        label_14->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\2071500 AD", nullptr));
        sendButton_16->setText(QApplication::translate("Widget", "SET", nullptr));
        label_18->setText(QApplication::translate("Widget", "PH\347\242\261\346\200\247 AD", nullptr));
        sendButton_14->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\2071500", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "SET", nullptr));
        sendButton_5->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\207500", nullptr));
        sendButton_4->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\2078000", nullptr));
        sendButton_10->setText(QApplication::translate("Widget", "PH\351\205\270\346\200\2474.00", nullptr));
        sendButton_15->setText(QApplication::translate("Widget", "SET", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "SET", nullptr));
        sendButton_13->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\2073000", nullptr));
        label_10->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\207500 AD", nullptr));
        sendButton_11->setText(QApplication::translate("Widget", "PH\344\270\255\346\200\2476.86", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "SET", nullptr));
        label_15->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\2073000 AD", nullptr));
        sendButton_2->setText(QApplication::translate("Widget", "\346\271\277\345\272\246\351\233\266\347\202\271", nullptr));
        label_17->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\2078000 AD", nullptr));
        label_20->setText(QApplication::translate("Widget", "PH\351\205\270\346\200\247 AD", nullptr));
        pushButton->setText(QApplication::translate("Widget", "SET", nullptr));
        sendButton_6->setText(QApplication::translate("Widget", "PH\347\242\261\346\200\2479.18", nullptr));
        sendButton_12->setText(QApplication::translate("Widget", "\347\224\265\345\257\274\347\216\207\351\233\266\347\202\271", nullptr));
        sendButton_3->setText(QApplication::translate("Widget", "\346\271\277\345\272\246\351\241\266\347\202\271", nullptr));
        label_19->setText(QApplication::translate("Widget", "PH\344\270\255\346\200\247 AD", nullptr));
        sendButton_18->setText(QApplication::translate("Widget", "\344\270\200\351\224\256\350\216\267\345\217\226\345\275\223\345\211\215\350\256\276\347\275\256\345\200\274", nullptr));
        label_5->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\347\243\267", nullptr));
        label_3->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\347\224\265\345\257\274\347\216\207", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\271\277\345\272\246", nullptr));
        label_4->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\260\256", nullptr));
        label_6->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\351\222\276", nullptr));
        label_8->setText(QApplication::translate("Widget", "\345\234\237\345\243\244PH", nullptr));
        label->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\270\251\345\272\246", nullptr));
        label_12->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\271\277\345\272\246ADC", nullptr));
        label_11->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\347\224\265\345\257\274\347\216\207ADC", nullptr));
        label_13->setText(QApplication::translate("Widget", "\345\234\237\345\243\244PH ADC", nullptr));
        label_16->setText(QApplication::translate("Widget", "\345\234\237\345\243\244\346\270\251\345\272\246ADC", nullptr));
        label_21->setText(QApplication::translate("Widget", "\345\234\260\345\235\200", nullptr));
        sendButton_19->setText(QApplication::translate("Widget", "SET", nullptr));
        sendButton_20->setText(QApplication::translate("Widget", "\346\201\242\345\244\215\344\270\272\351\273\230\350\256\244\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
