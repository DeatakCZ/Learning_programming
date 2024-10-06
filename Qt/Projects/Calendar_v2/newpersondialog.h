#ifndef NEWPERSONDIALOG_H
#define NEWPERSONDIALOG_H

#include <QDialog>

#include "personmodel.h"

namespace Ui {
class newPersonDialog;
}

class newPersonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit newPersonDialog(PersonModel *model, QWidget *parent = nullptr);
    ~newPersonDialog();

private slots:
    void on_calendarWidget_selectionChanged();

    void on_dateEdit_dateChanged(const QDate &date);

    void on_dayEdit_textChanged(const QString &day);

    void on_monthEdit_textChanged(const QString &month);

    void on_yearEdit_textChanged(const QString &year);

    void on_buttonCancel_clicked();

    void on_buttonOk_clicked();

private:
    Ui::newPersonDialog *ui;
    PersonModel *mp_model;
};

#endif // NEWPERSONDIALOG_H
