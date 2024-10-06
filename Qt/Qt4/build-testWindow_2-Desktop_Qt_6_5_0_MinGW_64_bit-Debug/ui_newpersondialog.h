/********************************************************************************
** Form generated from reading UI file 'newpersondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPERSONDIALOG_H
#define UI_NEWPERSONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_newPersonDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *jmenoLabel;
    QLineEdit *nameEdit;
    QLabel *prijmeniLabel;
    QLineEdit *surnameEdit;
    QLabel *denNarozeniLabel;
    QLineEdit *dayEdit;
    QLabel *mesicLabel;
    QLineEdit *monthEdit;
    QLabel *rokLabel;
    QLineEdit *yearEdit;
    QVBoxLayout *verticalLayout_3;
    QCalendarWidget *calendarWidget;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonCancel;
    QPushButton *buttonOk;

    void setupUi(QDialog *newPersonDialog)
    {
        if (newPersonDialog->objectName().isEmpty())
            newPersonDialog->setObjectName("newPersonDialog");
        gridLayout = new QGridLayout(newPersonDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        jmenoLabel = new QLabel(newPersonDialog);
        jmenoLabel->setObjectName("jmenoLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, jmenoLabel);

        nameEdit = new QLineEdit(newPersonDialog);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        prijmeniLabel = new QLabel(newPersonDialog);
        prijmeniLabel->setObjectName("prijmeniLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, prijmeniLabel);

        surnameEdit = new QLineEdit(newPersonDialog);
        surnameEdit->setObjectName("surnameEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameEdit);

        denNarozeniLabel = new QLabel(newPersonDialog);
        denNarozeniLabel->setObjectName("denNarozeniLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, denNarozeniLabel);

        dayEdit = new QLineEdit(newPersonDialog);
        dayEdit->setObjectName("dayEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, dayEdit);

        mesicLabel = new QLabel(newPersonDialog);
        mesicLabel->setObjectName("mesicLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, mesicLabel);

        monthEdit = new QLineEdit(newPersonDialog);
        monthEdit->setObjectName("monthEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, monthEdit);

        rokLabel = new QLabel(newPersonDialog);
        rokLabel->setObjectName("rokLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, rokLabel);

        yearEdit = new QLineEdit(newPersonDialog);
        yearEdit->setObjectName("yearEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, yearEdit);


        horizontalLayout->addLayout(formLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        calendarWidget = new QCalendarWidget(newPersonDialog);
        calendarWidget->setObjectName("calendarWidget");

        verticalLayout_3->addWidget(calendarWidget);

        dateEdit = new QDateEdit(newPersonDialog);
        dateEdit->setObjectName("dateEdit");

        verticalLayout_3->addWidget(dateEdit);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        buttonCancel = new QPushButton(newPersonDialog);
        buttonCancel->setObjectName("buttonCancel");

        horizontalLayout_2->addWidget(buttonCancel);

        buttonOk = new QPushButton(newPersonDialog);
        buttonOk->setObjectName("buttonOk");

        horizontalLayout_2->addWidget(buttonOk);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(newPersonDialog);

        QMetaObject::connectSlotsByName(newPersonDialog);
    } // setupUi

    void retranslateUi(QDialog *newPersonDialog)
    {
        newPersonDialog->setWindowTitle(QCoreApplication::translate("newPersonDialog", "Dialog", nullptr));
        jmenoLabel->setText(QCoreApplication::translate("newPersonDialog", "Jmeno: ", nullptr));
        prijmeniLabel->setText(QCoreApplication::translate("newPersonDialog", "Prijmeni: ", nullptr));
        denNarozeniLabel->setText(QCoreApplication::translate("newPersonDialog", "Den narozeni: ", nullptr));
        mesicLabel->setText(QCoreApplication::translate("newPersonDialog", "Mesic: ", nullptr));
        rokLabel->setText(QCoreApplication::translate("newPersonDialog", "Rok: ", nullptr));
        buttonCancel->setText(QCoreApplication::translate("newPersonDialog", "Zavrit", nullptr));
        buttonOk->setText(QCoreApplication::translate("newPersonDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newPersonDialog: public Ui_newPersonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPERSONDIALOG_H
