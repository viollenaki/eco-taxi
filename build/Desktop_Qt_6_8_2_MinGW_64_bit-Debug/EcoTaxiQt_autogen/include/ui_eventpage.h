/********************************************************************************
** Form generated from reading UI file 'eventpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTPAGE_H
#define UI_EVENTPAGE_H

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

class Ui_eventPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QLabel *EcoTaxi;
    QPushButton *ReportButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EditButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *PrevButton;
    QPushButton *DateButton;
    QPushButton *NextButton;
    QPushButton *DeleteButton;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QTableView *bottomTable;

    void setupUi(QWidget *eventPage)
    {
        if (eventPage->objectName().isEmpty())
            eventPage->setObjectName("eventPage");
        eventPage->resize(1280, 720);
        eventPage->setMinimumSize(QSize(0, 0));
        eventPage->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(eventPage);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(50, -1, 50, -1);
        BackButton = new QPushButton(eventPage);
        BackButton->setObjectName("BackButton");
        BackButton->setMinimumSize(QSize(0, 52));
        BackButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(BackButton);

        EcoTaxi = new QLabel(eventPage);
        EcoTaxi->setObjectName("EcoTaxi");

        horizontalLayout->addWidget(EcoTaxi, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        ReportButton = new QPushButton(eventPage);
        ReportButton->setObjectName("ReportButton");
        ReportButton->setMinimumSize(QSize(0, 52));
        ReportButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(ReportButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(105);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(50, -1, 50, -1);
        EditButton = new QPushButton(eventPage);
        EditButton->setObjectName("EditButton");
        EditButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(EditButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        PrevButton = new QPushButton(eventPage);
        PrevButton->setObjectName("PrevButton");
        PrevButton->setMinimumSize(QSize(0, 52));
        PrevButton->setMaximumSize(QSize(52, 16777215));

        horizontalLayout_3->addWidget(PrevButton);

        DateButton = new QPushButton(eventPage);
        DateButton->setObjectName("DateButton");
        DateButton->setMinimumSize(QSize(220, 0));

        horizontalLayout_3->addWidget(DateButton);

        NextButton = new QPushButton(eventPage);
        NextButton->setObjectName("NextButton");
        NextButton->setMinimumSize(QSize(0, 52));
        NextButton->setMaximumSize(QSize(52, 16777215));

        horizontalLayout_3->addWidget(NextButton);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        DeleteButton = new QPushButton(eventPage);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(DeleteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(45, -1, 45, -1);
        tableView = new QTableView(eventPage);
        tableView->setObjectName("tableView");
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->setWordWrap(false);
        tableView->verticalHeader()->setVisible(true);

        verticalLayout_2->addWidget(tableView);

        bottomTable = new QTableView(eventPage);
        bottomTable->setObjectName("bottomTable");

        verticalLayout_2->addWidget(bottomTable);

        verticalLayout_2->setStretch(0, 11);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(eventPage);

        QMetaObject::connectSlotsByName(eventPage);
    } // setupUi

    void retranslateUi(QWidget *eventPage)
    {
        eventPage->setWindowTitle(QCoreApplication::translate("eventPage", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 | ECO TAXI", nullptr));
        BackButton->setText(QCoreApplication::translate("eventPage", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        EcoTaxi->setText(QCoreApplication::translate("eventPage", "meow", nullptr));
        ReportButton->setText(QCoreApplication::translate("eventPage", "\320\236\320\242\320\247\320\225\320\242", nullptr));
        EditButton->setText(QCoreApplication::translate("eventPage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        PrevButton->setText(QCoreApplication::translate("eventPage", "<", nullptr));
        DateButton->setText(QCoreApplication::translate("eventPage", "01.01.0001", nullptr));
        NextButton->setText(QCoreApplication::translate("eventPage", ">", nullptr));
        DeleteButton->setText(QCoreApplication::translate("eventPage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eventPage: public Ui_eventPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTPAGE_H
