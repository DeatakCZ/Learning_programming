/********************************************************************************
** Form generated from reading UI file 'editpersondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPERSONDIALOG_H
#define UI_EDITPERSONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditPersonDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListView *listView;
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLabel *yearLabel;
    QLabel *monthLabel;
    QLabel *dayLabel;
    QLabel *surnameLabel;
    QLabel *nameLabel;
    QLabel *idDisplayLabel;
    QLineEdit *nameEdit;
    QLineEdit *surnameEdit;
    QLineEdit *dayEdit;
    QLineEdit *monthEdit;
    QLineEdit *yearEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QPushButton *saveButton;

    void setupUi(QDialog *EditPersonDialog)
    {
        if (EditPersonDialog->objectName().isEmpty())
            EditPersonDialog->setObjectName("EditPersonDialog");
        gridLayout = new QGridLayout(EditPersonDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        listView = new QListView(EditPersonDialog);
        listView->setObjectName("listView");

        horizontalLayout->addWidget(listView);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        idLabel = new QLabel(EditPersonDialog);
        idLabel->setObjectName("idLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, idLabel);

        yearLabel = new QLabel(EditPersonDialog);
        yearLabel->setObjectName("yearLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, yearLabel);

        monthLabel = new QLabel(EditPersonDialog);
        monthLabel->setObjectName("monthLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, monthLabel);

        dayLabel = new QLabel(EditPersonDialog);
        dayLabel->setObjectName("dayLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, dayLabel);

        surnameLabel = new QLabel(EditPersonDialog);
        surnameLabel->setObjectName("surnameLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, surnameLabel);

        nameLabel = new QLabel(EditPersonDialog);
        nameLabel->setObjectName("nameLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        idDisplayLabel = new QLabel(EditPersonDialog);
        idDisplayLabel->setObjectName("idDisplayLabel");

        formLayout->setWidget(5, QFormLayout::FieldRole, idDisplayLabel);

        nameEdit = new QLineEdit(EditPersonDialog);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        surnameEdit = new QLineEdit(EditPersonDialog);
        surnameEdit->setObjectName("surnameEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameEdit);

        dayEdit = new QLineEdit(EditPersonDialog);
        dayEdit->setObjectName("dayEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, dayEdit);

        monthEdit = new QLineEdit(EditPersonDialog);
        monthEdit->setObjectName("monthEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, monthEdit);

        yearEdit = new QLineEdit(EditPersonDialog);
        yearEdit->setObjectName("yearEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, yearEdit);


        horizontalLayout->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        deleteButton = new QPushButton(EditPersonDialog);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout_2->addWidget(deleteButton);

        exitButton = new QPushButton(EditPersonDialog);
        exitButton->setObjectName("exitButton");

        horizontalLayout_2->addWidget(exitButton);

        saveButton = new QPushButton(EditPersonDialog);
        saveButton->setObjectName("saveButton");

        horizontalLayout_2->addWidget(saveButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(nameEdit, surnameEdit);
        QWidget::setTabOrder(surnameEdit, dayEdit);
        QWidget::setTabOrder(dayEdit, monthEdit);
        QWidget::setTabOrder(monthEdit, yearEdit);
        QWidget::setTabOrder(yearEdit, listView);
        QWidget::setTabOrder(listView, deleteButton);
        QWidget::setTabOrder(deleteButton, exitButton);
        QWidget::setTabOrder(exitButton, saveButton);

        retranslateUi(EditPersonDialog);

        QMetaObject::connectSlotsByName(EditPersonDialog);
    } // setupUi

    void retranslateUi(QDialog *EditPersonDialog)
    {
        EditPersonDialog->setWindowTitle(QCoreApplication::translate("EditPersonDialog", "Dialog", nullptr));
        idLabel->setText(QCoreApplication::translate("EditPersonDialog", "ID:", nullptr));
        yearLabel->setText(QCoreApplication::translate("EditPersonDialog", "Rok: ", nullptr));
        monthLabel->setText(QCoreApplication::translate("EditPersonDialog", "Mesic: ", nullptr));
        dayLabel->setText(QCoreApplication::translate("EditPersonDialog", "Den narozeni: ", nullptr));
        surnameLabel->setText(QCoreApplication::translate("EditPersonDialog", "Prijmeni: ", nullptr));
        nameLabel->setText(QCoreApplication::translate("EditPersonDialog", "Jmeno: ", nullptr));
        idDisplayLabel->setText(QCoreApplication::translate("EditPersonDialog", "TextLabel", nullptr));
        deleteButton->setText(QCoreApplication::translate("EditPersonDialog", "Delete", nullptr));
        exitButton->setText(QCoreApplication::translate("EditPersonDialog", "Exit", nullptr));
        saveButton->setText(QCoreApplication::translate("EditPersonDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPersonDialog: public Ui_EditPersonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPERSONDIALOG_H
