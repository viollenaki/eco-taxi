/********************************************************************************
** Form generated from reading UI file 'settingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGE_H
#define UI_SETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QLabel *EcoTaxi;
    QPushButton *ReportButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EditButton;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView;

    void setupUi(QWidget *SettingsPage)
    {
        if (SettingsPage->objectName().isEmpty())
            SettingsPage->setObjectName("SettingsPage");
        SettingsPage->resize(1280, 720);
        SettingsPage->setMinimumSize(QSize(0, 0));
        SettingsPage->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(SettingsPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(50, -1, 50, -1);
        BackButton = new QPushButton(SettingsPage);
        BackButton->setObjectName("BackButton");
        BackButton->setMinimumSize(QSize(0, 52));
        BackButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(BackButton);

        EcoTaxi = new QLabel(SettingsPage);
        EcoTaxi->setObjectName("EcoTaxi");

        horizontalLayout->addWidget(EcoTaxi, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        ReportButton = new QPushButton(SettingsPage);
        ReportButton->setObjectName("ReportButton");
        ReportButton->setMinimumSize(QSize(0, 52));
        ReportButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(ReportButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(100, -1, 100, -1);
        EditButton = new QPushButton(SettingsPage);
        EditButton->setObjectName("EditButton");
        EditButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(EditButton, 0, Qt::AlignRight);

        AddButton = new QPushButton(SettingsPage);
        AddButton->setObjectName("AddButton");
        AddButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(AddButton, 0, Qt::AlignHCenter);

        DeleteButton = new QPushButton(SettingsPage);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(DeleteButton, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(45, -1, 45, -1);
        tableView = new QTableView(SettingsPage);
        tableView->setObjectName("tableView");
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setDragEnabled(false);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setGridStyle(Qt::SolidLine);
        tableView->setSortingEnabled(true);
        tableView->setWordWrap(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->verticalHeader()->setVisible(true);

        horizontalLayout_3->addWidget(tableView);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 6);

        retranslateUi(SettingsPage);

        QMetaObject::connectSlotsByName(SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SettingsPage)
    {
        SettingsPage->setWindowTitle(QCoreApplication::translate("SettingsPage", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 | ECO TAXI", nullptr));
        BackButton->setText(QCoreApplication::translate("SettingsPage", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        EcoTaxi->setText(QCoreApplication::translate("SettingsPage", "meow", nullptr));
        ReportButton->setText(QCoreApplication::translate("SettingsPage", "\320\236\320\242\320\247\320\225\320\242", nullptr));
        EditButton->setText(QCoreApplication::translate("SettingsPage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        AddButton->setText(QCoreApplication::translate("SettingsPage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        DeleteButton->setText(QCoreApplication::translate("SettingsPage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGE_H
