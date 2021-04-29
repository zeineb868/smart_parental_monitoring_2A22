#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();
    MainWindow w;


    if(test)
    w.show();



    return a.exec();
}
