#include <QMessageBox>

#include "editpersondialog.h"
#include "ui_editpersondialog.h"



EditPersonDialog::EditPersonDialog(PersonModel *model, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditPersonDialog)
{
    ui->setupUi(this);
    mp_personModel = model;
    mp_stringList = new QStringList();

    mp_personModel->findAllNames(mp_stringList);
    mp_stringListModel = new QStringListModel(*mp_stringList, this);
    mp_stringListModel->sort(0);

    ui->listView->setModel(mp_stringListModel);
}

EditPersonDialog::~EditPersonDialog()
{
    delete ui;
    if(mp_stringList != nullptr) delete mp_stringList;
    if(mp_stringListModel != nullptr) delete mp_stringListModel;
}



void EditPersonDialog::on_listView_clicked(const QModelIndex &index)
{
    m_modelIndex = index;

    QString name = mp_stringListModel->data(m_modelIndex).toString();

    int idBegin = name.indexOf('|') + 1;
    int idEnd = name.lastIndexOf('|');
    int id = name.mid(idBegin, idEnd - idBegin).toInt();

    mp_personModel->findById(id, &m_person);

    ui->idLabel->setText(QString::number(m_person.getId()));
    ui->nameEdit->setText(m_person.getName());
    ui->surnameEdit->setText(m_person.getSurname());

    QDate date = m_person.getBirthday();

    ui->dayEdit->setText(QString::number(date.day()));
    ui->monthEdit->setText(QString::number(date.month()));
    ui->yearEdit->setText(QString::number(date.year()));
}



void EditPersonDialog::on_exitButton_clicked()
{
    if(QMessageBox::warning(this,
                             tr("Zavrit dialog?"),
                             tr("Pokud jste provedli nejake zmeny, nebudou ulozeny.\nPresto zavrit?"),
                             QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
    {
        return;
    }
    close();
}


void EditPersonDialog::on_deleteButton_clicked()
{
    if(QMessageBox::warning(this,
                             tr("Vymazat osobu"),
                             tr("Jste si jisti ze chcete zvolenou osobu vymazat?"),
                             QMessageBox::Yes | QMessageBox::No) == QMessageBox::No)
    {
        return;
    }
    mp_personModel->deletePerson(m_person.getId());

    mp_stringListModel->removeRow(m_modelIndex.row());
    ui->listView->update();
}


void EditPersonDialog::on_saveButton_clicked()
{
    QMessageBox msg;

    if(ui->nameEdit->text().isEmpty())
    {
        msg.warning(this, tr("Drobna chyba"), tr("Pole se jmenem je prazdne"));
        return;
    }
    if(ui->surnameEdit->text().isEmpty())
    {
        msg.warning(this, tr("Drobna chyba"), tr("Pole s prijmenim je prazdne"));
        return;
    }

    bool isOk = true;
    int day = ui->dayEdit->text().toInt(&isOk);
    int month = ui->monthEdit->text().toInt(&isOk);
    int year = ui->yearEdit->text().toInt(&isOk);

    if(!isOk)
    {
        msg.warning(this, tr("Drobna chyba"), tr("V datu jsou zadany chybne znaky"));
        return;
    }

    QDate date = QDate(year, month, day);
    if(!date.isValid() || !isOk)
    {
        msg.warning(this, tr("Drobna chyba"), tr("Zadane datum neni v kalendari/neni platne"));
        return;
    }

    m_person.setName(ui->nameEdit->text());
    m_person.setSurname(ui->surnameEdit->text());
    m_person.setBirthday(date);

    mp_personModel->savePerson(m_person.getId(), m_person);
    mp_stringListModel->setData(m_modelIndex, QVariant(QString("|%1| %2 %3")
                                                       .arg(QString::number(m_person.getId()))
                                                       .arg(m_person.getSurname())
                                                       .arg(m_person.getName())));
    ui->listView->update();
}












