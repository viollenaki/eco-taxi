/********************************************************************************
** Form generated from reading UI file 'removedb.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEDB_H
#define UI_REMOVEDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveDB
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *RemoveDB)
    {
        if (RemoveDB->objectName().isEmpty())
            RemoveDB->setObjectName("RemoveDB");
        RemoveDB->resize(400, 200);
        RemoveDB->setMinimumSize(QSize(400, 200));
        RemoveDB->setMaximumSize(QSize(400, 200));
        verticalLayout = new QVBoxLayout(RemoveDB);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(RemoveDB);
        label->setObjectName("label");
        label->setTextFormat(Qt::MarkdownText);
        label->setWordWrap(true);
        label->setOpenExternalLinks(false);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(RemoveDB);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #cccccc;"));
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(RemoveDB);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 52));

        verticalLayout->addWidget(pushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        retranslateUi(RemoveDB);

        QMetaObject::connectSlotsByName(RemoveDB);
    } // setupUi

    void retranslateUi(QWidget *RemoveDB)
    {
        RemoveDB->setWindowTitle(QCoreApplication::translate("RemoveDB", "\320\243\320\224\320\220\320\233\320\230\320\242\320\254 \320\221\320\220\320\227\320\243 \320\224\320\220\320\235\320\235\320\253\320\245???", nullptr));
        label->setText(QCoreApplication::translate("RemoveDB", "\320\224\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217 \320\262\321\201\320\265\321\205 \320\267\320\260\320\277\320\270\321\201\320\265\320\271 \320\270\320\267 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton->setText(QCoreApplication::translate("RemoveDB", "\320\243\320\224\320\220\320\233\320\230\320\242\320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveDB: public Ui_RemoveDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEDB_H
