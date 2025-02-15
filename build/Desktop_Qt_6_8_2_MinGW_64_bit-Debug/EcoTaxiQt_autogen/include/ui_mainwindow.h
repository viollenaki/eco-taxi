/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *ReportsButton;
    QLabel *EcoTaxi;
    QComboBox *SettingsButton;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *dateButton;
    QTimeEdit *timeEdit;
    QCheckBox *systemTimeCheck;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *eventFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *typeLabel;
    QComboBox *TypesBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *carsLabel;
    QComboBox *CarsBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *driversLabel;
    QComboBox *DriversBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *sumLabel;
    QLineEdit *SumEdit;
    QVBoxLayout *verticalLayout_7;
    QLabel *descLabel;
    QTextEdit *descEdit;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *addEventButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QFrame *chargeFrame;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *carsLabel_2;
    QComboBox *CarsBox_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *driversLabel_2;
    QComboBox *DriversBox_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *locsLabel;
    QComboBox *LocsBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *kwtLabel;
    QLineEdit *KWTEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *timeLabel;
    QLineEdit *TimeEdit;
    QPushButton *addChargeButton;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *FinesButton;
    QPushButton *repairsButton;
    QPushButton *eventsButton;
    QPushButton *chargesButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(50, -1, 50, -1);
        ReportsButton = new QComboBox(centralwidget);
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->addItem(QString());
        ReportsButton->setObjectName("ReportsButton");
        ReportsButton->setMinimumSize(QSize(0, 52));
        ReportsButton->setMaximumSize(QSize(360, 16777215));

        horizontalLayout->addWidget(ReportsButton);

        EcoTaxi = new QLabel(centralwidget);
        EcoTaxi->setObjectName("EcoTaxi");
        EcoTaxi->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(EcoTaxi, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        SettingsButton = new QComboBox(centralwidget);
        SettingsButton->addItem(QString());
        SettingsButton->addItem(QString());
        SettingsButton->addItem(QString());
        SettingsButton->addItem(QString());
        SettingsButton->addItem(QString());
        SettingsButton->addItem(QString());
        SettingsButton->addItem(QString());
        SettingsButton->setObjectName("SettingsButton");
        SettingsButton->setMinimumSize(QSize(0, 52));
        SettingsButton->setMaximumSize(QSize(360, 16777215));

        horizontalLayout->addWidget(SettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(310, -1, 45, -1);
        dateButton = new QPushButton(centralwidget);
        dateButton->setObjectName("dateButton");
        dateButton->setMinimumSize(QSize(220, 0));
        dateButton->setMaximumSize(QSize(220, 16777215));

        horizontalLayout_11->addWidget(dateButton, 0, Qt::AlignmentFlag::AlignRight);

        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setMinimumSize(QSize(220, 0));
        timeEdit->setMaximumSize(QSize(220, 200));
        timeEdit->setCorrectionMode(QAbstractSpinBox::CorrectionMode::CorrectToNearestValue);
        timeEdit->setCalendarPopup(true);
        timeEdit->setTimeSpec(Qt::TimeSpec::LocalTime);
        timeEdit->setTime(QTime(0, 0, 0));

        horizontalLayout_11->addWidget(timeEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        systemTimeCheck = new QCheckBox(centralwidget);
        systemTimeCheck->setObjectName("systemTimeCheck");
        systemTimeCheck->setMinimumSize(QSize(0, 0));
        systemTimeCheck->setMaximumSize(QSize(220, 16777215));
        systemTimeCheck->setChecked(true);

        horizontalLayout_11->addWidget(systemTimeCheck, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(50, -1, 50, -1);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(550, 0));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        eventFrame = new QFrame(frame_2);
        eventFrame->setObjectName("eventFrame");
        eventFrame->setMinimumSize(QSize(550, 0));
        eventFrame->setMaximumSize(QSize(16777215, 16777215));
        eventFrame->setFrameShape(QFrame::Shape::StyledPanel);
        eventFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(eventFrame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(30, 11, 30, 11);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        typeLabel = new QLabel(eventFrame);
        typeLabel->setObjectName("typeLabel");

        horizontalLayout_3->addWidget(typeLabel);

        TypesBox = new QComboBox(eventFrame);
        TypesBox->setObjectName("TypesBox");

        horizontalLayout_3->addWidget(TypesBox);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        carsLabel = new QLabel(eventFrame);
        carsLabel->setObjectName("carsLabel");

        horizontalLayout_5->addWidget(carsLabel);

        CarsBox = new QComboBox(eventFrame);
        CarsBox->setObjectName("CarsBox");

        horizontalLayout_5->addWidget(CarsBox);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        driversLabel = new QLabel(eventFrame);
        driversLabel->setObjectName("driversLabel");

        horizontalLayout_6->addWidget(driversLabel);

        DriversBox = new QComboBox(eventFrame);
        DriversBox->setObjectName("DriversBox");
        DriversBox->setDuplicatesEnabled(true);

        horizontalLayout_6->addWidget(DriversBox);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        sumLabel = new QLabel(eventFrame);
        sumLabel->setObjectName("sumLabel");

        horizontalLayout_7->addWidget(sumLabel);

        SumEdit = new QLineEdit(eventFrame);
        SumEdit->setObjectName("SumEdit");
        SumEdit->setEnabled(true);

        horizontalLayout_7->addWidget(SumEdit, 0, Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        descLabel = new QLabel(eventFrame);
        descLabel->setObjectName("descLabel");

        verticalLayout_7->addWidget(descLabel);

        descEdit = new QTextEdit(eventFrame);
        descEdit->setObjectName("descEdit");

        verticalLayout_7->addWidget(descEdit);


        verticalLayout_4->addLayout(verticalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        addEventButton = new QPushButton(eventFrame);
        addEventButton->setObjectName("addEventButton");
        addEventButton->setMinimumSize(QSize(250, 52));
        addEventButton->setMaximumSize(QSize(259, 16777215));
        addEventButton->setFlat(true);

        horizontalLayout_12->addWidget(addEventButton);


        verticalLayout_4->addLayout(horizontalLayout_12);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);
        verticalLayout_4->setStretch(3, 1);

        verticalLayout_2->addWidget(eventFrame, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 15);

        horizontalLayout_2->addWidget(frame_2, 0, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(550, 0));
        frame->setMaximumSize(QSize(16777215, 16777215));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter);

        chargeFrame = new QFrame(frame);
        chargeFrame->setObjectName("chargeFrame");
        chargeFrame->setMaximumSize(QSize(16777215, 16777215));
        chargeFrame->setFrameShape(QFrame::Shape::StyledPanel);
        chargeFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(chargeFrame);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(30, -1, 30, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        carsLabel_2 = new QLabel(chargeFrame);
        carsLabel_2->setObjectName("carsLabel_2");

        horizontalLayout_4->addWidget(carsLabel_2);

        CarsBox_2 = new QComboBox(chargeFrame);
        CarsBox_2->setObjectName("CarsBox_2");

        horizontalLayout_4->addWidget(CarsBox_2);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        driversLabel_2 = new QLabel(chargeFrame);
        driversLabel_2->setObjectName("driversLabel_2");

        horizontalLayout_8->addWidget(driversLabel_2);

        DriversBox_2 = new QComboBox(chargeFrame);
        DriversBox_2->setObjectName("DriversBox_2");

        horizontalLayout_8->addWidget(DriversBox_2);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 2);

        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        locsLabel = new QLabel(chargeFrame);
        locsLabel->setObjectName("locsLabel");

        horizontalLayout_10->addWidget(locsLabel);

        LocsBox = new QComboBox(chargeFrame);
        LocsBox->setObjectName("LocsBox");

        horizontalLayout_10->addWidget(LocsBox);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        kwtLabel = new QLabel(chargeFrame);
        kwtLabel->setObjectName("kwtLabel");

        horizontalLayout_14->addWidget(kwtLabel);

        KWTEdit = new QLineEdit(chargeFrame);
        KWTEdit->setObjectName("KWTEdit");
        KWTEdit->setEnabled(true);

        horizontalLayout_14->addWidget(KWTEdit, 0, Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 2);

        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        timeLabel = new QLabel(chargeFrame);
        timeLabel->setObjectName("timeLabel");

        horizontalLayout_13->addWidget(timeLabel);

        TimeEdit = new QLineEdit(chargeFrame);
        TimeEdit->setObjectName("TimeEdit");
        TimeEdit->setEnabled(true);

        horizontalLayout_13->addWidget(TimeEdit, 0, Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 2);

        verticalLayout_6->addLayout(horizontalLayout_13);

        addChargeButton = new QPushButton(chargeFrame);
        addChargeButton->setObjectName("addChargeButton");
        addChargeButton->setMinimumSize(QSize(250, 52));
        addChargeButton->setFlat(true);

        verticalLayout_6->addWidget(addChargeButton, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_3->addWidget(chargeFrame);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 15);

        horizontalLayout_2->addWidget(frame, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(40);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_9->setContentsMargins(50, -1, 50, 20);
        FinesButton = new QComboBox(centralwidget);
        FinesButton->addItem(QString());
        FinesButton->addItem(QString());
        FinesButton->addItem(QString());
        FinesButton->setObjectName("FinesButton");
        FinesButton->setMinimumSize(QSize(0, 52));

        horizontalLayout_9->addWidget(FinesButton);

        repairsButton = new QPushButton(centralwidget);
        repairsButton->setObjectName("repairsButton");
        repairsButton->setMinimumSize(QSize(0, 52));

        horizontalLayout_9->addWidget(repairsButton);

        eventsButton = new QPushButton(centralwidget);
        eventsButton->setObjectName("eventsButton");
        eventsButton->setMinimumSize(QSize(0, 52));

        horizontalLayout_9->addWidget(eventsButton);

        chargesButton = new QPushButton(centralwidget);
        chargesButton->setObjectName("chargesButton");
        chargesButton->setMinimumSize(QSize(0, 52));

        horizontalLayout_9->addWidget(chargesButton);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_5->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ReportsButton->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\230\320\235\320\222\320\225\320\241\320\242\320\236\320\240\320\220\320\234", nullptr));
        ReportsButton->setItemText(1, QCoreApplication::translate("MainWindow", "\320\236\320\221\320\251\320\230\320\231", nullptr));
        ReportsButton->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\234\320\220\320\250\320\230\320\235\320\220\320\234", nullptr));
        ReportsButton->setItemText(3, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\222\320\236\320\224\320\230\320\242\320\225\320\233\320\257\320\234", nullptr));
        ReportsButton->setItemText(4, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\233\320\236\320\232\320\220\320\246\320\230\320\257\320\234", nullptr));
        ReportsButton->setItemText(5, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\237\320\236\320\233\320\254\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\257\320\234", nullptr));
        ReportsButton->setItemText(6, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\227\320\220\320\240\320\257\320\224\320\232\320\220\320\234", nullptr));
        ReportsButton->setItemText(7, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\242\320\230\320\237\320\243", nullptr));
        ReportsButton->setItemText(8, QCoreApplication::translate("MainWindow", "\320\224\320\236\320\233\320\223\320\230", nullptr));
        ReportsButton->setItemText(9, QCoreApplication::translate("MainWindow", "DriverCharge", nullptr));

        ReportsButton->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\236\320\242\320\247\320\225\320\242\320\253", nullptr));
        EcoTaxi->setText(QCoreApplication::translate("MainWindow", "ECO TAXI", nullptr));
        SettingsButton->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\320\236\320\224\320\230\320\242\320\225\320\233\320\230", nullptr));
        SettingsButton->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\220\320\250\320\230\320\235\320\253", nullptr));
        SettingsButton->setItemText(2, QCoreApplication::translate("MainWindow", "\320\230\320\235\320\222\320\225\320\241\320\242\320\236\320\240\320\253", nullptr));
        SettingsButton->setItemText(3, QCoreApplication::translate("MainWindow", "\320\242\320\230\320\237\320\253", nullptr));
        SettingsButton->setItemText(4, QCoreApplication::translate("MainWindow", "\320\233\320\236\320\232\320\220\320\246\320\230\320\230", nullptr));
        SettingsButton->setItemText(5, QCoreApplication::translate("MainWindow", "\320\237\320\236\320\233\320\254\320\227\320\236\320\222\320\220\320\242\320\225\320\233\320\230", nullptr));
        SettingsButton->setItemText(6, QCoreApplication::translate("MainWindow", "\320\243\320\224\320\220\320\233\320\230\320\242\320\254 \320\222\320\241\320\225", nullptr));

        SettingsButton->setCurrentText(QString());
        SettingsButton->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\220\320\241\320\242\320\240\320\236\320\231\320\232\320\230", nullptr));
        dateButton->setText(QCoreApplication::translate("MainWindow", "00.00.0000", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "hh:mm", nullptr));
        systemTimeCheck->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\236\320\221\320\220\320\222\320\230\320\242\320\254 \320\241\320\236\320\221\320\253\320\242\320\230\320\225", nullptr));
        typeLabel->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277:", nullptr));
        carsLabel->setText(QCoreApplication::translate("MainWindow", "ID \320\274\320\260\321\210\320\270\320\275\321\213:", nullptr));
        CarsBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "-", nullptr));
        driversLabel->setText(QCoreApplication::translate("MainWindow", "ID \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217:", nullptr));
        DriversBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "-", nullptr));
        sumLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260:", nullptr));
        descLabel->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        addEventButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\236\320\221\320\220\320\222\320\230\320\242\320\254 \320\227\320\220\320\240\320\257\320\224\320\232\320\243", nullptr));
        carsLabel_2->setText(QCoreApplication::translate("MainWindow", "ID \320\274\320\260\321\210\320\270\320\275\321\213:", nullptr));
        driversLabel_2->setText(QCoreApplication::translate("MainWindow", "ID \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217:", nullptr));
        locsLabel->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\272\320\260\321\206\320\270\321\217:", nullptr));
        kwtLabel->setText(QCoreApplication::translate("MainWindow", "\320\232\320\222\320\242:", nullptr));
        KWTEdit->setPlaceholderText(QString());
        timeLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217:", nullptr));
        TimeEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\274\320\270\320\275\321\203\321\202\321\213", nullptr));
        addChargeButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0.4.17.9", nullptr));
        FinesButton->setItemText(0, QCoreApplication::translate("MainWindow", "\320\250\320\242\320\240\320\220\320\244\320\253", nullptr));
        FinesButton->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\234\320\220\320\250\320\230\320\235\320\220\320\234", nullptr));
        FinesButton->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\236 \320\222\320\236\320\224\320\230\320\242\320\225\320\233\320\257\320\234", nullptr));

        FinesButton->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\250\320\242\320\240\320\220\320\244\320\253", nullptr));
        repairsButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\225\320\234\320\236\320\235\320\242", nullptr));
        eventsButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\236\320\221\320\253\320\242\320\230\320\257", nullptr));
        chargesButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\220\320\240\320\257\320\224\320\232\320\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
