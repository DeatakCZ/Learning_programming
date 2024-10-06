
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "model.h"

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QButtonGroup>
#include <QRadioButton>
#include <QLCDNumber>
#include <QLineEdit>



class Calculator : public QWidget

{
    Q_OBJECT

private:
    Model *model;

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();


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

    void getFalseOperand(int operand);
    void getZeroDivide();

    void calculate();
};

#endif // CALCULATOR_H
