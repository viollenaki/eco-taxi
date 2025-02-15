/********************************************************************************
** Form generated from reading UI file 'customdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOG_H
#define UI_CUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *Header;
    QHBoxLayout *horizontalLayout;
    QPushButton *YesButton;
    QPushButton *NoButton;

    void setupUi(QWidget *CustomDialog)
    {
        if (CustomDialog->objectName().isEmpty())
            CustomDialog->setObjectName("CustomDialog");
        CustomDialog->resize(500, 300);
        CustomDialog->setMinimumSize(QSize(500, 150));
        CustomDialog->setMaximumSize(QSize(500, 16777215));
        verticalLayout = new QVBoxLayout(CustomDialog);
        verticalLayout->setObjectName("verticalLayout");
        Header = new QLabel(CustomDialog);
        Header->setObjectName("Header");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Header->sizePolicy().hasHeightForWidth());
        Header->setSizePolicy(sizePolicy);
        Header->setMaximumSize(QSize(500, 16777215));
        Header->setScaledContents(true);
        Header->setAlignment(Qt::AlignCenter);
        Header->setWordWrap(true);

        verticalLayout->addWidget(Header);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        YesButton = new QPushButton(CustomDialog);
        YesButton->setObjectName("YesButton");
        YesButton->setMinimumSize(QSize(0, 52));

        horizontalLayout->addWidget(YesButton);

        NoButton = new QPushButton(CustomDialog);
        NoButton->setObjectName("NoButton");
        NoButton->setMinimumSize(QSize(0, 52));

        horizontalLayout->addWidget(NoButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);

        retranslateUi(CustomDialog);

        QMetaObject::connectSlotsByName(CustomDialog);
    } // setupUi

    void retranslateUi(QWidget *CustomDialog)
    {
        CustomDialog->setWindowTitle(QCoreApplication::translate("CustomDialog", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 | ECO TAXI", nullptr));
        Header->setText(QCoreApplication::translate("CustomDialog", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa aaaaa aaaaaaa aaaaaaaa aaaaaaaaa aaaaaaaaaa a       aaaaaaaaaaaaa aaaaaaa aaaaaaa aaaaaaaaa aaaaaaaaaaaaa", nullptr));
        YesButton->setText(QCoreApplication::translate("CustomDialog", "\320\224\320\260", nullptr));
        NoButton->setText(QCoreApplication::translate("CustomDialog", "\320\235\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomDialog: public Ui_CustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOG_H
