#include "mainwindow.h"
#include "savedsearches.h"
#include <QApplication>

#include <QFile>
#include <QTextStream>

//void savedSearches () {
//    QFile file("savedSearches.txt");

//    if(!file.open(QIODevice::OpenModeFlag::ReadWrite)) {
//        qCritical() << "Could Not open file!";
//        qCritical() << file.errorString();
//        return;
//    }
//    qInfo() << "Writing to file";
//    file.write(QByteArray("Hello world"));

//    qInfo() << "Reading from file";

//    file.seek(0);
//    qInfo() << file.readAll();
//    file.close();

//}// end of savedSearches

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    savedSearches();
    return a.exec();
}
