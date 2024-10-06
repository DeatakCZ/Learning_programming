
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QLCDNumber>
#include <QRadioButton>
#include <QButtonGroup>
#include <QLineEdit>
#include <QPushButton>

#include "model.h"


class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    QGridLayout *mainLayout;

    QLCDNumber *display;

    QRadioButton *btnDec;
    QRadioButton *btnHex;
    QRadioButton *btnOct;
    QRadioButton *btnBin;

    QButtonGroup *numeralButtons;

    QLineEdit *leftOperand;
    QLineEdit *rightOperand;

    QRadioButton *btnPlus;
    QRadioButton *btnMinus;
    QRadioButton *btnTimes;
    QRadioButton *btnDivide;

    QButtonGroup *operationButtons;

    QPushButton *btnEqual;

    private:
        Model *model;

    public slots:
        void numberTooBig();

        void setPlus();
        void setMinus();
        void setTimes();
        void setDivide();

        void setHex();
        void setDec();
        void setOct();
        void setBin();

        void getFalseOp(int operand);
        void getZeroDivide();

        void calculate();



};

#endif // WIDGET_H
