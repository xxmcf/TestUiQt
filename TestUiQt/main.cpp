#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString appPath = QApplication::applicationDirPath();

    QString qssPath = QString("%1/main.qss").arg(appPath);

    QFile file(qssPath);
    if (file.open(QIODevice::ReadOnly))
    {
        a.setStyleSheet(file.readAll());
        file.close();
    }

    MainWindow w;
    w.show();

    return a.exec();
}
