/********************************************************************************
** Form generated from reading UI file 'reportpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPAGE_H
#define UI_REPORTPAGE_H

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

class Ui_ReportPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *BackButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *EcoTaxi;
    QLabel *Header;
    QPushButton *SettingsButton;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QTableView *sideTable;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QPushButton *FromDateButton;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QPushButton *ToDateButton;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QTableView *bottomTable;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *FilterButton;
    QPushButton *ReportButton;
    QPushButton *ItemButton;
    QPushButton *ToPDFButton;

    void setupUi(QWidget *ReportPage)
    {
        if (ReportPage->objectName().isEmpty())
            ReportPage->setObjectName("ReportPage");
        ReportPage->resize(1280, 720);
        ReportPage->setMinimumSize(QSize(0, 0));
        ReportPage->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(ReportPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 5, 0, 5);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(45, -1, 45, -1);
        BackButton = new QPushButton(ReportPage);
        BackButton->setObjectName("BackButton");
        BackButton->setMinimumSize(QSize(0, 52));
        BackButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout_8->addWidget(BackButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        EcoTaxi = new QLabel(ReportPage);
        EcoTaxi->setObjectName("EcoTaxi");

        verticalLayout_2->addWidget(EcoTaxi, 0, Qt::AlignHCenter);

        Header = new QLabel(ReportPage);
        Header->setObjectName("Header");

        verticalLayout_2->addWidget(Header, 0, Qt::AlignHCenter);


        horizontalLayout_8->addLayout(verticalLayout_2);

        SettingsButton = new QPushButton(ReportPage);
        SettingsButton->setObjectName("SettingsButton");
        SettingsButton->setMinimumSize(QSize(0, 52));
        SettingsButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout_8->addWidget(SettingsButton);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(45, -1, 45, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName("verticalLayout_4");
        sideTable = new QTableView(ReportPage);
        sideTable->setObjectName("sideTable");
        sideTable->setMaximumSize(QSize(300, 16777215));
        sideTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        sideTable->setSelectionMode(QAbstractItemView::SingleSelection);
        sideTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        sideTable->verticalHeader()->setVisible(true);

        verticalLayout_4->addWidget(sideTable);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, -1, 0, -1);
        label_2 = new QLabel(ReportPage);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2, 0, Qt::AlignRight);

        FromDateButton = new QPushButton(ReportPage);
        FromDateButton->setObjectName("FromDateButton");
        FromDateButton->setMinimumSize(QSize(220, 0));

        horizontalLayout_5->addWidget(FromDateButton, 0, Qt::AlignRight);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label = new QLabel(ReportPage);
        label->setObjectName("label");

        horizontalLayout_9->addWidget(label, 0, Qt::AlignRight);

        ToDateButton = new QPushButton(ReportPage);
        ToDateButton->setObjectName("ToDateButton");
        ToDateButton->setMinimumSize(QSize(220, 0));

        horizontalLayout_9->addWidget(ToDateButton);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_7->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tableView = new QTableView(ReportPage);
        tableView->setObjectName("tableView");
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(true);

        verticalLayout_3->addWidget(tableView);

        bottomTable = new QTableView(ReportPage);
        bottomTable->setObjectName("bottomTable");
        bottomTable->setMinimumSize(QSize(0, 75));
        bottomTable->setMaximumSize(QSize(16777215, 75));
        bottomTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bottomTable->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(bottomTable);


        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalLayout_7->setStretch(0, 9);
        horizontalLayout_7->setStretch(1, 29);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(104, -1, 45, -1);
        FilterButton = new QPushButton(ReportPage);
        FilterButton->setObjectName("FilterButton");
        FilterButton->setMinimumSize(QSize(220, 52));
        FilterButton->setMaximumSize(QSize(220, 16777215));

        horizontalLayout_6->addWidget(FilterButton);

        ReportButton = new QPushButton(ReportPage);
        ReportButton->setObjectName("ReportButton");
        ReportButton->setMinimumSize(QSize(350, 52));

        horizontalLayout_6->addWidget(ReportButton, 0, Qt::AlignLeft);

        ItemButton = new QPushButton(ReportPage);
        ItemButton->setObjectName("ItemButton");
        ItemButton->setMinimumSize(QSize(0, 52));

        horizontalLayout_6->addWidget(ItemButton);

        ToPDFButton = new QPushButton(ReportPage);
        ToPDFButton->setObjectName("ToPDFButton");
        ToPDFButton->setMinimumSize(QSize(250, 52));

        horizontalLayout_6->addWidget(ToPDFButton, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ReportPage);

        QMetaObject::connectSlotsByName(ReportPage);
    } // setupUi

    void retranslateUi(QWidget *ReportPage)
    {
        ReportPage->setWindowTitle(QCoreApplication::translate("ReportPage", "Form", nullptr));
        BackButton->setText(QCoreApplication::translate("ReportPage", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        EcoTaxi->setText(QCoreApplication::translate("ReportPage", "\320\236\320\242\320\247\320\201\320\242", nullptr));
        Header->setText(QCoreApplication::translate("ReportPage", "TextLabel", nullptr));
        SettingsButton->setText(QCoreApplication::translate("ReportPage", "\320\235\320\220\320\241\320\242\320\240\320\236\320\231\320\232\320\230", nullptr));
        label_2->setText(QCoreApplication::translate("ReportPage", "\320\276\321\202 ", nullptr));
        FromDateButton->setText(QCoreApplication::translate("ReportPage", "01.01.0001", nullptr));
        label->setText(QCoreApplication::translate("ReportPage", "     \320\264\320\276", nullptr));
        ToDateButton->setText(QCoreApplication::translate("ReportPage", "01.02.0001", nullptr));
        FilterButton->setText(QCoreApplication::translate("ReportPage", "\320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        ReportButton->setText(QCoreApplication::translate("ReportPage", "\320\236\320\242\320\247\320\225\320\242 \320\237\320\236 ...", nullptr));
        ItemButton->setText(QCoreApplication::translate("ReportPage", "\320\237\320\236 \320\234\320\220\320\250\320\230\320\235\320\225", nullptr));
        ToPDFButton->setText(QCoreApplication::translate("ReportPage", "\320\255\320\232\320\241\320\237\320\236\320\240\320\242  \320\222 PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportPage: public Ui_ReportPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPAGE_H
