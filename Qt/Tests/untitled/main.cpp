#include <QTextStream>
#include <QString>
#include <QChar>

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    QTextStream out(stdout);

    QString str("Na louce se opět pase kun.");

    foreach(QChar znak, str) {
        out << znak << "*";
    }

    out << Qt::endl;


    for(QChar *i = str.end(); i != str.begin()-1; --i)
    {
        out<< *i<< "*";
    }

    out << Qt::endl;


    return 0;
}
