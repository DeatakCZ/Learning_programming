#ifndef EDITPERSONDIALOG_H
#define EDITPERSONDIALOG_H

#include <QDialog>
#include <QStringListModel>
#include <QModelIndex>

#include "personmodel.h"
#include "person.h"

namespace Ui {
class EditPersonDialog;
}

class EditPersonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditPersonDialog(PersonModel *model, QWidget *parent = nullptr);
    ~EditPersonDialog();

private slots:
    void on_listView_clicked(const QModelIndex &index);

    void on_exitButton_clicked();

    void on_deleteButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::EditPersonDialog *ui;
    PersonModel *mp_personModel;
    Person m_person;

    QStringList *mp_stringList;
    QStringListModel *mp_stringListModel;
    QModelIndex m_modelIndex;
};

#endif // EDITPERSONDIALOG_H
