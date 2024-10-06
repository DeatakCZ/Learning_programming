
#include "mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    resize(640,480);
    setWindowTitle("Ahoj Okno");
    //setToolTip("nicmoc");
    setWindowIcon(QIcon(":/img/shrimpImage"));

    central = new QWidget(this);
    layout = new QHBoxLayout();

    central->setLayout(layout);

    tlacitko = new QPushButton("Zavri me");
    tlacitko->setToolTip("Zavru cele okno!");

    layout->addWidget(tlacitko);
    setCentralWidget(central);

    connect(tlacitko,SIGNAL(clicked()),qApp,SLOT(quit()),Qt::QueuedConnection);
}


MainWindow::~MainWindow()
{
    if(tlacitko!=NULL){delete tlacitko;}
    if(layout!=NULL){delete layout;}
    if(central!=NULL){delete central;}

}


