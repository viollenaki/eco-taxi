/********************************************************************************
** Form generated from reading UI file 'navigationmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONMANAGER_H
#define UI_NAVIGATIONMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_navigationManager
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *pages;

    void setupUi(QWidget *navigationManager)
    {
        if (navigationManager->objectName().isEmpty())
            navigationManager->setObjectName("navigationManager");
        navigationManager->resize(1280, 720);
        navigationManager->setMinimumSize(QSize(0, 0));
        navigationManager->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(navigationManager);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pages = new QStackedWidget(navigationManager);
        pages->setObjectName("pages");

        verticalLayout->addWidget(pages);


        retranslateUi(navigationManager);

        QMetaObject::connectSlotsByName(navigationManager);
    } // setupUi

    void retranslateUi(QWidget *navigationManager)
    {
        navigationManager->setWindowTitle(QCoreApplication::translate("navigationManager", "ECO TAXI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class navigationManager: public Ui_navigationManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONMANAGER_H
