/********************************************************************************
** Form generated from reading UI file 'generalreport.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALREPORT_H
#define UI_GENERALREPORT_H

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

class Ui_GeneralReport
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *EcoTaxi;
    QLabel *Header;
    QPushButton *SettingsButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *FromDateButton;
    QLabel *label_2;
    QPushButton *ToDateButton;
    QPushButton *FilterButton;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QTableView *bottomTable;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ReportButton;
    QPushButton *SecondReportButton;
    QPushButton *ToPDFButton;

    void setupUi(QWidget *GeneralReport)
    {
        if (GeneralReport->objectName().isEmpty())
            GeneralReport->setObjectName("GeneralReport");
        GeneralReport->resize(1410, 720);
        GeneralReport->setMinimumSize(QSize(0, 0));
        GeneralReport->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(GeneralReport);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 5, 0, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(45, -1, 45, -1);
        BackButton = new QPushButton(GeneralReport);
        BackButton->setObjectName("BackButton");
        BackButton->setMinimumSize(QSize(0, 52));
        BackButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(BackButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        EcoTaxi = new QLabel(GeneralReport);
        EcoTaxi->setObjectName("EcoTaxi");

        verticalLayout_2->addWidget(EcoTaxi, 0, Qt::AlignHCenter);

        Header = new QLabel(GeneralReport);
        Header->setObjectName("Header");

        verticalLayout_2->addWidget(Header, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

        SettingsButton = new QPushButton(GeneralReport);
        SettingsButton->setObjectName("SettingsButton");
        SettingsButton->setMinimumSize(QSize(0, 52));
        SettingsButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(SettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, -1, 410, -1);
        label = new QLabel(GeneralReport);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label, 0, Qt::AlignRight);

        FromDateButton = new QPushButton(GeneralReport);
        FromDateButton->setObjectName("FromDateButton");
        FromDateButton->setMinimumSize(QSize(220, 0));

        horizontalLayout_2->addWidget(FromDateButton, 0, Qt::AlignRight);

        label_2 = new QLabel(GeneralReport);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignRight);

        ToDateButton = new QPushButton(GeneralReport);
        ToDateButton->setObjectName("ToDateButton");
        ToDateButton->setMinimumSize(QSize(220, 0));

        horizontalLayout_2->addWidget(ToDateButton, 0, Qt::AlignHCenter);

        FilterButton = new QPushButton(GeneralReport);
        FilterButton->setObjectName("FilterButton");
        FilterButton->setMinimumSize(QSize(250, 52));

        horizontalLayout_2->addWidget(FilterButton, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(45, -1, 45, -1);
        tableView = new QTableView(GeneralReport);
        tableView->setObjectName("tableView");
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->setWordWrap(false);
        tableView->verticalHeader()->setVisible(true);

        verticalLayout_3->addWidget(tableView);

        bottomTable = new QTableView(GeneralReport);
        bottomTable->setObjectName("bottomTable");
        bottomTable->setMinimumSize(QSize(0, 75));
        bottomTable->setMaximumSize(QSize(16777215, 75));
        bottomTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bottomTable->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(bottomTable);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(40);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(45, -1, 45, -1);
        ReportButton = new QPushButton(GeneralReport);
        ReportButton->setObjectName("ReportButton");
        ReportButton->setMinimumSize(QSize(350, 52));

        horizontalLayout_4->addWidget(ReportButton);

        SecondReportButton = new QPushButton(GeneralReport);
        SecondReportButton->setObjectName("SecondReportButton");
        SecondReportButton->setMinimumSize(QSize(200, 52));
        SecondReportButton->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_4->addWidget(SecondReportButton);

        ToPDFButton = new QPushButton(GeneralReport);
        ToPDFButton->setObjectName("ToPDFButton");
        ToPDFButton->setMinimumSize(QSize(200, 52));

        horizontalLayout_4->addWidget(ToPDFButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(GeneralReport);

        QMetaObject::connectSlotsByName(GeneralReport);
    } // setupUi

    void retranslateUi(QWidget *GeneralReport)
    {
        GeneralReport->setWindowTitle(QCoreApplication::translate("GeneralReport", "Form", nullptr));
        BackButton->setText(QCoreApplication::translate("GeneralReport", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        EcoTaxi->setText(QCoreApplication::translate("GeneralReport", "\320\236\320\242\320\247\320\201\320\242", nullptr));
        Header->setText(QCoreApplication::translate("GeneralReport", "TextLabel", nullptr));
        SettingsButton->setText(QCoreApplication::translate("GeneralReport", "\320\235\320\220\320\241\320\242\320\240\320\236\320\231\320\232\320\230", nullptr));
        label->setText(QCoreApplication::translate("GeneralReport", "\320\276\321\202 ", nullptr));
        FromDateButton->setText(QCoreApplication::translate("GeneralReport", "01.01.0001", nullptr));
        label_2->setText(QCoreApplication::translate("GeneralReport", "\320\264\320\276 ", nullptr));
        ToDateButton->setText(QCoreApplication::translate("GeneralReport", "02.02.0002", nullptr));
        FilterButton->setText(QCoreApplication::translate("GeneralReport", "\320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        ReportButton->setText(QCoreApplication::translate("GeneralReport", "\320\236\320\242\320\247\320\225\320\242 \320\237\320\236 ...", nullptr));
        SecondReportButton->setText(QCoreApplication::translate("GeneralReport", "\320\236\320\242\320\247\320\225\320\242 \320\237\320\236 \320\232\320\236\320\233\320\230\320\247\320\225\320\241\320\242\320\222\320\243", nullptr));
        ToPDFButton->setText(QCoreApplication::translate("GeneralReport", "\320\255\320\232\320\241\320\237\320\236\320\240\320\242  \320\222 PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GeneralReport: public Ui_GeneralReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALREPORT_H
