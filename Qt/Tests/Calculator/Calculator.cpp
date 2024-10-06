
#include "Calculator.h"

#include <QIcon>
#include <QMessageBox>
#include <QString>
//#include <QTextStream>


Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{

    setWindowIcon(QIcon(":/img/mainIcon"));
    resize(640,480);



    mainLayout = new QGridLayout;

    display = new QLCDNumber;
    mainLayout->addWidget(display, 1, 1, 1, 4 );


    btnDec = new QRadioButton("DEC",this);
    btnHex = new QRadioButton("HEX",this);
    btnOct = new QRadioButton("OCT",this);
    btnBin = new QRadioButton("BIN",this);

    numeralButtons = new QButtonGroup;

    mainLayout->addWidget(btnHex, 2, 1 );
    mainLayout->addWidget(btnDec, 2, 2 );
    mainLayout->addWidget(btnOct, 2, 3 );
    mainLayout->addWidget(btnBin, 2, 4 );

    numeralButtons->addButton(btnHex);
    numeralButtons->addButton(btnDec);
    numeralButtons->addButton(btnOct);
    numeralButtons->addButton(btnBin);


    leftOperand = new QLineEdit;
    rightOperand = new QLineEdit;

    mainLayout->addWidget(leftOperand, 3, 1, 1, 2);
    mainLayout->addWidget(rightOperand, 3, 3, 1, 2);


    btnPlus = new QRadioButton("+",this);
    btnMinus = new QRadioButton("-",this);
    btnTimes = new QRadioButton("*",this);
    btnDivide = new QRadioButton("/",this);

    operationButtons = new QButtonGroup;

    mainLayout->addWidget(btnPlus, 4, 1 );
    mainLayout->addWidget(btnMinus, 4, 2 );
    mainLayout->addWidget(btnTimes, 4, 3 );
    mainLayout->addWidget(btnDivide, 4, 4 );

    operationButtons->addButton(btnPlus);
    operationButtons->addButton(btnMinus);
    operationButtons->addButton(btnTimes);
    operationButtons->addButton(btnDivide);


    btnEqual = new QPushButton(tr("Spočítej"));

    mainLayout->addWidget(btnEqual, 5, 1, 1, 4 );

    setLayout(mainLayout);

    btnDec->setChecked(true);
    btnPlus->setChecked(true);

    display->setDigitCount(32);
    display->setMaximumHeight(50);

    model = new Model(this);


    connect(btnHex, SIGNAL(clicked()), this, SLOT(setHex()));
    connect(btnDec, SIGNAL(clicked()), this, SLOT(setDec()));
    connect(btnOct, SIGNAL(clicked()), this, SLOT(setOct()));
    connect(btnBin, SIGNAL(clicked()), this, SLOT(setBin()));

    connect(btnPlus, SIGNAL(clicked()), this, SLOT(setPlus()));
    connect(btnMinus, SIGNAL(clicked()), this, SLOT(setMinus()));
    connect(btnTimes, SIGNAL(clicked()), this, SLOT(setTimes()));
    connect(btnDivide, SIGNAL(clicked()), this, SLOT(setDivide()));

    connect(btnEqual, SIGNAL(clicked()), this, SLOT(calculate()));

    connect(display, SIGNAL(overflow()), this, SLOT(numberTooBig()));
    connect(model, SIGNAL(operandFalse(int)), this, SLOT(getFalseOperand(int)));
    connect(model, SIGNAL(zeroDivide()), this, SLOT(getZeroDivide()));
}


Calculator::~Calculator()
{


    if(btnDec != nullptr)        delete btnDec;
    if(btnHex != nullptr)        delete btnHex;
    if(btnOct != nullptr)        delete btnOct;
    if(btnBin != nullptr)        delete btnBin;
    if(numeralButtons != nullptr)        delete numeralButtons;

    if(btnPlus != nullptr)        delete btnPlus;
    if(btnMinus != nullptr)        delete btnMinus;
    if(btnTimes != nullptr)        delete btnTimes;
    if(btnDivide != nullptr)        delete btnDivide;
    if(operationButtons != nullptr)        delete operationButtons;

    if(leftOperand != nullptr)        delete leftOperand;
    if(rightOperand != nullptr)        delete rightOperand;
    if(btnEqual != nullptr)        delete btnEqual;

    if(display != nullptr)        delete display;
    if(mainLayout != nullptr)        delete mainLayout;

    if(model != nullptr)        delete model;
}


void Calculator::setPlus()
{
    model->setOperator(Model::OP_PLUS);
}
void Calculator::setMinus()
{
    model->setOperator(Model::OP_MINUS);
}
void Calculator::setTimes()
{
    model->setOperator(Model::OP_TIMES);
}
void Calculator::setDivide()
{
    model->setOperator(Model::OP_DIVIDE);
}

void Calculator::setHex()
{
    model->setNumBasis(Model::SYS_HEX);
    display->setHexMode();
}
void Calculator::setDec()
{
    model->setNumBasis(Model::SYS_DEC);
    display->setDecMode();
}
void Calculator::setOct()
{
    model->setNumBasis(Model::SYS_OCT);
    display->setOctMode();
}
void Calculator::setBin()
{
    model->setNumBasis(Model::SYS_BIN);
    display->setBinMode();
}


void Calculator::numberTooBig()
{
    QMessageBox msg(QMessageBox::Information, tr("Příliš dlouhé číslo"), tr("Buhužel číslo se nevejde na display"));
    msg.exec();
}


void Calculator::getFalseOperand(int operand)
{
   // display->display(999);
    if(operand == Model::OP_LEFT)
    {
        QMessageBox msg(QMessageBox::Critical, tr("Číslo na levé straně"), tr("Někdě se stala chyba. Špatný formát čísla nebo nebylo zadáno vůbec"));
        msg.exec();
    }
    else
    {
        QMessageBox msg(QMessageBox::Critical, tr("Číslo na pravé straně"), tr("Někde se stala chyba. Špatný formát čísla nebo nebylo zadáno vůbec"));
        msg.exec();
    }
}


void Calculator::getZeroDivide()
{
    QMessageBox msg(QMessageBox::Critical, tr("Dělení nulou"), tr("Lituji, ale tato operace nemá definovaný výsledek!!!"));
    msg.exec();
}


void Calculator::calculate()
{
    //QTextStream out(stdout);

    model->setLeft(leftOperand->text());
    model->setRight(rightOperand->text());

    int result = model->calculate();
    //out << result;
    display->display(result);
}
