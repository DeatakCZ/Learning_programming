
#include "model.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
     opLeft =0;
     opRight=0;

     operation = Model::OP_PLUS;
     numBasis = Model::SYS_DEC;

     isLeftOk=false;
     isRightOk=false;
}


void Model::setLeft(QString value)
{
    opLeft = numberTest(value, &isLeftOk);
}


void Model::setRight(QString value)
{
    opRight = numberTest(value,&isRightOk);
}




void Model::setOperator(int _operation)
{
    operation = _operation;
}
void Model::setNumBasis(int _numBasis)
{
    numBasis = _numBasis;
}



int Model::numberTest(QString number, bool *isOK)
{
    int retVal =0;
    switch(numBasis)
    {
    case SYS_HEX:
        retVal = number.toInt(isOK,16);
        break;

    case SYS_DEC:
        retVal = number.toInt(isOK,10);
        break;

    case SYS_OCT:
        retVal = number.toInt(isOK,8);
        break;

    case SYS_BIN:
        retVal = number.toInt(isOK,2);
        break;
    }

    return retVal;
}














int Model::calculate()
{
    if(!isRightOk)
    {
        emit operandFalse(OP_RIGHT);
        return 0;
    }
    if(!isLeftOk)
    {
        emit operandFalse(OP_LEFT);
        return 0;
    }
    if(opRight == 0 &&operation == OP_DIVIDE)
    {
        emit zeroDivide();
        return 0;
    }




    switch(operation)
    {
        case OP_PLUS: return opLeft+opRight;break;
        case OP_MINUS: return opLeft-opRight;break;
        case OP_TIMES: return opLeft*opRight;break;
        case OP_DIVIDE: return opLeft/opRight;break;
        default : return 0;
    };

}


