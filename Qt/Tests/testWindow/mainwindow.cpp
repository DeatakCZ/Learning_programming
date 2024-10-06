
#include "mainwindow.h"

//#include <QIcon>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    resize(640,480);
    setWindowTitle("My first window");
    setToolTip("This window does nothing");
    setWindowIcon(QIcon(":/img/mainIcon"));
    central = new QWidget(this);

    layout = new QHBoxLayout();
    central->setLayout(layout);

    button = new QPushButton("Close me");
    button->setToolTip("Ill close this window");



    layout->addWidget(button);

    setCentralWidget(central);

    connect(button, SIGNAL(clicked()),qApp, SLOT(quit()), Qt::QueuedConnection);
}


MainWindow::~MainWindow()
{
    if(button != NULL) { delete button; }
    if(layout != NULL) { delete layout; }
    if(central != NULL) { delete central; }
}


