
#ifndef BIRTHDAYWINDOW_H
#define BIRTHDAYWINDOW_H


#include <QMainWindow>
#include <QAction>
#include <QToolBar>
#include <QString>



class BirthdayWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit BirthdayWindow(QWidget *parent = nullptr);
    ~BirthdayWindow();


private:

    const QString TITLE_WND = tr("Narozeniny");

    QAction *mp_newPersonAct;
    QAction *mp_editPersonAct;
    QAction *mp_viewStatusAct;
    QAction *mp_viewToolsAct;
    QAction *mp_exitAct;
    QAction *mp_aboutHelpAct;
    QAction *mp_aboutQtHelpAct;

    QToolBar *mp_toolBar;
    void createActions();


private slots:
    void notImplemented();
    void toggleStatusbar();
    void toggleToolbar();
    void aboutDialog();
    void aboutQtDialog();


signals:

};

#endif // BIRTHDAYWINDOW_H
