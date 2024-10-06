
#ifndef PERSON_H
#define PERSON_H


#include <QObject>
#include <QString>
#include <QDate>

class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QObject *parent = nullptr);
    explicit Person(QString name, QString surname, QDate birthday, QObject *parent = nullptr);

    explicit Person(const Person &person);
    void operator = (const Person &person);

private:
    int m_id;
    QString m_name;
    QString m_surname;
    QDate m_birthday;

public:
    void setId(int id);
    void setName(QString name);
    void setSurname(QString surname);

    void setBirthday(int day, int month, int year);
    void setBirthday(QDate date);

    int getId();
    QString getName();
    QString getSurname();
    QDate getBirthday();

    int getDay();
    int getMonth();
    int getYear();

    QString toString();

signals:

public slots:

};

#endif // PERSON_H
