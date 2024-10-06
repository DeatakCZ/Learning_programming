
#ifndef PERSONMODEL_H
#define PERSONMODEL_H



#include <QObject>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include <QFile>
#include <QDate>
#include <QList>
#include <QStringList>

#include "person.h"




class PersonModel : public QObject
{
    Q_OBJECT

public:
    explicit PersonModel(QObject *parent = nullptr);
    virtual ~PersonModel();

private:
    const QString FILENAME = "persons.json";

    const QString JSON_ID = "id";
    const QString JSON_NAME = "name";
    const QString JSON_SURNAME = "surname";
    const QString JSON_DAY = "day";
    const QString JSON_MONTH = "month";
    const QString JSON_YEAR = "year";

    QJsonDocument m_jsonPersonDoc;
    QJsonArray m_jsonPersonArray;
    bool m_isChanged;

    int getLastId();
    void getPerson(QJsonObject &jsonObject, Person *person);
    void setPerson(QJsonObject &jsonObject, Person &person);
    void saveDocument();

public:
    void addPerson(Person &person);
    bool savePerson(int id, Person &person);
    bool deletePerson(int id);

    bool findById(int id, Person *person);
    bool findByName(QString name, QList<Person> *personList);
    bool findByDate(long julianDay, QList<Person> *personList);
    bool findAllNames(QStringList *personList);

    int count();

signals:


};

#endif // PERSONMODEL_H











