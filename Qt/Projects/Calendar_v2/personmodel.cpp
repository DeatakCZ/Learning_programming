
#include "personmodel.h"

PersonModel::PersonModel(QObject *parent) : QObject{parent}
{
    QFile personFile(FILENAME);

    if(personFile.exists())
    {
        if(!personFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            throw "PersonModel - constructor: I cannot open the file for reading!";
        }

        QJsonParseError jsonError;

        m_jsonPersonDoc = QJsonDocument::fromJson(personFile.readAll(), &jsonError);

        while(personFile.isOpen())
        {
            personFile.close();
        }

        if(jsonError.error != QJsonParseError::NoError)
        {
            throw "Any error in file format!";
        }

        m_jsonPersonArray = m_jsonPersonDoc.array();
    }
    else
    {
        Person person;
        person.setId(1);
        person.setName("Friedrich");
        person.setSurname("Nietzsche");
        person.setBirthday(QDate(1844,10,15));

        addPerson(person);
        m_isChanged = true;
    }
}

PersonModel::~PersonModel()
{
    saveDocument();
}


void PersonModel::saveDocument()
{
    if(m_isChanged)
    {
        QJsonDocument(m_jsonPersonArray).toJson(QJsonDocument::Compact);

        m_jsonPersonDoc.setArray(m_jsonPersonArray);

        QFile file(FILENAME);
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            throw "PersonModel - saveDocument : I cannot open the file for the writing!";
        }
        file.write(m_jsonPersonDoc.toJson());
        file.flush();

        while(file.isOpen())
        {
            file.close();
        }
        m_isChanged = false;
    }
}


void PersonModel::addPerson(Person &person)
{
    QJsonObject jsonObj;

    person.setId(getLastId() + 1);
    setPerson(jsonObj, person);

    m_jsonPersonArray.append(jsonObj);

    m_isChanged = true;
}


bool PersonModel::savePerson(int id, Person &person)
{
    bool retVal = false;

    QJsonArray tmpArray;

    for(auto item: m_jsonPersonArray)
    {
        QJsonObject jsonObj = item.toObject();
        if(jsonObj[JSON_ID] == id)
        {
            setPerson(jsonObj,person);
            retVal = true;
        }
        tmpArray.append(jsonObj);
    }
    m_jsonPersonArray = tmpArray;
    m_isChanged = true;
    return retVal;
}


bool PersonModel::deletePerson(int id)
{
    bool retVal = false;
    QJsonArray tmpArray;

    for(auto item: m_jsonPersonArray)
    {
        QJsonObject obj = item.toObject();
        if(obj[JSON_ID] == id)
        {
            retVal = true;
            continue;
        }
        tmpArray.append(obj);
    }
    m_jsonPersonArray = tmpArray;
    m_isChanged = true;
    return retVal;
}


bool PersonModel::findById(int id, Person *person)
{
    bool retVal = false;

    for(auto item : m_jsonPersonArray)
    {
        QJsonObject obj = item.toObject();
        if(obj[JSON_ID] == id)
        {
            getPerson(obj, person);
            retVal = true;
            break;
        }
    }
    return retVal;
}


bool PersonModel::findByName(QString name, QList<Person> *personList)
{
    bool retVal = false;
    Person person;
    for(auto item: m_jsonPersonArray)
    {
        QJsonObject obj = item.toObject();
        QString tmp = obj[JSON_SURNAME].toString().append(" ").append(obj[JSON_NAME].toString());
        if(name == tmp)
        {
            getPerson(obj, &person);
            retVal = true;
            personList->append(person);
        }
    }
    return retVal;
}


bool PersonModel::findByDate(long julianDay, QList<Person> *personList)
{
    bool retVal = false;
    Person person;
    int year = QDate::currentDate().year();
    for(auto item: m_jsonPersonArray)
    {
        QJsonObject obj = item.toObject();
        long jd = QDate(year, obj[JSON_MONTH].toInt(), obj[JSON_DAY].toInt()).toJulianDay();
        if(jd == julianDay)
        {
            getPerson(obj, &person);
            retVal = true;
            personList->append(person);
        }
    }
    return retVal;
}


int PersonModel::count()
{
    return m_jsonPersonArray.size();
}

int PersonModel::getLastId()
{
    int lastId = 0;
    for(auto item: m_jsonPersonArray)
    {
        QJsonObject obj = item.toObject();
        if(obj[JSON_ID].toInt()>lastId)
        {
            lastId = obj[JSON_ID].toInt();
        }
    }
    return lastId;
}


void PersonModel::getPerson(QJsonObject &jsonObject, Person *person)
{
    person->setId(jsonObject[JSON_ID].toInt());
    person->setName(jsonObject[JSON_NAME].toString());
    person->setSurname(jsonObject[JSON_SURNAME].toString());
    person->setBirthday(jsonObject[JSON_DAY].toInt(), jsonObject[JSON_MONTH].toInt(), jsonObject[JSON_YEAR].toInt());
}


void PersonModel::setPerson(QJsonObject &jsonObject, Person &person)
{
    jsonObject[JSON_ID] = person.getId();
    jsonObject[JSON_NAME] = person.getName();
    jsonObject[JSON_SURNAME] = person.getSurname();
    jsonObject[JSON_DAY] = person.getDay();
    jsonObject[JSON_MONTH] = person.getMonth();
    jsonObject[JSON_YEAR] = person.getYear();
}


bool PersonModel::findAllNames(QStringList *personList)
{
    bool retVal = false;
    Person person;

    for(auto item: m_jsonPersonArray)
    {
        QJsonObject obj = item.toObject();
        getPerson(obj, &person);
        QString name = QString("|%1| %2 %3")
                        .arg(QString::number(person.getId()))
                        .arg(person.getSurname())
                        .arg(person.getName());
        personList->append(name);
        retVal = true;
    }
    return retVal;
}















