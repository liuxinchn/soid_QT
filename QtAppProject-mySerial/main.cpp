#include "widget.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString strPath =  QApplication::applicationDirPath();
    strPath += "/img/icon_1.png";
    a.setWindowIcon(QIcon(strPath));

    Widget w;
    w.show();

    return a.exec();
}
