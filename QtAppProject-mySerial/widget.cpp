#include "widget.h"
#include "ui_widget.h"

// ------------------------------ Tools -----------------------------------

//单个字符转16进制
static char ConvertHexChar(char ch)
{
  if((ch >= '0') && (ch <= '9'))
      return ch-0x30;
 else if((ch >= 'A') && (ch <= 'F'))
   return ch-'A'+10;
 else if((ch >= 'a') && (ch <= 'f'))
   return ch-'a'+10;
  else return (-1);
}

// 将字符串转为int数组，其中每个int，为字符串的相邻两位通过high*16+low所得
void StringToHex(QString str, QByteArray &senddata)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);
    char lstr,hstr;
    for(int i=0; i<len; )
    {
        //char lstr,
        hstr=str[i].toLatin1();//获取一个字节
        if(hstr == ' ')//如果第一个是空的，就直接放弃了，结束本次循环跳入下次循环
        {
            i++;
            continue;
        }
        i++;
        if(i >= len)
            break;
        lstr = str[i].toLatin1();//低以为，先装高，后装低
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16+lowhexdata;
        i++;
        senddata[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }
    senddata.resize(hexdatalen);//senddata为我所要
}

quint16 crc16ForModbus(const QByteArray &data)
{
    static const quint16 crc16Table[] =
        {
            0x0000, 0xC0C1, 0xC181, 0x0140, 0xC301, 0x03C0, 0x0280, 0xC241,
            0xC601, 0x06C0, 0x0780, 0xC741, 0x0500, 0xC5C1, 0xC481, 0x0440,
            0xCC01, 0x0CC0, 0x0D80, 0xCD41, 0x0F00, 0xCFC1, 0xCE81, 0x0E40,
            0x0A00, 0xCAC1, 0xCB81, 0x0B40, 0xC901, 0x09C0, 0x0880, 0xC841,
            0xD801, 0x18C0, 0x1980, 0xD941, 0x1B00, 0xDBC1, 0xDA81, 0x1A40,
            0x1E00, 0xDEC1, 0xDF81, 0x1F40, 0xDD01, 0x1DC0, 0x1C80, 0xDC41,
            0x1400, 0xD4C1, 0xD581, 0x1540, 0xD701, 0x17C0, 0x1680, 0xD641,
            0xD201, 0x12C0, 0x1380, 0xD341, 0x1100, 0xD1C1, 0xD081, 0x1040,
            0xF001, 0x30C0, 0x3180, 0xF141, 0x3300, 0xF3C1, 0xF281, 0x3240,
            0x3600, 0xF6C1, 0xF781, 0x3740, 0xF501, 0x35C0, 0x3480, 0xF441,
            0x3C00, 0xFCC1, 0xFD81, 0x3D40, 0xFF01, 0x3FC0, 0x3E80, 0xFE41,
            0xFA01, 0x3AC0, 0x3B80, 0xFB41, 0x3900, 0xF9C1, 0xF881, 0x3840,
            0x2800, 0xE8C1, 0xE981, 0x2940, 0xEB01, 0x2BC0, 0x2A80, 0xEA41,
            0xEE01, 0x2EC0, 0x2F80, 0xEF41, 0x2D00, 0xEDC1, 0xEC81, 0x2C40,
            0xE401, 0x24C0, 0x2580, 0xE541, 0x2700, 0xE7C1, 0xE681, 0x2640,
            0x2200, 0xE2C1, 0xE381, 0x2340, 0xE101, 0x21C0, 0x2080, 0xE041,
            0xA001, 0x60C0, 0x6180, 0xA141, 0x6300, 0xA3C1, 0xA281, 0x6240,
            0x6600, 0xA6C1, 0xA781, 0x6740, 0xA501, 0x65C0, 0x6480, 0xA441,
            0x6C00, 0xACC1, 0xAD81, 0x6D40, 0xAF01, 0x6FC0, 0x6E80, 0xAE41,
            0xAA01, 0x6AC0, 0x6B80, 0xAB41, 0x6900, 0xA9C1, 0xA881, 0x6840,
            0x7800, 0xB8C1, 0xB981, 0x7940, 0xBB01, 0x7BC0, 0x7A80, 0xBA41,
            0xBE01, 0x7EC0, 0x7F80, 0xBF41, 0x7D00, 0xBDC1, 0xBC81, 0x7C40,
            0xB401, 0x74C0, 0x7580, 0xB541, 0x7700, 0xB7C1, 0xB681, 0x7640,
            0x7200, 0xB2C1, 0xB381, 0x7340, 0xB101, 0x71C0, 0x7080, 0xB041,
            0x5000, 0x90C1, 0x9181, 0x5140, 0x9301, 0x53C0, 0x5280, 0x9241,
            0x9601, 0x56C0, 0x5780, 0x9741, 0x5500, 0x95C1, 0x9481, 0x5440,
            0x9C01, 0x5CC0, 0x5D80, 0x9D41, 0x5F00, 0x9FC1, 0x9E81, 0x5E40,
            0x5A00, 0x9AC1, 0x9B81, 0x5B40, 0x9901, 0x59C0, 0x5880, 0x9841,
            0x8801, 0x48C0, 0x4980, 0x8941, 0x4B00, 0x8BC1, 0x8A81, 0x4A40,
            0x4E00, 0x8EC1, 0x8F81, 0x4F40, 0x8D01, 0x4DC0, 0x4C80, 0x8C41,
            0x4400, 0x84C1, 0x8581, 0x4540, 0x8701, 0x47C0, 0x4680, 0x8641,
            0x8201, 0x42C0, 0x4380, 0x8341, 0x4100, 0x81C1, 0x8081, 0x4040
        };

    quint8 i=0;
    quint16 crc16 = 0xFFFF;
    quint8 LEN=data.size();

    while(LEN-- > 0)
    {
        crc16 = crc16Table[(crc16 ^data.at( i++ )) & 0xff] ^ (crc16 >> 8);

    }

    return crc16;
}

// ------------------------------ Class -----------------------------------

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("栖桐科技-土壤传感器上位机_V3.0");
    this->setStyleSheet("background-color:pink;");
    this->show();
    // 初始化串口
    m_serial = new Serial;
    //定义问询定时器
    myTimer = new QTimer(this);
    myTimer->setInterval(600);
    //定义问询定时器-modbus等待回复延时
    myTimer1 = new QTimer(this);
    myTimer1->setInterval(600);
    //初始化checkbox
    checkBox_1 = new QCheckBox(this);

    // 寻找可用串口
    QStringList serialStrList;
    serialStrList = m_serial->scanSerial();
    for (int i=0; i<serialStrList.size(); i++)
    {
        ui->portComboBox->addItem(serialStrList[i]); // 在comboBox那添加串口号
    }
    // 默认设置波特率为9600（第2项）
    ui->baudComboBox->setCurrentIndex(2);
    // 当下位机中有数据发送过来时就会响应这个槽函数
   // connect(m_serial, SIGNAL(readSignal()), this, SLOT(readSerialData()));

}

Widget::~Widget()
{
    delete ui;
}

// 打开串口按钮-点击槽函数 <打开串口>
void Widget::on_openPortButton_clicked()
{
    if(ui->openPortButton->text() == tr("打开串口"))
    {
        if(m_serial->open(ui->portComboBox->currentText(), ui->baudComboBox->currentText().toInt()))
        {
            // 关闭下拉列表使能
            ui->portComboBox->setEnabled(false);
            ui->baudComboBox->setEnabled(false);
            // 修改按钮名称
            ui->openPortButton->setText(tr("关闭串口"));
        }
    }
    else
    {
        // 关闭串口
        m_serial->close();
        // 重新开启下拉列表使能
        ui->portComboBox->setEnabled(true);
        ui->baudComboBox->setEnabled(true);
        // 恢复按钮名称
        ui->openPortButton->setText(tr("打开串口"));
    }
}

// 清除数据按钮-点击槽函数 <清空数据>
void Widget::on_clearTextButton_clicked()
{
    ui->recvTextEdit->clear();
    ui->recvTextEdit_2->clear();
    ui->recvTextEdit_3->clear();
    ui->recvTextEdit_4->clear();
    ui->recvTextEdit_5->clear();
    ui->recvTextEdit_6->clear();
    ui->recvTextEdit_7->clear();
}

// 清除发送文本框按钮-点击槽函数 <清除发送框>
void Widget::on_clearSendButton_clicked()
{
    ui->recvTextEdit_9->clear();

}

// 发送广播地址-点击槽函数  <获取当前地址>
void Widget::on_sendButton_8_clicked()
{
    QString sendData = "000310000001811B";
    QByteArray bytes;
    StringToHex(sendData,bytes);
     m_serial->disconnect();
    m_serial->sendData(bytes);
    // 当下位机中有数据发送过来时就会响应这个槽函数
    connect(m_serial, SIGNAL(readSignal()), this, SLOT(readaddressData()));
}

// 读取设备地址数据 - 设备地址赋值
void Widget::readaddressData()
{
    QByteArray originStr = m_serial->getReadBuf().toHex(0); // 保存接收文本框原本的数据
     QByteArray Str=originStr.mid(8,2);
     if(Str!="")
     {
        ui->recvTextEdit_8->clear();
        ui->recvTextEdit_8->setText(Str);
        m_serial->clearReadBuf(); // 读取完后，清空数据缓冲区
     }
}

//  开始读取数据--点击槽函数（直接获取7个字节数据） <读取数据>
void Widget::on_readdata_Button_clicked()
{
     myTimer->disconnect();
     myTimer->start(600);
     connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

void Widget::sendSerialData()
{
    myTimer->stop();
    myTimer->disconnect();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0302000007"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->disconnect();
    // 当下位机中有数据发送过来时就会响应这个槽函数
    connect(m_serial, SIGNAL(readSignal()), this, SLOT(readSerialData()));
    m_serial->sendData(bytes);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialADCData()));
    myTimer->start(1000);

}

// 读取传感器设备数据
void Widget::readSerialData()
{
    bool ok;
    QByteArray originStr = m_serial->getReadBuf().toHex(0);// 读取串口数据

    if(originStr!="")
    {
    float data_temp=originStr.mid(6,4).toInt(&ok,16)/(float)100;
    float data_hum=originStr.mid(10,4).toInt(&ok,16)/(float)100;
    auto data_ec=originStr.mid(14,4).toInt(&ok,16);
    float data_PH=originStr.mid(18,4).toInt(&ok,16)/(float)10;
    auto data_N=originStr.mid(22,4).toInt(&ok,16);
    auto data_P=originStr.mid(26,4).toInt(&ok,16);
    auto data_K=originStr.mid(30,4).toInt(&ok,16);
    ui->recvTextEdit->clear();    ui->recvTextEdit->setText(QString::number(data_temp,'f',2));
    ui->recvTextEdit_2->clear();  ui->recvTextEdit_2->setText(QString::number(data_hum,'f',2));
    ui->recvTextEdit_3->clear();  ui->recvTextEdit_3->setText(QString::number(data_ec));
    ui->recvTextEdit_4->clear();  ui->recvTextEdit_4->setText(QString::number(data_N));
    ui->recvTextEdit_5->clear();  ui->recvTextEdit_5->setText(QString::number(data_P));
    ui->recvTextEdit_6->clear();  ui->recvTextEdit_6->setText(QString::number(data_K));
    ui->recvTextEdit_7->clear();  ui->recvTextEdit_7->setText(QString::number(data_PH,'f',1));

    m_serial->clearReadBuf(); // 读取完后，清空数据缓冲区

    }
}

//读取数据ADC数值
void Widget::sendSerialADCData()
{
    myTimer->disconnect();
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("031ff00004"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->disconnect();
    // 当下位机中有数据发送过来时就会响应这个槽函数
    connect(m_serial, SIGNAL(readSignal()), this, SLOT(readSerialADCData()));
    m_serial->sendData(bytes);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
    myTimer->start(1000);
}

// 读取数据ADC数值
void Widget::readSerialADCData()
{
    bool ok;
    QByteArray originStr = m_serial->getReadBuf().toHex(0);// 读取串口数据

    if(originStr!="")
    {
    auto data_temp=originStr.mid(6,4).toInt(&ok,16);
    auto data_hum=originStr.mid(10,4).toInt(&ok,16);
    auto data_ec=originStr.mid(14,4).toInt(&ok,16);
    auto data_PH=originStr.mid(18,4).toInt(&ok,16);

    ui->recvTextEdit_16->clear();  ui->recvTextEdit_16->setText(QString::number(data_temp));
    ui->recvTextEdit_15->clear();  ui->recvTextEdit_15->setText(QString::number(data_hum));
    ui->recvTextEdit_19->clear();  ui->recvTextEdit_19->setText(QString::number(data_ec));
    ui->recvTextEdit_20->clear();  ui->recvTextEdit_20->setText(QString::number(data_PH));

    m_serial->clearReadBuf(); // 读取完后，清空数据缓冲区

    }
}

//关闭读取数据 <停止读取>
void Widget::on_sendButton_7_clicked()
{
    myTimer->stop();
    myTimer->disconnect();
}

// ------------------------------ 传感器选择 -----------------------------------

//传感器选择
void Widget::on_sendButton_9_clicked()
{
     myTimer->stop();
     auto sendData=0;
     if(ui->checkBox_1->isChecked())
     {
         sendData+=1;
     }
     if(ui->checkBox_2->isChecked())
     {
         sendData+=2;
     }
     if(ui->checkBox_3->isChecked())
     {
         sendData+=4;
     }
     if(ui->checkBox_4->isChecked())
     {
         sendData+=8;
     }
     if(ui->checkBox_5->isChecked())
     {
         sendData+=16;
     }
     if(ui->checkBox_6->isChecked())
     {
          sendData+=32;
     }
     if(ui->checkBox_7->isChecked())
     {
          sendData+=64;
     }

     QString sendData1= ui->recvTextEdit_8->toPlainText();
     if(sendData<15)
     {
         sendData1.insert(2, QString("061002000"));
         sendData1.insert(11, QByteArray::number(sendData, 16).toUpper());
     }
     else
     {
         sendData1.insert(2, QString("06100200"));
         sendData1.insert(10, QByteArray::number(sendData, 16).toUpper());
     }

     QByteArray bytes;
     StringToHex(sendData1,bytes);
     auto temp =crc16ForModbus(bytes);

     bytes[6]= temp%256;
     bytes[7]= temp/256;

     m_serial->sendData(bytes);
     myTimer->disconnect();
     myTimer->start(600);
     connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// ------------------------------ 湿度 -----------------------------------

//湿度零点校准 <湿度零点>
void Widget::on_sendButton_2_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0620000001"));//原0600020001
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//湿度零点校准 <湿度20%>
void Widget::on_sendButton_21_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0620200001"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//湿度零点校准 <湿度50%>
void Widget::on_sendButton_22_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0620500001"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//湿度零点校准 <湿度80%>
void Widget::on_sendButton_23_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0620800001"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//湿度顶点校准 <湿度顶点>
void Widget::on_sendButton_3_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0621000001"));//原0600030001
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));

}

// ------------------------------ 电导率 -----------------------------------

//电导率零点校准 <电导率零点>
void Widget::on_sendButton_12_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0600060001"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//电导率低溶液校准500 <电导率500>
void Widget::on_sendButton_5_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();

    sendData.insert(2, QString("0600050500"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//电导率中1等溶液1500 <电导率1500>
void Widget::on_sendButton_14_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();

    sendData.insert(2, QString("0600081500"));

    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//电导率中2等溶液3000 <电导率3000>
void Widget::on_sendButton_13_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("0600073000"));

    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//电导率高溶液校准8000 <电导率8000>
void Widget::on_sendButton_4_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();

    sendData.insert(2, QString("0600048000"));

    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// ------------------------------ PH -----------------------------------

//PH高溶液校准 <PH碱性9.18>
void Widget::on_sendButton_6_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();

    sendData.insert(2, QString("0600090918"));


    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//PH中性溶液校准 <PH中性6.86>
void Widget::on_sendButton_11_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();

        sendData.insert(2, QString("06000b0686"));

    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

//PH低溶液校准 <PH酸性4.00>
void Widget::on_sendButton_10_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();

        sendData.insert(2, QString("06000a0400"));

    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// ------------------------------ 一键获取当前设置值 -----------------------------------

//读取AD设置值 <一键获取当前设置值>
void Widget::on_sendButton_18_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    sendData.insert(2, QString("031ff4000c"));
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

     m_serial->disconnect();
    // 当下位机中有数据发送过来时就会响应这个槽函数
    connect(m_serial, SIGNAL(readSignal()), this, SLOT(readADsetData()));
    m_serial->sendData(bytes);
}

// 读取传感器设备数据 - 电导率 和 PH 的数据
void Widget::readADsetData()
{
    bool ok;
    QByteArray originStr = m_serial->getReadBuf().toHex(0);// 读取串口数据
    if(originStr!="")
    {
        float data_500=originStr.mid(6,4).toInt(&ok,16);
        float data_1500=originStr.mid(10,4).toInt(&ok,16);
        auto data_3000=originStr.mid(14,4).toInt(&ok,16);
        float data_8000=originStr.mid(18,4).toInt(&ok,16);
        auto data_918=originStr.mid(22,4).toInt(&ok,16);
        auto data_686=originStr.mid(26,4).toInt(&ok,16);
        auto data_400=originStr.mid(30,4).toInt(&ok,16);
        auto data_0000=originStr.mid(34,4).toInt(&ok,16);
        auto data_0020=originStr.mid(38,4).toInt(&ok,16);
        auto data_0050=originStr.mid(42,4).toInt(&ok,16);
        auto data_0080=originStr.mid(46,4).toInt(&ok,16);
        auto data_0100=originStr.mid(50,4).toInt(&ok,16);
        ui->recvTextEdit_13->clear();    ui->recvTextEdit_13->setText(QString::number(data_500));
        ui->recvTextEdit_14->clear();  ui->recvTextEdit_14->setText(QString::number(data_1500));
        ui->recvTextEdit_17->clear();  ui->recvTextEdit_17->setText(QString::number(data_3000));
        ui->recvTextEdit_9->clear();  ui->recvTextEdit_9->setText(QString::number(data_8000));
        ui->recvTextEdit_10->clear();  ui->recvTextEdit_10->setText(QString::number(data_918));
        ui->recvTextEdit_12->clear();  ui->recvTextEdit_12->setText(QString::number(data_686));
        ui->recvTextEdit_11->clear();  ui->recvTextEdit_11->setText(QString::number(data_400));
        ui->recvTextEdit_21->clear();  ui->recvTextEdit_21->setText(QString::number(data_0000));
        ui->recvTextEdit_22->clear();  ui->recvTextEdit_22->setText(QString::number(data_0020));
        ui->recvTextEdit_23->clear();  ui->recvTextEdit_23->setText(QString::number(data_0050));
        ui->recvTextEdit_24->clear();  ui->recvTextEdit_24->setText(QString::number(data_0080));
        ui->recvTextEdit_25->clear();  ui->recvTextEdit_25->setText(QString::number(data_0100));

        m_serial->clearReadBuf(); // 读取完后，清空数据缓冲区
        m_serial->disconnect();

        myTimer->disconnect();
        myTimer->start(600);
        connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
    }
}

// ------------------------------ 电导率 SET -----------------------------------

// 电导率500 AD SET
void Widget::on_pushButton_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_13->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("06000c0"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("06000c"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// 电导率1500 AD SET
void Widget::on_pushButton_2_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_14->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("06000d0"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("06000d"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// 电导率3000 AD SET
void Widget::on_pushButton_3_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_17->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("06000e0"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("06000e"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// 电导率8000 AD SET
void Widget::on_pushButton_4_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_9->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("06000f0"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("06000f"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// ------------------------------ PH SET -----------------------------------

// PH碱性918 AD SET
void Widget::on_sendButton_15_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_10->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("0600100"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("060010"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// PH中性686 AD SET
void Widget::on_sendButton_16_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_12->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("0600110"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("060011"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// PH酸性400 AD SET
void Widget::on_sendButton_17_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1= ui->recvTextEdit_11->toPlainText();
    int length=sendData1.length();
    if(length==3)
    {sendData.insert(2, QString("0600120"));
     sendData.insert(9, sendData1);
    }
    if(length==4)
    {sendData.insert(2, QString("060012"));
     sendData.insert(8, sendData1);
    }
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// ------------------------------ 修改地址 -----------------------------------

// 地址SET
void Widget::on_sendButton_19_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1 = ui->recvTextEdit_18->toPlainText();
    sendData.insert(2, QString("06100000"));
    sendData.insert(10, sendData1);
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    ui->recvTextEdit_8->setText(ui->recvTextEdit_18->toPlainText());
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}

// 默认地址SET
void Widget::on_sendButton_20_clicked()
{
    myTimer->stop();
    QString sendData= ui->recvTextEdit_8->toPlainText();
    QString sendData1 = QString("01");
    sendData.insert(2, QString("06100000"));
    sendData.insert(10, sendData1);
    QByteArray bytes;
    StringToHex(sendData,bytes);
    auto temp =crc16ForModbus(bytes);

    bytes[6]= temp%256;
    bytes[7]= temp/256;

    m_serial->sendData(bytes);
    myTimer->disconnect();
    ui->recvTextEdit_8->setText("01");
    myTimer->start(600);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(sendSerialData()));
}
