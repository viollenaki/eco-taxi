/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout_2;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *Header;
    QFrame *greenBack;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *EcoTaxiWhite;
    QVBoxLayout *verticalLayout_3;
    QLabel *password;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(444, 350);
        login->setMinimumSize(QSize(444, 350));
        login->setMaximumSize(QSize(444, 350));
        gridLayout_2 = new QGridLayout(login);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalFrame = new QFrame(login);
        verticalFrame->setObjectName("verticalFrame");
        verticalLayout_2 = new QVBoxLayout(verticalFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Header = new QLabel(verticalFrame);
        Header->setObjectName("Header");
        Header->setMinimumSize(QSize(50, 0));
        Header->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Header, 0, Qt::AlignHCenter|Qt::AlignBottom);

        greenBack = new QFrame(verticalFrame);
        greenBack->setObjectName("greenBack");
        greenBack->setMinimumSize(QSize(400, 250));
        greenBack->setMaximumSize(QSize(400, 250));
        greenBack->setStyleSheet(QString::fromUtf8(""));
        greenBack->setFrameShape(QFrame::StyledPanel);
        greenBack->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(greenBack);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(15, 0, 15, 20);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(30, -1, 30, -1);
        EcoTaxiWhite = new QLabel(greenBack);
        EcoTaxiWhite->setObjectName("EcoTaxiWhite");
        EcoTaxiWhite->setMinimumSize(QSize(50, 60));
        EcoTaxiWhite->setAutoFillBackground(false);

        verticalLayout->addWidget(EcoTaxiWhite, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        password = new QLabel(greenBack);
        password->setObjectName("password");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(password);

        passwordEdit = new QLineEdit(greenBack);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setMinimumSize(QSize(300, 0));
        passwordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(passwordEdit);


        verticalLayout->addLayout(verticalLayout_3);

        loginButton = new QPushButton(greenBack);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(200, 52));
        loginButton->setFlat(true);

        verticalLayout->addWidget(loginButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(greenBack, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(verticalFrame, 0, 1, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217 | ECO TAXI", nullptr));
        Header->setText(QCoreApplication::translate("login", "\320\220\320\222\320\242\320\236\320\240\320\230\320\227\320\220\320\246\320\230\320\257", nullptr));
        EcoTaxiWhite->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\">ECO TAXI</span></p></body></html>", nullptr));
        password->setText(QCoreApplication::translate("login", "\320\237\320\220\320\240\320\236\320\233\320\254:", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "\320\222\320\236\320\231\320\242\320\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
