
#include "birthdaywindow.h"

#include <QIcon>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QMessageBox>
#include <QApplication>
#include <QDebug>



BirthdayWindow::BirthdayWindow(QWidget *parent)
    : QMainWindow{parent}
{
    setWindowTitle(TITLE_WND);
    setWindowIcon(QIcon(":/resource/main"));
    resize(640,480);

    createActions();


    QMenu *personMenu = menuBar()->addMenu(tr("Lide"));

    personMenu->addAction(mp_newPersonAct);
    personMenu->addAction(mp_editPersonAct);
    personMenu->addSeparator();
    personMenu->addAction(mp_exitAct);


    QMenu *viewMenu = menuBar() ->addMenu(tr("Zobrazit"));

    viewMenu->addAction(mp_viewStatusAct);
    viewMenu->addAction(mp_viewToolsAct);


    QMenu *helpMenu  = menuBar()->addMenu(tr("Napoveda"));

    helpMenu->addAction(mp_aboutHelpAct);
    helpMenu->addAction(mp_aboutQtHelpAct);



    mp_toolBar = addToolBar("mainToolBar");
    mp_toolBar->addAction(mp_newPersonAct);
    mp_toolBar->addAction(mp_editPersonAct);
    mp_toolBar->addSeparator();
    mp_toolBar->addAction(mp_aboutHelpAct);
    mp_toolBar->addAction(mp_aboutQtHelpAct);
    mp_toolBar->addSeparator();
    mp_toolBar->addAction(mp_exitAct);


    statusBar()->showMessage("READY!");
}


void BirthdayWindow::createActions()
{
    mp_newPersonAct = new QAction(QIcon(":/resource/addPerson"), tr("Nova osoba"), this );
    mp_newPersonAct->setStatusTip(tr("Umozni pridani dalsi osoby do seznamu."));
    connect(mp_newPersonAct, SIGNAL(triggered()), this, SLOT(notImplemented()));

    mp_editPersonAct = new QAction(QIcon(":/resource/editPerson"), tr("Upravit osobu"), this );
    mp_editPersonAct->setStatusTip(tr("Umozni upravit existujici osoby v seznamu."));
    connect(mp_editPersonAct, SIGNAL(triggered()), this, SLOT(notImplemented()));

    mp_viewStatusAct = new QAction(tr("Stavovy radek"), this );
    mp_viewStatusAct->setCheckable(true);
    mp_viewStatusAct->setChecked(true);
    mp_viewStatusAct->setStatusTip(tr("Zobrazi nebo ukryje stavovy radek"));
    connect(mp_viewStatusAct, SIGNAL(triggered()), this, SLOT( toggleStatusbar()));

    mp_viewToolsAct = new QAction(tr("Panel nastroju"), this);
    mp_viewToolsAct->setCheckable(true);
    mp_viewToolsAct->setChecked(true);
    mp_viewToolsAct->setStatusTip(tr("Zobrazi nebo ukryje panel nastroju"));
    connect(mp_viewToolsAct, SIGNAL(triggered()), this, SLOT( toggleToolbar()));

    mp_exitAct = new QAction(QIcon(":/resources/exit"), tr("Konec"), this);
    mp_exitAct->setStatusTip(tr("Ulozi data a ukonci program"));
    connect(mp_exitAct, SIGNAL(triggered()), qApp, SLOT(quit()));

    mp_aboutHelpAct = new QAction(QIcon(":/resources/about"), tr("O programu"), this);
    mp_aboutHelpAct->setStatusTip(tr("Zobrazi informace o tomto programu"));
    connect(mp_aboutHelpAct, SIGNAL(triggered()), this, SLOT(aboutDialog()));

    mp_aboutQtHelpAct = new QAction(QIcon(":/resources/qt"), tr("o Qt"), this);
    mp_aboutQtHelpAct->setStatusTip(tr("Zobrazi informace o Qt frameworku"));
    connect(mp_aboutQtHelpAct, SIGNAL(triggered()), this, SLOT(aboutQtDialog()));
}



BirthdayWindow::~BirthdayWindow()
{
    if(mp_newPersonAct != nullptr) {delete mp_newPersonAct; }
    if(mp_editPersonAct != nullptr) {delete   mp_editPersonAct; }
    if(mp_viewStatusAct != nullptr) {delete mp_viewStatusAct; }
    if(mp_viewToolsAct != nullptr) {delete mp_viewToolsAct; }
    if(mp_exitAct != nullptr) {delete mp_exitAct; }
    if(mp_aboutHelpAct != nullptr) {delete mp_aboutHelpAct; }
    if(mp_aboutQtHelpAct != nullptr) {delete mp_aboutQtHelpAct; }

}


void BirthdayWindow::notImplemented()
{
    QMessageBox message;
    message.setWindowTitle(TITLE_WND);
    message.setText(tr("Funkce zatim nejede"));
    message.setIcon(QMessageBox::Warning);
    message.exec();
}


void BirthdayWindow::aboutDialog()
{
    QMessageBox message;
    message.about(this, TITLE_WND, tr("Ahoj\numim vam pripomenout vyznamne udalosti."));
}


void BirthdayWindow::aboutQtDialog()
{
    QMessageBox message;
    message.aboutQt(this, TITLE_WND);
}


void BirthdayWindow::toggleStatusbar()
{
    if(mp_viewStatusAct->isChecked())
        statusBar()->show();
    else
        statusBar()->hide();
}


void BirthdayWindow::toggleToolbar()
{
    if(mp_viewToolsAct->isChecked())
        mp_toolBar->show();
    else
        mp_toolBar->hide();
}
























