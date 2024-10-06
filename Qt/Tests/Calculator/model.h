
#ifndef MODEL_H
#define MODEL_H


#include <QObject>
#include <QString>


class Model : public QObject
{
    Q_OBJECT

public:
    explicit Model(QObject *parent = nullptr);

    static const int OP_PLUS    = 0x00;
    static const int OP_MINUS   = 0x01;
    static const int OP_TIMES   = 0x02;
    static const int OP_DIVIDE  = 0x03;

    static const int SYS_HEX    = 0x04;
    static const int SYS_DEC    = 0x05;
    static const int SYS_OCT    = 0x06;
    static const int SYS_BIN    = 0x07;

    static const int OP_LEFT    = 0x08;
    static const int OP_RIGHT   = 0x09;

private:
    int opLeft;
    int opRight;

    int operation;
    int numBasis;

    bool isLeftOk;
    bool isRightOk;


public:
    void setLeft(QString value);
    void setRight(QString value);
    void setOperator(int operation);
    void setNumBasis(int numBasis);

    int calculate();


private:
    int numberTest(QString number, bool *isOk);


signals:
    void operandFalse(int operand);
    void zeroDivide();

public slots:
};

#endif // MODEL_H
