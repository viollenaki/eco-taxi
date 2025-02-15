/********************************************************************************
** Form generated from reading UI file 'calendarpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDARPAGE_H
#define UI_CALENDARPAGE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalendarPage
{
public:
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *confirmButton;

    void setupUi(QWidget *CalendarPage)
    {
        if (CalendarPage->objectName().isEmpty())
            CalendarPage->setObjectName("CalendarPage");
        CalendarPage->resize(600, 500);
        CalendarPage->setMinimumSize(QSize(600, 500));
        CalendarPage->setMaximumSize(QSize(600, 500));
        CalendarPage->setLocale(QLocale(QLocale::Russian, QLocale::Kyrgyzstan));
        verticalLayout = new QVBoxLayout(CalendarPage);
        verticalLayout->setObjectName("verticalLayout");
        calendarWidget = new QCalendarWidget(CalendarPage);
        calendarWidget->setObjectName("calendarWidget");

        verticalLayout->addWidget(calendarWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        cancelButton = new QPushButton(CalendarPage);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setMinimumSize(QSize(0, 52));

        horizontalLayout->addWidget(cancelButton);

        confirmButton = new QPushButton(CalendarPage);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setMinimumSize(QSize(0, 52));

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CalendarPage);

        QMetaObject::connectSlotsByName(CalendarPage);
    } // setupUi

    void retranslateUi(QWidget *CalendarPage)
    {
        CalendarPage->setWindowTitle(QCoreApplication::translate("CalendarPage", "\320\222\321\213\320\261\320\276\321\200 \320\264\320\260\321\202\321\213 | ECO TAXI", nullptr));
        cancelButton->setText(QCoreApplication::translate("CalendarPage", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        confirmButton->setText(QCoreApplication::translate("CalendarPage", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalendarPage: public Ui_CalendarPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDARPAGE_H
