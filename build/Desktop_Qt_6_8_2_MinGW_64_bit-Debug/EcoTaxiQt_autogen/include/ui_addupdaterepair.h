/********************************************************************************
** Form generated from reading UI file 'addupdaterepair.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUPDATEREPAIR_H
#define UI_ADDUPDATEREPAIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUpdateRepair
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *CarIdFrame;
    QHBoxLayout *IdLayout;
    QLabel *CarIdLabel;
    QComboBox *CarIdBox;
    QFrame *DriverFrame;
    QHBoxLayout *IdLayout_2;
    QLabel *DriversLabel;
    QComboBox *DriversBox;
    QFrame *FromDateFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *FromDateLabel;
    QPushButton *fromButton;
    QFrame *ToDateFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ToDateLabel;
    QPushButton *toButton;
    QFrame *AmountFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *AmountLabel;
    QLineEdit *AmountEdit;
    QFrame *isPaidFrame;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *isPaidCheckBox;
    QLabel *DescLabel;
    QTextEdit *DescEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *AddUpdateRepair)
    {
        if (AddUpdateRepair->objectName().isEmpty())
            AddUpdateRepair->setObjectName("AddUpdateRepair");
        AddUpdateRepair->resize(400, 446);
        AddUpdateRepair->setMinimumSize(QSize(400, 360));
        verticalLayout = new QVBoxLayout(AddUpdateRepair);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(AddUpdateRepair);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        CarIdFrame = new QFrame(frame);
        CarIdFrame->setObjectName("CarIdFrame");
        CarIdFrame->setMinimumSize(QSize(0, 40));
        CarIdFrame->setMaximumSize(QSize(16777215, 40));
        IdLayout = new QHBoxLayout(CarIdFrame);
        IdLayout->setObjectName("IdLayout");
        IdLayout->setContentsMargins(0, 0, 0, 0);
        CarIdLabel = new QLabel(CarIdFrame);
        CarIdLabel->setObjectName("CarIdLabel");
        CarIdLabel->setMinimumSize(QSize(0, 28));

        IdLayout->addWidget(CarIdLabel);

        CarIdBox = new QComboBox(CarIdFrame);
        CarIdBox->setObjectName("CarIdBox");

        IdLayout->addWidget(CarIdBox);

        IdLayout->setStretch(0, 1);
        IdLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(CarIdFrame);

        DriverFrame = new QFrame(frame);
        DriverFrame->setObjectName("DriverFrame");
        DriverFrame->setMinimumSize(QSize(0, 40));
        DriverFrame->setMaximumSize(QSize(16777215, 40));
        IdLayout_2 = new QHBoxLayout(DriverFrame);
        IdLayout_2->setObjectName("IdLayout_2");
        IdLayout_2->setContentsMargins(0, 0, 0, 0);
        DriversLabel = new QLabel(DriverFrame);
        DriversLabel->setObjectName("DriversLabel");
        DriversLabel->setMinimumSize(QSize(0, 28));

        IdLayout_2->addWidget(DriversLabel);

        DriversBox = new QComboBox(DriverFrame);
        DriversBox->setObjectName("DriversBox");

        IdLayout_2->addWidget(DriversBox);

        IdLayout_2->setStretch(0, 1);
        IdLayout_2->setStretch(1, 2);

        verticalLayout_2->addWidget(DriverFrame);

        FromDateFrame = new QFrame(frame);
        FromDateFrame->setObjectName("FromDateFrame");
        FromDateFrame->setFrameShape(QFrame::StyledPanel);
        FromDateFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(FromDateFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FromDateLabel = new QLabel(FromDateFrame);
        FromDateLabel->setObjectName("FromDateLabel");

        horizontalLayout->addWidget(FromDateLabel);

        fromButton = new QPushButton(FromDateFrame);
        fromButton->setObjectName("fromButton");

        horizontalLayout->addWidget(fromButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(FromDateFrame);

        ToDateFrame = new QFrame(frame);
        ToDateFrame->setObjectName("ToDateFrame");
        ToDateFrame->setFrameShape(QFrame::StyledPanel);
        ToDateFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(ToDateFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ToDateLabel = new QLabel(ToDateFrame);
        ToDateLabel->setObjectName("ToDateLabel");

        horizontalLayout_2->addWidget(ToDateLabel);

        toButton = new QPushButton(ToDateFrame);
        toButton->setObjectName("toButton");

        horizontalLayout_2->addWidget(toButton);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_2->addWidget(ToDateFrame);

        AmountFrame = new QFrame(frame);
        AmountFrame->setObjectName("AmountFrame");
        AmountFrame->setFrameShape(QFrame::StyledPanel);
        AmountFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(AmountFrame);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        AmountLabel = new QLabel(AmountFrame);
        AmountLabel->setObjectName("AmountLabel");

        horizontalLayout_4->addWidget(AmountLabel);

        AmountEdit = new QLineEdit(AmountFrame);
        AmountEdit->setObjectName("AmountEdit");

        horizontalLayout_4->addWidget(AmountEdit);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_2->addWidget(AmountFrame);

        isPaidFrame = new QFrame(frame);
        isPaidFrame->setObjectName("isPaidFrame");
        isPaidFrame->setFrameShape(QFrame::StyledPanel);
        isPaidFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(isPaidFrame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        isPaidCheckBox = new QCheckBox(isPaidFrame);
        isPaidCheckBox->setObjectName("isPaidCheckBox");

        horizontalLayout_3->addWidget(isPaidCheckBox);


        verticalLayout_2->addWidget(isPaidFrame);

        DescLabel = new QLabel(frame);
        DescLabel->setObjectName("DescLabel");
        DescLabel->setMinimumSize(QSize(0, 30));
        DescLabel->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(DescLabel);

        DescEdit = new QTextEdit(frame);
        DescEdit->setObjectName("DescEdit");
        DescEdit->setMinimumSize(QSize(0, 100));
        DescEdit->setMaximumSize(QSize(16777215, 150));

        verticalLayout_2->addWidget(DescEdit);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(250, 52));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton->setFlat(true);

        verticalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(frame);


        retranslateUi(AddUpdateRepair);

        QMetaObject::connectSlotsByName(AddUpdateRepair);
    } // setupUi

    void retranslateUi(QWidget *AddUpdateRepair)
    {
        AddUpdateRepair->setWindowTitle(QCoreApplication::translate("AddUpdateRepair", "\320\244\320\276\321\200\320\274\320\260 | EcoTaxi", nullptr));
        CarIdLabel->setText(QCoreApplication::translate("AddUpdateRepair", "ID \320\234\320\260\321\210\320\270\320\275\321\213:", nullptr));
        DriversLabel->setText(QCoreApplication::translate("AddUpdateRepair", "\320\222\320\276\320\264\320\270\321\202\320\265\320\273\321\214:", nullptr));
        FromDateLabel->setText(QCoreApplication::translate("AddUpdateRepair", "\320\236\321\202:", nullptr));
        fromButton->setText(QCoreApplication::translate("AddUpdateRepair", "-", nullptr));
        ToDateLabel->setText(QCoreApplication::translate("AddUpdateRepair", "\320\224\320\276:", nullptr));
        toButton->setText(QCoreApplication::translate("AddUpdateRepair", "-", nullptr));
        AmountLabel->setText(QCoreApplication::translate("AddUpdateRepair", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
        isPaidCheckBox->setText(QCoreApplication::translate("AddUpdateRepair", "\320\236\320\277\320\273\320\260\321\207\320\265\320\275", nullptr));
        DescLabel->setText(QCoreApplication::translate("AddUpdateRepair", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        pushButton->setText(QCoreApplication::translate("AddUpdateRepair", "bark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUpdateRepair: public Ui_AddUpdateRepair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUPDATEREPAIR_H
