#ifndef RESULTWIDGET_H
#define RESULTWIDGET_H

#include <QWidget>
#include <QString>
#include <QDate>
#include <QList>

#include "person.h"
#include "personmodel.h"

namespace Ui {
class ResultWidget;
}

class ResultWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ResultWidget(PersonModel *model, QWidget *parent = nullptr);
    ~ResultWidget();

    void redraw();

private:
    Ui::ResultWidget *ui;

    QDate m_today;
    PersonModel *mp_model;

    QString getSaintName();
    void setSaintLabels();
    void whosBirthday();

    QString createResultString(QList<Person> &personList);

};

#endif // RESULTWIDGET_H
