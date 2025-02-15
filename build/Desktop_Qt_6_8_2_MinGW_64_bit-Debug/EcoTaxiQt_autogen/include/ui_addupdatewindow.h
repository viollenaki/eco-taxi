/********************************************************************************
** Form generated from reading UI file 'addupdatewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUPDATEWINDOW_H
#define UI_ADDUPDATEWINDOW_H

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

class Ui_addUpdateWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *Header;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *NameFrame;
    QHBoxLayout *NameLayout;
    QLabel *NameLabel;
    QLineEdit *NameEdit;
    QFrame *TitleFrame;
    QHBoxLayout *TitleLayout;
    QLabel *TitleLabel;
    QLineEdit *TitleEdit;
    QFrame *IdFrame;
    QHBoxLayout *IdLayout;
    QLabel *IdLabel;
    QLineEdit *IdEdit;
    QFrame *BrandFrame;
    QHBoxLayout *BrandLayout;
    QLabel *BrandLabel;
    QLineEdit *BrandEdit;
    QFrame *ModelFrame;
    QHBoxLayout *ModelLayout;
    QLabel *ModelLabel;
    QLineEdit *ModelEdit;
    QFrame *LicenseFrame;
    QHBoxLayout *LicenseLayout;
    QLabel *LicenseLabel;
    QLineEdit *LicenseEdit;
    QFrame *YearFrame;
    QHBoxLayout *YearLayout;
    QLabel *YearLabel;
    QLineEdit *YearEdit;
    QFrame *InvestorFrame;
    QHBoxLayout *InvestorLayout;
    QLabel *InvestorLabel;
    QComboBox *investorBox;
    QFrame *MilleageFrame;
    QHBoxLayout *MilleageLayout;
    QLabel *MilleageLabel;
    QLineEdit *MilleageEdit;
    QFrame *PercentFrame;
    QHBoxLayout *MilleageLayout_2;
    QLabel *PercentLabel;
    QLineEdit *PercentEdit;
    QFrame *PasswordFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *PasswordLabel;
    QLineEdit *PasswordEdit;
    QFrame *isAdminFrame;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *isAdminCheckBox;
    QLabel *DescLabel;
    QTextEdit *DescEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *addUpdateWindow)
    {
        if (addUpdateWindow->objectName().isEmpty())
            addUpdateWindow->setObjectName("addUpdateWindow");
        addUpdateWindow->resize(574, 776);
        verticalLayout_2 = new QVBoxLayout(addUpdateWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Header = new QLabel(addUpdateWindow);
        Header->setObjectName("Header");

        verticalLayout_2->addWidget(Header, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        frame = new QFrame(addUpdateWindow);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(550, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        NameFrame = new QFrame(frame);
        NameFrame->setObjectName("NameFrame");
        NameFrame->setMinimumSize(QSize(0, 40));
        NameFrame->setMaximumSize(QSize(16777215, 40));
        NameLayout = new QHBoxLayout(NameFrame);
        NameLayout->setSpacing(7);
        NameLayout->setObjectName("NameLayout");
        NameLayout->setContentsMargins(0, 0, 0, 0);
        NameLabel = new QLabel(NameFrame);
        NameLabel->setObjectName("NameLabel");
        NameLabel->setMinimumSize(QSize(0, 28));

        NameLayout->addWidget(NameLabel, 0, Qt::AlignVCenter);

        NameEdit = new QLineEdit(NameFrame);
        NameEdit->setObjectName("NameEdit");
        NameEdit->setMinimumSize(QSize(0, 28));

        NameLayout->addWidget(NameEdit, 0, Qt::AlignVCenter);

        NameLayout->setStretch(0, 1);
        NameLayout->setStretch(1, 2);

        verticalLayout->addWidget(NameFrame);

        TitleFrame = new QFrame(frame);
        TitleFrame->setObjectName("TitleFrame");
        TitleFrame->setMinimumSize(QSize(0, 40));
        TitleFrame->setMaximumSize(QSize(16777215, 40));
        TitleLayout = new QHBoxLayout(TitleFrame);
        TitleLayout->setObjectName("TitleLayout");
        TitleLayout->setContentsMargins(0, 0, 0, 0);
        TitleLabel = new QLabel(TitleFrame);
        TitleLabel->setObjectName("TitleLabel");
        TitleLabel->setMinimumSize(QSize(0, 28));

        TitleLayout->addWidget(TitleLabel, 0, Qt::AlignVCenter);

        TitleEdit = new QLineEdit(TitleFrame);
        TitleEdit->setObjectName("TitleEdit");

        TitleLayout->addWidget(TitleEdit, 0, Qt::AlignVCenter);

        TitleLayout->setStretch(0, 1);
        TitleLayout->setStretch(1, 2);

        verticalLayout->addWidget(TitleFrame);

        IdFrame = new QFrame(frame);
        IdFrame->setObjectName("IdFrame");
        IdFrame->setMinimumSize(QSize(0, 40));
        IdFrame->setMaximumSize(QSize(16777215, 40));
        IdLayout = new QHBoxLayout(IdFrame);
        IdLayout->setObjectName("IdLayout");
        IdLayout->setContentsMargins(0, 0, 0, 0);
        IdLabel = new QLabel(IdFrame);
        IdLabel->setObjectName("IdLabel");
        IdLabel->setMinimumSize(QSize(0, 28));

        IdLayout->addWidget(IdLabel, 0, Qt::AlignVCenter);

        IdEdit = new QLineEdit(IdFrame);
        IdEdit->setObjectName("IdEdit");

        IdLayout->addWidget(IdEdit, 0, Qt::AlignVCenter);

        IdLayout->setStretch(0, 1);
        IdLayout->setStretch(1, 2);

        verticalLayout->addWidget(IdFrame);

        BrandFrame = new QFrame(frame);
        BrandFrame->setObjectName("BrandFrame");
        BrandFrame->setMinimumSize(QSize(0, 40));
        BrandFrame->setMaximumSize(QSize(16777215, 40));
        BrandLayout = new QHBoxLayout(BrandFrame);
        BrandLayout->setObjectName("BrandLayout");
        BrandLayout->setContentsMargins(0, 0, 0, 0);
        BrandLabel = new QLabel(BrandFrame);
        BrandLabel->setObjectName("BrandLabel");
        BrandLabel->setMinimumSize(QSize(0, 28));

        BrandLayout->addWidget(BrandLabel, 0, Qt::AlignVCenter);

        BrandEdit = new QLineEdit(BrandFrame);
        BrandEdit->setObjectName("BrandEdit");

        BrandLayout->addWidget(BrandEdit);

        BrandLayout->setStretch(0, 1);
        BrandLayout->setStretch(1, 2);

        verticalLayout->addWidget(BrandFrame);

        ModelFrame = new QFrame(frame);
        ModelFrame->setObjectName("ModelFrame");
        ModelFrame->setMinimumSize(QSize(0, 40));
        ModelFrame->setMaximumSize(QSize(16777215, 40));
        ModelLayout = new QHBoxLayout(ModelFrame);
        ModelLayout->setObjectName("ModelLayout");
        ModelLayout->setContentsMargins(0, 0, 0, 0);
        ModelLabel = new QLabel(ModelFrame);
        ModelLabel->setObjectName("ModelLabel");
        ModelLabel->setMinimumSize(QSize(0, 28));

        ModelLayout->addWidget(ModelLabel, 0, Qt::AlignVCenter);

        ModelEdit = new QLineEdit(ModelFrame);
        ModelEdit->setObjectName("ModelEdit");

        ModelLayout->addWidget(ModelEdit, 0, Qt::AlignVCenter);

        ModelLayout->setStretch(0, 1);
        ModelLayout->setStretch(1, 2);

        verticalLayout->addWidget(ModelFrame);

        LicenseFrame = new QFrame(frame);
        LicenseFrame->setObjectName("LicenseFrame");
        LicenseFrame->setMinimumSize(QSize(0, 40));
        LicenseFrame->setMaximumSize(QSize(16777215, 40));
        LicenseLayout = new QHBoxLayout(LicenseFrame);
        LicenseLayout->setObjectName("LicenseLayout");
        LicenseLayout->setContentsMargins(0, 0, 0, 0);
        LicenseLabel = new QLabel(LicenseFrame);
        LicenseLabel->setObjectName("LicenseLabel");
        LicenseLabel->setMinimumSize(QSize(0, 28));

        LicenseLayout->addWidget(LicenseLabel, 0, Qt::AlignVCenter);

        LicenseEdit = new QLineEdit(LicenseFrame);
        LicenseEdit->setObjectName("LicenseEdit");

        LicenseLayout->addWidget(LicenseEdit, 0, Qt::AlignVCenter);

        LicenseLayout->setStretch(0, 1);
        LicenseLayout->setStretch(1, 2);

        verticalLayout->addWidget(LicenseFrame);

        YearFrame = new QFrame(frame);
        YearFrame->setObjectName("YearFrame");
        YearFrame->setMinimumSize(QSize(0, 40));
        YearFrame->setMaximumSize(QSize(16777215, 40));
        YearLayout = new QHBoxLayout(YearFrame);
        YearLayout->setObjectName("YearLayout");
        YearLayout->setContentsMargins(0, 0, 0, 0);
        YearLabel = new QLabel(YearFrame);
        YearLabel->setObjectName("YearLabel");
        YearLabel->setMinimumSize(QSize(0, 28));

        YearLayout->addWidget(YearLabel);

        YearEdit = new QLineEdit(YearFrame);
        YearEdit->setObjectName("YearEdit");

        YearLayout->addWidget(YearEdit, 0, Qt::AlignVCenter);

        YearLayout->setStretch(0, 1);
        YearLayout->setStretch(1, 2);

        verticalLayout->addWidget(YearFrame);

        InvestorFrame = new QFrame(frame);
        InvestorFrame->setObjectName("InvestorFrame");
        InvestorFrame->setMinimumSize(QSize(0, 40));
        InvestorFrame->setMaximumSize(QSize(16777215, 40));
        InvestorLayout = new QHBoxLayout(InvestorFrame);
        InvestorLayout->setObjectName("InvestorLayout");
        InvestorLayout->setContentsMargins(0, 0, 0, 0);
        InvestorLabel = new QLabel(InvestorFrame);
        InvestorLabel->setObjectName("InvestorLabel");
        InvestorLabel->setMinimumSize(QSize(0, 28));

        InvestorLayout->addWidget(InvestorLabel);

        investorBox = new QComboBox(InvestorFrame);
        investorBox->setObjectName("investorBox");

        InvestorLayout->addWidget(investorBox);

        InvestorLayout->setStretch(0, 1);
        InvestorLayout->setStretch(1, 2);

        verticalLayout->addWidget(InvestorFrame);

        MilleageFrame = new QFrame(frame);
        MilleageFrame->setObjectName("MilleageFrame");
        MilleageFrame->setMinimumSize(QSize(0, 40));
        MilleageFrame->setMaximumSize(QSize(16777215, 40));
        MilleageLayout = new QHBoxLayout(MilleageFrame);
        MilleageLayout->setObjectName("MilleageLayout");
        MilleageLayout->setContentsMargins(0, 0, 0, 0);
        MilleageLabel = new QLabel(MilleageFrame);
        MilleageLabel->setObjectName("MilleageLabel");
        MilleageLabel->setMinimumSize(QSize(0, 28));

        MilleageLayout->addWidget(MilleageLabel, 0, Qt::AlignVCenter);

        MilleageEdit = new QLineEdit(MilleageFrame);
        MilleageEdit->setObjectName("MilleageEdit");

        MilleageLayout->addWidget(MilleageEdit, 0, Qt::AlignVCenter);

        MilleageLayout->setStretch(0, 1);
        MilleageLayout->setStretch(1, 2);

        verticalLayout->addWidget(MilleageFrame);

        PercentFrame = new QFrame(frame);
        PercentFrame->setObjectName("PercentFrame");
        PercentFrame->setMinimumSize(QSize(0, 40));
        PercentFrame->setMaximumSize(QSize(16777215, 40));
        MilleageLayout_2 = new QHBoxLayout(PercentFrame);
        MilleageLayout_2->setObjectName("MilleageLayout_2");
        MilleageLayout_2->setContentsMargins(0, 0, 0, 0);
        PercentLabel = new QLabel(PercentFrame);
        PercentLabel->setObjectName("PercentLabel");
        PercentLabel->setMinimumSize(QSize(0, 28));

        MilleageLayout_2->addWidget(PercentLabel);

        PercentEdit = new QLineEdit(PercentFrame);
        PercentEdit->setObjectName("PercentEdit");

        MilleageLayout_2->addWidget(PercentEdit);

        MilleageLayout_2->setStretch(0, 1);
        MilleageLayout_2->setStretch(1, 2);

        verticalLayout->addWidget(PercentFrame);

        PasswordFrame = new QFrame(frame);
        PasswordFrame->setObjectName("PasswordFrame");
        PasswordFrame->setFrameShape(QFrame::StyledPanel);
        PasswordFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(PasswordFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PasswordLabel = new QLabel(PasswordFrame);
        PasswordLabel->setObjectName("PasswordLabel");

        horizontalLayout->addWidget(PasswordLabel);

        PasswordEdit = new QLineEdit(PasswordFrame);
        PasswordEdit->setObjectName("PasswordEdit");

        horizontalLayout->addWidget(PasswordEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addWidget(PasswordFrame);

        isAdminFrame = new QFrame(frame);
        isAdminFrame->setObjectName("isAdminFrame");
        isAdminFrame->setFrameShape(QFrame::StyledPanel);
        isAdminFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(isAdminFrame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        isAdminCheckBox = new QCheckBox(isAdminFrame);
        isAdminCheckBox->setObjectName("isAdminCheckBox");

        horizontalLayout_2->addWidget(isAdminCheckBox);


        verticalLayout->addWidget(isAdminFrame);

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

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(frame);


        retranslateUi(addUpdateWindow);

        QMetaObject::connectSlotsByName(addUpdateWindow);
    } // setupUi

    void retranslateUi(QWidget *addUpdateWindow)
    {
        addUpdateWindow->setWindowTitle(QCoreApplication::translate("addUpdateWindow", "ECO TAXI", nullptr));
        Header->setText(QCoreApplication::translate("addUpdateWindow", "meow", nullptr));
        NameLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\230\320\274\321\217:", nullptr));
        TitleLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        IdLabel->setText(QCoreApplication::translate("addUpdateWindow", "ID:", nullptr));
        BrandLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\234\320\260\321\200\320\272\320\260:", nullptr));
        ModelLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\234\320\276\320\264\320\265\320\273\321\214:", nullptr));
        LicenseLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\223\320\276\321\201 \320\275\320\276\320\274\320\265\321\200:", nullptr));
        YearLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260:", nullptr));
        InvestorLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\230\320\275\320\262\320\265\321\201\321\202\320\276\321\200:", nullptr));
        MilleageLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\237\321\200\320\276\320\261\320\265\320\263:", nullptr));
        PercentLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202:", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        isAdminCheckBox->setText(QCoreApplication::translate("addUpdateWindow", "\320\220\320\264\320\274\320\270\320\275", nullptr));
        DescLabel->setText(QCoreApplication::translate("addUpdateWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        pushButton->setText(QCoreApplication::translate("addUpdateWindow", "meow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addUpdateWindow: public Ui_addUpdateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUPDATEWINDOW_H
