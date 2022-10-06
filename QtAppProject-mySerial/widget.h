/*
* Copyright (c) 2019,fengMisaka
* All rights reserved.
*
* 摘 要：串口调试助手界面类，实现串口调试助手基本功能
*
* 当前版本：1.0
* 作 者：fengMisaka
* 完成日期：2019 年 8 月 22 日
*/
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QTimer>  //定时器对象
#include <QCheckBox>
#include "serial.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_openPortButton_clicked(); // 打开串口按钮-点击槽函数
    void on_clearTextButton_clicked(); // 清除接收文本框按钮-点击槽函数
    void on_clearSendButton_clicked(); // 清除发送文本框按钮-点击槽函数
//    void on_sendButton_clicked(); // 发送数据按钮-点击槽函数
    void readaddressData();//读取设备地址
    void readSerialData(); // 读取从自定义串口类获得的数据
    void on_sendButton_8_clicked();//发送广播地址
    void on_readdata_Button_clicked();
    void sendSerialData();
    void  readADsetData();
    void sendSerialADCData();
     void readSerialADCData();

    void on_sendButton_7_clicked();

    void on_sendButton_2_clicked();

    void on_sendButton_3_clicked();

    void on_sendButton_4_clicked();

    void on_sendButton_5_clicked();

    void on_sendButton_9_clicked();

    void on_sendButton_6_clicked();

    void on_sendButton_10_clicked();

    void on_sendButton_11_clicked();

    void on_sendButton_12_clicked();

    void on_sendButton_13_clicked();

    void on_sendButton_14_clicked();

    void on_sendButton_18_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_sendButton_15_clicked();

    void on_sendButton_16_clicked();

    void on_sendButton_17_clicked();

private:
    Ui::Widget *ui;

    Serial *m_serial; // 自定义串口类对象指针
    QTimer *myTimer;// 定时器对象
    QTimer *myTimer1;// 定时器对象

    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;

};

#endif // WIDGET_H
