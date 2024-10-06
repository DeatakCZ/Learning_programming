
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

#include "resultwidget.h"
#include "personmodel.h"
#include "newpersondialog.h"
#include "editpersondialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAddPerson_triggered();

    void on_actionEditPerson_triggered();

    void on_actionExitApp_triggered();

    void on_actionViewToolbar_triggered();

    void on_actionViewStatusBar_triggered();

    void on_actionAboutQtHelp_triggered();

    void on_actionAboutHelp_triggered();

    void addPersonDialog();

private:
    Ui::MainWindow *ui;
    const QString WND_TITLE = "Narozeniny";
    void notImplemented();
    ResultWidget *mp_resultWidget;
    PersonModel *mp_model;
    newPersonDialog *mp_newPersonDialog = nullptr;
    EditPersonDialog *mp_editPersonDialog = nullptr;
};

#endif // MAINWINDOW_H
