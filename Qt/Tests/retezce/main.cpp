#include <QTextStream>
#include <QString>
#include <QChar>



int main(void)
{
    QTextStream out(stdout);
/*
    QString str = "Jsme_ve_vesmíru_jediní?";
    out <<str.left(5) << Qt::endl;
    out <<str.right(5)<< Qt::endl;
    out <<str.mid(5,13)<< Qt::endl;


    str.append(" ITNetwork");
    str.prepend("mně se ");

    out << str << Qt::endl;
    out << "Retezec obsahuje " << str.size() << " znaku" <<Qt::endl;

    out <<str.toUpper()<<Qt::endl;
    out <<str.toLower()<<Qt::endl;

    out << str[0]<< "  " << str[4] << Qt::endl;
*/

    int pismena =0;
    int cisla =0;
    int mezery =0;
    int intpunk = 0;

    QString str = "Na louce se pase 1 bily\tkun.\n";
    out <<str<<Qt::endl;

    foreach (QChar s, str) {
        if(s.isDigit())
            cisla++;
        if(s.isLetter())
            pismena++;
        if(s.isSpace())
            mezery++;
        if(s.isPunct())
            intpunk++;

        }


        out << QString("Máme celkem %1 znaků").arg(str.size())<<Qt::endl;
        out<< QString ("Z toho je %1 písmen").arg(pismena)<<Qt::endl;
        out<< QString (" pak je tam %1 čísel").arg(cisla)<<Qt::endl;
        out<< QString (" krom toho i %1 mezer").arg(mezery)<<Qt::endl;
        out<< QString ("a %1 znaků interpunkce.").arg(intpunk)<<Qt::endl;

    return 0;
}
