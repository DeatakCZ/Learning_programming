
#include "widget.h"
#include <QIcon>
#include <QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    mainLayout = new QGridLayout();
    display = new QLCDNumber();
    display->setDigitCount(32);
    display->setMaximumHeight(50);

    model = new Model(this);

    mainLayout->addWidget(display,1,1,1,4);

    btnHex = new QRadioButton("HEX",this);
    btnDec = new QRadioButton("DEC",this);
    btnOct = new QRadioButton("OCT",this);
    btnBin = new QRadioButton("BIN",this);

    numeralButtons = new QButtonGroup();

    mainLayout->addWidget(btnDec,2,1);
    mainLayout->addWidget(btnHex,2,2);
    mainLayout->addWidget(btnBin,2,3);
    mainLayout->addWidget(btnOct,2,4);

    numeralButtons->addButton(btnHex);
    numeralButtons->addButton(btnDec);
    numeralButtons->addButton(btnBin);
    numeralButtons->addButton(btnOct);

    connect(btnBin,SIGNAL(clicked()),this, SLOT(setBin()));
    connect(btnOct,SIGNAL(clicked()),this, SLOT(setOct()));
    connect(btnDec,SIGNAL(clicked()),this, SLOT(setDec()));
    connect(btnHex,SIGNAL(clicked()),this, SLOT(setHex()));

    leftOperand = new QLineEdit();
    rightOperand = new QLineEdit();

    mainLayout->addWidget(leftOperand,3,1,1,2);
    mainLayout->addWidget(rightOperand,3,3,1,2);

    btnPlus = new QRadioButton("+",this);
    btnMinus = new QRadioButton("-",this);
    btnTimes = new QRadioButton("*",this);
    btnDivide = new QRadioButton("/",this);

    operationButtons = new QButtonGroup();

    mainLayout->addWidget(btnPlus,4,1);
    mainLayout->addWidget(btnMinus,4,2);
    mainLayout->addWidget(btnTimes,4,3);
    mainLayout->addWidget(btnDivide,4,4);

    operationButtons->addButton(btnPlus);
    operationButtons->addButton(btnMinus);
    operationButtons->addButton(btnTimes);
    operationButtons->addButton(btnDivide);

    connect(btnPlus, SIGNAL(clicked()),this, SLOT(setPlus()));
    connect(btnMinus, SIGNAL(clicked()),this, SLOT(setMinus()));
    connect(btnTimes, SIGNAL(clicked()),this, SLOT(setTimes()));
    connect(btnDivide, SIGNAL(clicked()),this, SLOT(setDivide()));

    btnEqual = new QPushButton(tr("Vypocitej"));
    mainLayout->addWidget(btnEqual,5,1,1,4);

    connect(btnEqual,SIGNAL(clicked()),this,SLOT(calculate()));


    btnDec->setChecked(true);
    btnPlus->setChecked(true);


    setWindowIcon(QIcon(":/img/mainIcon"));
    resize(640,480);



    setLayout(mainLayout);

    connect(display,SIGNAL(overFlow()),this,SLOT(numberTooBig()));
    connect(model,SIGNAL(operandFalse(int)),this,SLOT(getFalseOp(int)));
    connect(model,SIGNAL(zeroDivide()),this,SLOT(getZeroDivide()));


}

Widget::~Widget()
{
    if(btnEqual!=nullptr){delete btnEqual;}

    if( operationButtons!=nullptr) {delete operationButtons ;}
    if( btnPlus!=nullptr) {delete btnPlus ;}
    if( btnMinus!=nullptr) {delete btnMinus ;}
    if( btnTimes!=nullptr) {delete btnTimes ;}
    if( btnDivide!=nullptr) {delete btnDivide ;}

    if(leftOperand !=nullptr) {delete leftOperand ;}
    if(rightOperand !=nullptr) {delete rightOperand ;}

    if(numeralButtons !=nullptr) {delete numeralButtons ;}
    if(btnDec !=nullptr) {delete btnDec ;}
    if(btnHex !=nullptr) {delete btnHex ;}
    if(btnOct !=nullptr) {delete btnOct ;}
    if(btnBin !=nullptr) {delete btnBin ;}

    if(display !=nullptr) {delete display ;}
    if(model != nullptr) {delete model; }
    if(mainLayout !=nullptr) {delete mainLayout ;}




}


void Widget::setPlus()
{
    model->setOperator(Model::OP_PLUS);
}

void Widget::setMinus()
{
    model->setOperator(Model::OP_MINUS);
}

void Widget::setTimes()
{
    model->setOperator(Model::OP_TIMES);
}

void Widget::setDivide()
{
    model->setOperator(Model::OP_DIVIDE);
}


void Widget::setHex()
{
    display->setHexMode();
    model->setNumBasis(Model::SYS_HEX);
}

void Widget::setDec()
{
    display->setDecMode();
    model->setNumBasis(Model::SYS_DEC);
}

void Widget::setOct()
{
    display->setOctMode();
    model->setNumBasis(Model::SYS_OCT);
}

void Widget::setBin()
{
    display->setBinMode();
    model->setNumBasis(Model::SYS_BIN);
}

void Widget::numberTooBig()
{
    QMessageBox message(QMessageBox::Information, tr("Prilis dlouhe cislo"), tr("Bohuzel cislo se nevedje na radek"));
    message.exec();
}

void Widget::getFalseOp(int operand)
{
    if(operand == Model::OP_LEFT)
    {
        QMessageBox msg(QMessageBox::Critical, tr("cislo na leve strane"),tr("Někdě se stala chyba. Špatný formát čísla nebo nebylo zadáno vůbec"));
        msg.exec();
    }
    else
    {
        QMessageBox msg(QMessageBox::Critical, tr("cislo na prave strane"),tr("Někdě se stala chyba. Špatný formát čísla nebo nebylo zadáno vůbec"));
        msg.exec();
    }
}


void Widget::getZeroDivide()
{
    QMessageBox msg(QMessageBox::Critical, tr("Deleni nulou"),tr("Lituji ale tato operace neni validni"));
    msg.exec();
}

void Widget::calculate()
{
    model->setLeft(leftOperand->text());
    model->setRight(rightOperand->text());

    int result = model->calculate();

    display->display(result);
}





