/********************************************************************************
** Form generated from reading UI file 'resultwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWIDGET_H
#define UI_RESULTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultWidget
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *todayDateLabel;
    QLabel *todaySaintLabel;
    QLabel *yesterday2Label;
    QLabel *yesterdayLabel;
    QLabel *todayBirthLabel;
    QLabel *label_7;
    QLabel *tomorrow2Label;
    QLabel *tomorrowLabel;

    void setupUi(QWidget *ResultWidget)
    {
        if (ResultWidget->objectName().isEmpty())
            ResultWidget->setObjectName("ResultWidget");
        ResultWidget->resize(400, 300);
        ResultWidget->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font-size: 15px;\n"
"	font-weight: bold;\n"
"}"));
        formLayoutWidget = new QWidget(ResultWidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 281));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        todayDateLabel = new QLabel(formLayoutWidget);
        todayDateLabel->setObjectName("todayDateLabel");
        todayDateLabel->setStyleSheet(QString::fromUtf8("color: indigo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, todayDateLabel);

        todaySaintLabel = new QLabel(formLayoutWidget);
        todaySaintLabel->setObjectName("todaySaintLabel");
        todaySaintLabel->setStyleSheet(QString::fromUtf8("color: firebrick"));

        formLayout->setWidget(1, QFormLayout::FieldRole, todaySaintLabel);

        yesterday2Label = new QLabel(formLayoutWidget);
        yesterday2Label->setObjectName("yesterday2Label");

        formLayout->setWidget(2, QFormLayout::FieldRole, yesterday2Label);

        yesterdayLabel = new QLabel(formLayoutWidget);
        yesterdayLabel->setObjectName("yesterdayLabel");

        formLayout->setWidget(3, QFormLayout::FieldRole, yesterdayLabel);

        todayBirthLabel = new QLabel(formLayoutWidget);
        todayBirthLabel->setObjectName("todayBirthLabel");
        todayBirthLabel->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: maroon;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, todayBirthLabel);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        tomorrow2Label = new QLabel(formLayoutWidget);
        tomorrow2Label->setObjectName("tomorrow2Label");

        formLayout->setWidget(6, QFormLayout::FieldRole, tomorrow2Label);

        tomorrowLabel = new QLabel(formLayoutWidget);
        tomorrowLabel->setObjectName("tomorrowLabel");

        formLayout->setWidget(5, QFormLayout::FieldRole, tomorrowLabel);


        retranslateUi(ResultWidget);

        QMetaObject::connectSlotsByName(ResultWidget);
    } // setupUi

    void retranslateUi(QWidget *ResultWidget)
    {
        ResultWidget->setWindowTitle(QCoreApplication::translate("ResultWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ResultWidget", "Dnes je: ", nullptr));
        label_4->setText(QCoreApplication::translate("ResultWidget", "Vcera: ", nullptr));
        label_5->setText(QCoreApplication::translate("ResultWidget", "Dnes: ", nullptr));
        label_6->setText(QCoreApplication::translate("ResultWidget", "Zitra: ", nullptr));
        label_3->setText(QCoreApplication::translate("ResultWidget", "Predevcirem: ", nullptr));
        label_2->setText(QCoreApplication::translate("ResultWidget", "Svatek ma: ", nullptr));
        todayDateLabel->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
        todaySaintLabel->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
        yesterday2Label->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
        yesterdayLabel->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
        todayBirthLabel->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("ResultWidget", "Pozitri: ", nullptr));
        tomorrow2Label->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
        tomorrowLabel->setText(QCoreApplication::translate("ResultWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultWidget: public Ui_ResultWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWIDGET_H
