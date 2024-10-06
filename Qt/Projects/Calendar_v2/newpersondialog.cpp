#include "newpersondialog.h"
#include "ui_newpersondialog.h"

#include <QMessageBox>

newPersonDialog::newPersonDialog(PersonModel *model, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newPersonDialog)
{
    ui->setupUi(this);
    mp_model = model;

    QDate currentDate = ui->calendarWidget->selectedDate();
    ui->dateEdit->setDate(currentDate);
    ui->dayEdit->setText(QString::number(currentDate.day()));
    ui->monthEdit->setText(QString::number(currentDate.month()));
    ui->yearEdit->setText(QString::number(currentDate.year()));
}

newPersonDialog::~newPersonDialog()
{
    delete ui;
}

void newPersonDialog::on_calendarWidget_selectionChanged()
{
    QDate date = ui->calendarWidget->selectedDate();

    ui->dateEdit->setDate(date);

    ui->dayEdit->setText(QString::number(date.day()));
    ui->monthEdit->setText(QString::number(date.month()));
    ui->yearEdit->setText(QString::number(date.year()));
}


void newPersonDialog::on_dateEdit_dateChanged(const QDate &date)
{
    ui->calendarWidget->setSelectedDate(date);
}


void newPersonDialog::on_dayEdit_textChanged(const QString &day)
{
    QDate date = ui->dateEdit->date();
    date = QDate(date.year(),date.month(), day.toInt());
    ui->dateEdit->setDate(date);
}


void newPersonDialog::on_monthEdit_textChanged(const QString &month)
{
    QDate date = ui->dateEdit->date();
    date = QDate(date.year(),month.toInt(), date.day());
    ui->dateEdit->setDate(date);
}


void newPersonDialog::on_yearEdit_textChanged(const QString &year)
{
    QDate date = ui->dateEdit->date();
    date = QDate(year.toInt(),date.month(), date.day());
    ui->dateEdit->setDate(date);
}




void newPersonDialog::on_buttonCancel_clicked()
{
    close();
}


void newPersonDialog::on_buttonOk_clicked()
{
    QMessageBox msg;

    if(ui->nameEdit->text().isEmpty())
    {
        msg.warning(this, tr("Drobna chyba"), tr("Jmeno nemuze zustat prazdne."));
        return;
    }

    if(ui->surnameEdit->text().isEmpty())
    {
        msg.warning(this, tr("Drobna chyba"), tr("Prijmeni nemuze zustat prazdne."));
        return;
    }

    bool isOk = true;
    int day = ui->dayEdit->text().toInt(&isOk);
    int month = ui->monthEdit->text().toInt(&isOk);
    int year = ui->yearEdit->text().toInt(&isOk);

    if(!isOk)
    {
        msg.warning(this, tr("Drobna chyba"), tr("V datu jsou zadane nezname znaky."));
        return;
    }

    QDate date = QDate(year,month,day);
    if(!date.isValid() || !isOk)
    {
        msg.warning(this, tr("Drobna chyba"), tr("Zadane datum neni spravne."));
        return;
    }

    Person person;
    person.setName(ui->nameEdit->text());
    person.setSurname(ui->surnameEdit->text());
    person.setBirthday(date);

    mp_model->addPerson(person);

    close();
    msg.information(this, tr("Osoba ulozena"), tr("Osoba uspesne ulozna do seznamu."));
}


