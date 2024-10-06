
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QWidget>


class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QWidget * central;
    QHBoxLayout *layout;
    QPushButton *button;



};

#endif // MAINWINDOW_H