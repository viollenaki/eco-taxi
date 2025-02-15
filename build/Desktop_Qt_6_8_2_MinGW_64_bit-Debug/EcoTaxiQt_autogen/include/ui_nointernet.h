/********************************************************************************
** Form generated from reading UI file 'nointernet.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOINTERNET_H
#define UI_NOINTERNET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoInternet
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *Header;
    QPushButton *ReloadButton;
    QPushButton *ExitButton;

    void setupUi(QWidget *NoInternet)
    {
        if (NoInternet->objectName().isEmpty())
            NoInternet->setObjectName("NoInternet");
        NoInternet->resize(450, 350);
        gridLayout = new QGridLayout(NoInternet);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(NoInternet);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(400, 300));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Header = new QLabel(widget);
        Header->setObjectName("Header");
        Header->setWordWrap(true);

        verticalLayout->addWidget(Header);

        ReloadButton = new QPushButton(widget);
        ReloadButton->setObjectName("ReloadButton");

        verticalLayout->addWidget(ReloadButton);

        ExitButton = new QPushButton(widget);
        ExitButton->setObjectName("ExitButton");

        verticalLayout->addWidget(ExitButton);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(NoInternet);

        QMetaObject::connectSlotsByName(NoInternet);
    } // setupUi

    void retranslateUi(QWidget *NoInternet)
    {
        NoInternet->setWindowTitle(QCoreApplication::translate("NoInternet", "Form", nullptr));
        Header->setText(QCoreApplication::translate("NoInternet", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\320\265\321\200\320\262\320\260\320\275\320\276, \320\262\320\276\320\267\320\274\320\276\320\266\320\275\320\276, \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\321\213 \320\275\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217.", nullptr));
        ReloadButton->setText(QCoreApplication::translate("NoInternet", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        ExitButton->setText(QCoreApplication::translate("NoInternet", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoInternet: public Ui_NoInternet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOINTERNET_H
