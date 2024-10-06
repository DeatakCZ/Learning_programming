
#include "person.h"

Person::Person(QObject *parent) : QObject{parent}
{
}

Person::Person(QString name, QString surname, QDate birthday, QObject *parent) : QObject(parent)
{
    m_name = name;
    m_surname = surname;
    m_birthday = birthday;
}


Person::Person(const Person &person) : QObject()
{
    m_id = person.m_id;
    m_name = person.m_name;
    m_surname = person.m_surname;
    m_birthday = person.m_birthday;
}


void Person::operator=(const Person &person)
{
    m_id = person.m_id;
    m_name = person.m_name;
    m_surname = person.m_surname;
    m_birthday = person.m_birthday;
}


void Person::setId(int id)
{
    m_id = id;
}


void Person::setName(QString name)
{
    m_name = name;
}


void Person::setSurname(QString surname)
{
    m_surname = surname;
}


void Person::setBirthday(int day, int month, int year)
{
    m_birthday.setDate(year, month, day);
}


void Person::setBirthday(QDate date)
{
    m_birthday = date;
}


int Person::getId()
{
    return m_id;
}

QString Person::getName()
{
    return m_name;
}

QString Person::getSurname()
{
    return m_surname;
}

QDate Person::getBirthday()
{
    return m_birthday;
}

int Person::getDay()
{
    return m_birthday.day();
}

int Person::getMonth()
{
    return m_birthday.month();
}

int Person::getYear()
{
    return m_birthday.year();
}


QString Person::toString()
{
    QString tmp;
    QString retVal = "Person: ";
    tmp = QString::number(m_id);
    retVal.append("id= ").append(tmp);
    retVal.append("name= ").append(m_name).append("surname= ").append(m_surname);
    retVal.append("date= ").append(m_birthday.toString());
    return retVal;
}




