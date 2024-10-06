#include <iostream>
#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include <QChar>


using namespace Qt;

int main(int argc, char *argv[])
{


    Q_UNUSED(argc)
    Q_UNUSED(argv)


    QTextStream out(stdout);
    QString str1 = "libi";
    QString str2 = "Na louce se prohani %1 konu a v lese jsou %2 a %3. ";
    int louka = 15;
    int les = 3;
    QString str3 = "Jezek";
    QString str4("Jsme ve vesmíru jediní?");
    int letters  = 0;
    int numbers = 0;
    int spaces  = 0;
    int punctiation  = 0;
    QString str5 = "Na louce se pase 1 bílý\tkůň.\n";
    QString str6 = "JEZEK";
    QString str7("258");
    QString str8("254.5");
    QString str9("1e99");
    double testNum = 40.1234567891;
    QString temp1,temp2;
    QString str10 = "Na louce je";
    QString str11 = "Jmeno: ";
    QString str12 = "Prijmeni: ";
    QString str13 = "Vek: ";



    str1.append(" ITNetwork!!!");
    str1.prepend("Mně se ");

    out << str1 << endl;
    out << "Retezec obsahuje " << str1.length() << " znaku" << endl;
    out << str1.toUpper() << endl;
    out << str1.toLower() << endl;



    out << str2.arg(louka).arg(les).arg(str3) << endl;



    out << str4.left(4) << endl;
    out << str4.right(7) << endl;
    out << str4.mid(8,7) << endl;



    foreach(QChar s, str5)
    {
        if (s.isDigit())
        {
            numbers++;
        }
        else if (s.isLetter())
        {
            letters++;
        }
        else if (s.isSpace())
        {
            spaces++;
        }
        else if (s.isPunct())
        {
            punctiation++;
        }
    }

    out << QString("Máme celkem %1 znaků").arg(str5.length()) << endl;
    out << QString("Z toho je %1 písmen").arg(letters) << endl;
    out << QString("pak je tam %1 čísel").arg(numbers) << endl;
    out << QString("krom toho i %1 mezer").arg(spaces) << endl;
    out << QString("a %1 znaků interpunkce").arg(punctiation) << endl;
    out << str5;

    out << "*";
    foreach(QChar symbol, str5)
    {
        out << symbol << "*";
    }
    out << endl;

    for (QChar *symbol = str5.end() ; symbol != str5.begin()-1 ; --symbol )
    {
        out << *symbol << "_";
    }
    out << endl;

    for (int pos  = 0; pos  < str5.length() ; ++pos )
    {
        out << str5.at(pos);
    }
    out << endl;

    //int x = QString::compare(str3, str6 );
    int x = QString::compare(str3, str6, Qt::CaseInsensitive );

    if(x == 0)
    {
        out << QString("První i druhý řetězec jsou stejné") << endl;
    }
    else {
        out << QString("První i druhý řetězec nejsou stejné") << endl;
    }


    out << str7.toInt() << endl;
    out << str8.toInt() << endl;
    out << str9.toInt() << endl;

    out << str7.toDouble() << endl;
    out << str8.toDouble() << endl;
    out << str9.toDouble() << endl;


    out << temp1.setNum(louka, 2) << endl;;
    out << temp2.setNum(testNum) << endl;;

    out << temp1.setNum(testNum, 'e', 10) << endl;
    out << temp1.setNum(testNum, 'E', 10) << endl;
    out << temp1.setNum(testNum, 'f', 15) << endl;
    out << temp1.setNum(testNum, 'g', 15) << endl;
    out << temp1.setNum(testNum, 'G', 15) << endl;


    out << endl;

    out << QString("Puvodni zprava :") << str10 << endl;
    str10.append(" kun");
    out<< QString("Po zmene :") << str10 << endl;

    str10.remove(9,3);
    out << QString("Po dalsi zmene :") << str10 << endl;

    str10.replace(9,3,"je holka");
    out << QString("A nakonec :")<< str10 << endl;

    str10.clear();

    if(str10.isEmpty())
    {
        out << QString("Retezec je prazdny") << endl;
    }


    int width = str12.length();

    out << str11.rightJustified(width, ' ') << QString("Richard") << endl;
    out << str12.rightJustified(width, ' ') << QString("Hladky") << endl;
    out << str13.rightJustified(width, ' ') << QString("35") << endl;




    return 0;
}
