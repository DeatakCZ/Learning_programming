
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QMessageBox msg(QMessageBox::Critical, ("Dělení nulou"), ("Lituji, ale tato operace nemá definovaný výsledek!!!"));
    msg.exec();
    return a.exec();
}
