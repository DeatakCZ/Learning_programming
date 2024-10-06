
#include <QCoreApplication>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>


int main(int argc, char *argv[])
{
    Q_UNUSED(argc);
    Q_UNUSED(argv);

//  QCoreApplication a(argc, argv);
//  return a.exec();

    const QString DRIVER = "QSQLITE";

    QSqlDatabase db;
    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
//      Create and initialiase database
        db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(":memory:");
        qDebug() <<"SQLite is ok";

        if(db.open())
        {
            qDebug("Database was succesfully opened");
//          Create table with 2 rows
            QSqlQuery query("CREATE TABLE people (id INTEGER PRIMARY KEY, name TEXT)");
            if(query.isActive())
            {
                qDebug() << "Tab created \n";
            }
            else
            {
                qWarning() << "ERROR: " << query.lastError().text();
                return 1;
            }


//          1 - Table is filled
            qDebug() << "1 - Table is filled";

//          Fill table with entries
            query.exec("INSERT INTO people(name) VALUES('Adam')");
            query.exec("INSERT INTO people(name) VALUES('Bob')");
            query.exec("INSERT INTO people(name) VALUES('Cecil')");
            query.exec("INSERT INTO people(name) VALUES('David')");

//          PrintOut
            if(query.isActive())
                qDebug() << "1 - DONE \n";
            else
            {
                qWarning() << "ERROR: " << query.lastError().text();
                return 1;
            }








//          2 - Table is read from
                qDebug() << "2 - Table is read from";


//          Read from table
            if(!query.exec("SELECT name FROM people"))
                qWarning() << "ERROR: " << query.lastError().text();

            while(query.next())
            {
                qDebug() << query.value(0).toString();
            }

//          PrintOut
            if(query.isActive())
                qDebug() << "2 - DONE \n";
            else
            {
                qWarning() << "ERROR: " << query.lastError().text();
                return 1;
            }





//          3 - Single entry is read
            qDebug() << "3 - Single entry is read";


//          Prepared argument for db
            query.prepare("SELECT name FROM people WHERE id = ?");
            query.addBindValue(1);

//          Reading single entry
            if(!query.exec())
                qWarning() << "ERROR: " << query.lastError().text();

            if(query.first())
                qDebug() << query.value(0).toString();

//          PrintOut
            if(query.isActive())
                qDebug() << "3 - DONE \n";
            else
            {
                qWarning() << "ERROR: " << query.lastError().text();
                return 1;
            }







//          4 - Single entry is deleted
            qDebug() << "4 - Single entry is deleted";


//          Deleting entries
            if(!query.prepare("DELETE FROM people WHERE id=?"))
                qWarning() << "ERROR: " << query.lastError().text();
            query.addBindValue(1);

//          Read from table
            if(!query.exec("SELECT name FROM people"))
                qWarning() << "ERROR: " << query.lastError().text();

            while(query.next())
            {
                qDebug() << query.value(0).toString();
            }

//          PrintOut
            if(query.isActive())
                qDebug() << "4 - DONE \n";
            else
            {
                qWarning() << "ERROR: " << query.lastError().text();
                return 1;
            }







//          5 - Table is deleted
                qDebug() << "5 - Table is deleted";


//          Delete ENTIRE table
            query.exec("DELETE FROM people");

//          Read from table
            if(!query.exec("SELECT name FROM people"))
                qWarning() << "ERROR: " << query.lastError().text();

            while(query.next())
            {
                qDebug() << query.value(0).toString();
            }

//          PrintOut
            if(query.isActive())
                qDebug() << "5 - DONE \n";
            else
            {
                qWarning() << "ERROR: " << query.lastError().text();
                return 1;
            }



        }
        else
        {
            qWarning() << "ERROR: " << db.lastError().text();
            return 1;
        }


    }
    else
    {
        qFatal("SQLite driver not available");
    }



}
