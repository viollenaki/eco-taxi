/********************************************************************************
** Form generated from reading UI file 'addupdatewindowevents.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUPDATEWINDOWEVENTS_H
#define UI_ADDUPDATEWINDOWEVENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addupdatewindowEvents
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *Header;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *DateTimeFrame;
    QLabel *DateTimeLabel;
    QDateTimeEdit *DateTimeEdit;
    QFrame *TypeFrame;
    QHBoxLayout *NameLayout;
    QLabel *TypeLabel;
    QComboBox *TypeBox;
    QFrame *DriverIdFrame;
    QHBoxLayout *TitleLayout;
    QLabel *DriverIdLabel;
    QComboBox *DriverIdBox;
    QFrame *CarIdFrame;
    QHBoxLayout *IdLayout;
    QLabel *CarIdLabel;
    QComboBox *CarIdBox;
    QFrame *AmountFrame;
    QHBoxLayout *BrandLayout;
    QLabel *AmountLabel;
    QLineEdit *AmountEdit;
    QFrame *LocationFrame;
    QHBoxLayout *ModelLayout;
    QLabel *LocationLabel;
    QComboBox *LocationBox;
    QFrame *KWTFrame;
    QHBoxLayout *LicenseLayout;
    QLabel *KWTLabel;
    QLineEdit *KWTEdit;
    QFrame *DurationFrame;
    QHBoxLayout *YearLayout;
    QLabel *DurationLabel;
    QLineEdit *DurationEdit;
    QLabel *DescLabel;
    QTextEdit *DescEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *addupdatewindowEvents)
    {
        if (addupdatewindowEvents->objectName().isEmpty())
            addupdatewindowEvents->setObjectName("addupdatewindowEvents");
        addupdatewindowEvents->resize(550, 708);
        addupdatewindowEvents->setMinimumSize(QSize(550, 0));
        verticalLayout_2 = new QVBoxLayout(addupdatewindowEvents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Header = new QLabel(addupdatewindowEvents);
        Header->setObjectName("Header");

        verticalLayout_2->addWidget(Header, 0, Qt::AlignHCenter);

        frame = new QFrame(addupdatewindowEvents);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(450, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, 30, 30, 30);
        DateTimeFrame = new QHBoxLayout();
        DateTimeFrame->setObjectName("DateTimeFrame");
        DateTimeLabel = new QLabel(frame);
        DateTimeLabel->setObjectName("DateTimeLabel");

        DateTimeFrame->addWidget(DateTimeLabel);

        DateTimeEdit = new QDateTimeEdit(frame);
        DateTimeEdit->setObjectName("DateTimeEdit");

        DateTimeFrame->addWidget(DateTimeEdit);

        DateTimeFrame->setStretch(0, 1);
        DateTimeFrame->setStretch(1, 2);

        verticalLayout->addLayout(DateTimeFrame);

        TypeFrame = new QFrame(frame);
        TypeFrame->setObjectName("TypeFrame");
        TypeFrame->setMinimumSize(QSize(0, 40));
        TypeFrame->setMaximumSize(QSize(16777215, 40));
        NameLayout = new QHBoxLayout(TypeFrame);
        NameLayout->setSpacing(7);
        NameLayout->setObjectName("NameLayout");
        NameLayout->setContentsMargins(0, 0, 0, 0);
        TypeLabel = new QLabel(TypeFrame);
        TypeLabel->setObjectName("TypeLabel");
        TypeLabel->setMinimumSize(QSize(0, 28));

        NameLayout->addWidget(TypeLabel);

        TypeBox = new QComboBox(TypeFrame);
        TypeBox->setObjectName("TypeBox");

        NameLayout->addWidget(TypeBox);

        NameLayout->setStretch(0, 1);
        NameLayout->setStretch(1, 2);

        verticalLayout->addWidget(TypeFrame);

        DriverIdFrame = new QFrame(frame);
        DriverIdFrame->setObjectName("DriverIdFrame");
        DriverIdFrame->setMinimumSize(QSize(0, 40));
        DriverIdFrame->setMaximumSize(QSize(16777215, 40));
        TitleLayout = new QHBoxLayout(DriverIdFrame);
        TitleLayout->setObjectName("TitleLayout");
        TitleLayout->setContentsMargins(0, 0, 0, 0);
        DriverIdLabel = new QLabel(DriverIdFrame);
        DriverIdLabel->setObjectName("DriverIdLabel");
        DriverIdLabel->setMinimumSize(QSize(0, 28));

        TitleLayout->addWidget(DriverIdLabel);

        DriverIdBox = new QComboBox(DriverIdFrame);
        DriverIdBox->setObjectName("DriverIdBox");

        TitleLayout->addWidget(DriverIdBox);

        TitleLayout->setStretch(0, 1);
        TitleLayout->setStretch(1, 2);

        verticalLayout->addWidget(DriverIdFrame);

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

        verticalLayout->addWidget(CarIdFrame);

        AmountFrame = new QFrame(frame);
        AmountFrame->setObjectName("AmountFrame");
        AmountFrame->setMinimumSize(QSize(0, 40));
        AmountFrame->setMaximumSize(QSize(16777215, 40));
        BrandLayout = new QHBoxLayout(AmountFrame);
        BrandLayout->setObjectName("BrandLayout");
        BrandLayout->setContentsMargins(0, 0, 0, 0);
        AmountLabel = new QLabel(AmountFrame);
        AmountLabel->setObjectName("AmountLabel");
        AmountLabel->setMinimumSize(QSize(0, 28));

        BrandLayout->addWidget(AmountLabel, 0, Qt::AlignVCenter);

        AmountEdit = new QLineEdit(AmountFrame);
        AmountEdit->setObjectName("AmountEdit");

        BrandLayout->addWidget(AmountEdit);

        BrandLayout->setStretch(0, 1);
        BrandLayout->setStretch(1, 2);

        verticalLayout->addWidget(AmountFrame);

        LocationFrame = new QFrame(frame);
        LocationFrame->setObjectName("LocationFrame");
        LocationFrame->setMinimumSize(QSize(0, 40));
        LocationFrame->setMaximumSize(QSize(16777215, 40));
        ModelLayout = new QHBoxLayout(LocationFrame);
        ModelLayout->setObjectName("ModelLayout");
        ModelLayout->setContentsMargins(0, 0, 0, 0);
        LocationLabel = new QLabel(LocationFrame);
        LocationLabel->setObjectName("LocationLabel");
        LocationLabel->setMinimumSize(QSize(0, 28));

        ModelLayout->addWidget(LocationLabel);

        LocationBox = new QComboBox(LocationFrame);
        LocationBox->setObjectName("LocationBox");

        ModelLayout->addWidget(LocationBox);

        ModelLayout->setStretch(0, 1);
        ModelLayout->setStretch(1, 2);

        verticalLayout->addWidget(LocationFrame);

        KWTFrame = new QFrame(frame);
        KWTFrame->setObjectName("KWTFrame");
        KWTFrame->setMinimumSize(QSize(0, 40));
        KWTFrame->setMaximumSize(QSize(16777215, 40));
        LicenseLayout = new QHBoxLayout(KWTFrame);
        LicenseLayout->setObjectName("LicenseLayout");
        LicenseLayout->setContentsMargins(0, 0, 0, 0);
        KWTLabel = new QLabel(KWTFrame);
        KWTLabel->setObjectName("KWTLabel");
        KWTLabel->setMinimumSize(QSize(0, 28));

        LicenseLayout->addWidget(KWTLabel, 0, Qt::AlignVCenter);

        KWTEdit = new QLineEdit(KWTFrame);
        KWTEdit->setObjectName("KWTEdit");

        LicenseLayout->addWidget(KWTEdit, 0, Qt::AlignVCenter);

        LicenseLayout->setStretch(0, 1);
        LicenseLayout->setStretch(1, 2);

        verticalLayout->addWidget(KWTFrame);

        DurationFrame = new QFrame(frame);
        DurationFrame->setObjectName("DurationFrame");
        DurationFrame->setMinimumSize(QSize(0, 40));
        DurationFrame->setMaximumSize(QSize(16777215, 40));
        YearLayout = new QHBoxLayout(DurationFrame);
        YearLayout->setObjectName("YearLayout");
        YearLayout->setContentsMargins(0, 0, 0, 0);
        DurationLabel = new QLabel(DurationFrame);
        DurationLabel->setObjectName("DurationLabel");
        DurationLabel->setMinimumSize(QSize(0, 28));

        YearLayout->addWidget(DurationLabel);

        DurationEdit = new QLineEdit(DurationFrame);
        DurationEdit->setObjectName("DurationEdit");

        YearLayout->addWidget(DurationEdit, 0, Qt::AlignVCenter);

        YearLayout->setStretch(0, 1);
        YearLayout->setStretch(1, 2);

        verticalLayout->addWidget(DurationFrame);

        DescLabel = new QLabel(frame);
        DescLabel->setObjectName("DescLabel");
        DescLabel->setMinimumSize(QSize(0, 30));
        DescLabel->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(DescLabel);

        DescEdit = new QTextEdit(frame);
        DescEdit->setObjectName("DescEdit");
        DescEdit->setMinimumSize(QSize(0, 100));
        DescEdit->setMaximumSize(QSize(16777215, 150));

        verticalLayout->addWidget(DescEdit);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(250, 52));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton->setFlat(true);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(frame);


        retranslateUi(addupdatewindowEvents);

        QMetaObject::connectSlotsByName(addupdatewindowEvents);
    } // setupUi

    void retranslateUi(QWidget *addupdatewindowEvents)
    {
        addupdatewindowEvents->setWindowTitle(QCoreApplication::translate("addupdatewindowEvents", "ECO TAXI", nullptr));
        Header->setText(QCoreApplication::translate("addupdatewindowEvents", "bark", nullptr));
        DateTimeLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\224\320\260\321\202\320\260", nullptr));
        TypeLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\242\320\270\320\277:", nullptr));
        DriverIdLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "ID \320\222\320\276\320\264\320\270\321\202\320\265\320\273\321\217:", nullptr));
        CarIdLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "ID \320\234\320\260\321\210\320\270\320\275\321\213:", nullptr));
        AmountLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
        LocationLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\233\320\276\320\272\320\260\321\206\320\270\321\217:", nullptr));
        KWTLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\232\320\222\320\242:", nullptr));
        DurationLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        DescLabel->setText(QCoreApplication::translate("addupdatewindowEvents", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        pushButton->setText(QCoreApplication::translate("addupdatewindowEvents", "bark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addupdatewindowEvents: public Ui_addupdatewindowEvents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUPDATEWINDOWEVENTS_H
