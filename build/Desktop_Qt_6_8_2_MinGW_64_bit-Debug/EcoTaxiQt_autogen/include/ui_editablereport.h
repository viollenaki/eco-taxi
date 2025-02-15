/********************************************************************************
** Form generated from reading UI file 'editablereport.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITABLEREPORT_H
#define UI_EDITABLEREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditableReport
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *EcoTaxi;
    QPushButton *SettingsButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EditButton;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox;
    QPushButton *ToPDFButton;

    void setupUi(QWidget *EditableReport)
    {
        if (EditableReport->objectName().isEmpty())
            EditableReport->setObjectName("EditableReport");
        EditableReport->resize(1410, 720);
        verticalLayout = new QVBoxLayout(EditableReport);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(45, -1, 45, -1);
        BackButton = new QPushButton(EditableReport);
        BackButton->setObjectName("BackButton");
        BackButton->setMinimumSize(QSize(0, 52));
        BackButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(BackButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        EcoTaxi = new QLabel(EditableReport);
        EcoTaxi->setObjectName("EcoTaxi");

        verticalLayout_2->addWidget(EcoTaxi, 0, Qt::AlignmentFlag::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_2);

        SettingsButton = new QPushButton(EditableReport);
        SettingsButton->setObjectName("SettingsButton");
        SettingsButton->setMinimumSize(QSize(0, 52));
        SettingsButton->setMaximumSize(QSize(280, 16777215));

        horizontalLayout->addWidget(SettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(100, -1, 100, -1);
        EditButton = new QPushButton(EditableReport);
        EditButton->setObjectName("EditButton");
        EditButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(EditButton, 0, Qt::AlignmentFlag::AlignRight);

        AddButton = new QPushButton(EditableReport);
        AddButton->setObjectName("AddButton");
        AddButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(AddButton, 0, Qt::AlignmentFlag::AlignHCenter);

        DeleteButton = new QPushButton(EditableReport);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_2->addWidget(DeleteButton, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(45, -1, 45, -1);
        tableView = new QTableView(EditableReport);
        tableView->setObjectName("tableView");
        tableView->setMaximumSize(QSize(16777215, 16777215));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        tableView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->setWordWrap(false);
        tableView->verticalHeader()->setVisible(true);

        verticalLayout_3->addWidget(tableView);

        verticalLayout_3->setStretch(0, 11);

        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(45, -1, 45, -1);
        checkBox = new QCheckBox(EditableReport);
        checkBox->setObjectName("checkBox");

        horizontalLayout_4->addWidget(checkBox);

        ToPDFButton = new QPushButton(EditableReport);
        ToPDFButton->setObjectName("ToPDFButton");
        ToPDFButton->setMinimumSize(QSize(280, 52));

        horizontalLayout_4->addWidget(ToPDFButton);

        horizontalLayout_4->setStretch(0, 2);

        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(EditableReport);

        QMetaObject::connectSlotsByName(EditableReport);
    } // setupUi

    void retranslateUi(QWidget *EditableReport)
    {
        EditableReport->setWindowTitle(QCoreApplication::translate("EditableReport", "Form", nullptr));
        BackButton->setText(QCoreApplication::translate("EditableReport", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        EcoTaxi->setText(QCoreApplication::translate("EditableReport", "\320\236\320\242\320\247\320\201\320\242", nullptr));
        SettingsButton->setText(QCoreApplication::translate("EditableReport", "\320\235\320\220\320\241\320\242\320\240\320\236\320\231\320\232\320\230", nullptr));
        EditButton->setText(QCoreApplication::translate("EditableReport", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        AddButton->setText(QCoreApplication::translate("EditableReport", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        DeleteButton->setText(QCoreApplication::translate("EditableReport", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        checkBox->setText(QCoreApplication::translate("EditableReport", "\320\242\320\236\320\233\320\254\320\232\320\236 \320\235\320\225\320\240\320\220\320\221\320\236\320\242\320\220\320\256\320\251\320\230\320\225", nullptr));
        ToPDFButton->setText(QCoreApplication::translate("EditableReport", "\320\255\320\232\320\241\320\237\320\236\320\240\320\242  \320\222 PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditableReport: public Ui_EditableReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITABLEREPORT_H
