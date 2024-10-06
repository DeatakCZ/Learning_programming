#include "resultWidget.h"
#include "ui_resultWidget.h"

#include <QMessageBox>

#include "personmodel.h"

ResultWidget::ResultWidget(PersonModel *model, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResultWidget)
{
    ui->setupUi(this);

    mp_model = model;
    m_today = QDate::currentDate();
    QString noResult(tr("Zadna udalost"));


    ui->todayDateLabel->setText(noResult);
    ui->todaySaintLabel->setText(noResult);
    ui->yesterday2Label->setText(noResult);
    ui->yesterdayLabel->setText(noResult);
    ui->todayBirthLabel->setText(noResult);
    ui->tomorrowLabel->setText(noResult);
    ui->tomorrow2Label->setText(noResult);

    redraw();
}


void ResultWidget::redraw()
{
    setSaintLabels();
    whosBirthday();
}


ResultWidget::~ResultWidget()
{
    delete ui;
}


void ResultWidget::setSaintLabels()
{
    ui->todayDateLabel->setText(m_today.toString("dd. MMMM yyyy (dddd)"));
    ui->todaySaintLabel->setText(getSaintName());
}

void ResultWidget::whosBirthday()
{
    try
    {
        Person person;

        QList<Person> personList;

        if(mp_model->findByDate(m_today.toJulianDay()-2, &personList))
        {
            ui->yesterday2Label->setText(createResultString(personList));
        }

        if(mp_model->findByDate(m_today.toJulianDay()-1, &personList))
        {
            ui->yesterdayLabel->setText(createResultString(personList));
        }

        if(mp_model->findByDate(m_today.toJulianDay()+1, &personList))
        {
            ui->tomorrowLabel->setText(createResultString(personList));
        }

        if(mp_model->findByDate(m_today.toJulianDay()+2, &personList))
        {
            ui->tomorrow2Label->setText(createResultString(personList));
        }
    }catch(QString e)
    {
        QMessageBox msg;
        msg.critical(this, "Stala se chyba", e.append("\nZkusteznovu spustit aplikaci nebo kontaktujte vyrobce!!"));
    }
}

QString ResultWidget::getSaintName()
{
    QFile file(":/resources/file/when.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QJsonParseError jerror;
    QJsonDocument jdoc = QJsonDocument::fromJson(file.readAll(), &jerror);
    file.close();

    if(jerror.error != QJsonParseError::NoError)
    {
        throw("Nastala chyba v souboru JSON");
    }
    QJsonObject obj = jdoc.object();
    QString when = m_today.toString("ddMM");
    QJsonArray dayArray = obj[when].toArray();
    QString names;

    if(dayArray.isEmpty())
    {
        names = obj[when].toString();
    }
    else
    {
        for(auto item: dayArray)
        {
            names.append(item.toString());
            names.append("\n");
        }
        names = names.left(names.length() - 2);
    }
    return names;
}


QString ResultWidget::createResultString(QList<Person> &personList)
{
    int year = m_today.year();
    QString names;
    Person person;

    for(Person &item: personList)
    {
        int Age = year - item.getYear();

        names.append(item.getSurname()).append(" ").append(item.getName()).append( " (").append(QString::number(Age)).append(" let) ").append("\n");
    }
    if(!names.isEmpty())
    {
        names = names.left(names.length() - 2);
    }
    personList.clear();
    return names;
}


























