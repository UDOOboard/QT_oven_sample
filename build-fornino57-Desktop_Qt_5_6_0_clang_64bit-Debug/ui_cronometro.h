/********************************************************************************
** Form generated from reading UI file 'cronometro.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRONOMETRO_H
#define UI_CRONOMETRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cronometro
{
public:
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Cronometro)
    {
        if (Cronometro->objectName().isEmpty())
            Cronometro->setObjectName(QStringLiteral("Cronometro"));
        Cronometro->resize(800, 480);
        centralwidget = new QWidget(Cronometro);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(270, 40, 260, 240));
        QFont font;
        font.setPointSize(12);
        lcdNumber->setFont(font);
        lcdNumber->setDigitCount(4);
        lcdNumber->setProperty("intValue", QVariant(0));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 10, 120, 120));
        QFont font1;
        font1.setPointSize(60);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 190, 120, 120));
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(550, 10, 120, 120));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 180, 120, 120));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 320, 700, 90));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft Uighur"));
        font2.setPointSize(72);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_5->setFont(font2);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(730, 0, 70, 70));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 140, 121, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(560, 140, 101, 31));
        label_2->setFont(font3);
        Cronometro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Cronometro);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Cronometro->setMenuBar(menubar);
        statusbar = new QStatusBar(Cronometro);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Cronometro->setStatusBar(statusbar);

        retranslateUi(Cronometro);

        QMetaObject::connectSlotsByName(Cronometro);
    } // setupUi

    void retranslateUi(QMainWindow *Cronometro)
    {
        Cronometro->setWindowTitle(QApplication::translate("Cronometro", "MainWindow", 0));
        pushButton->setText(QApplication::translate("Cronometro", "+", 0));
        pushButton_2->setText(QApplication::translate("Cronometro", "-", 0));
        pushButton_3->setText(QApplication::translate("Cronometro", "+", 0));
        pushButton_4->setText(QApplication::translate("Cronometro", "-", 0));
        pushButton_5->setText(QApplication::translate("Cronometro", "START", 0));
        pushButton_6->setText(QString());
        label->setText(QApplication::translate("Cronometro", "\302\261 10 Min", 0));
        label_2->setText(QApplication::translate("Cronometro", "\302\261 1 Min", 0));
    } // retranslateUi

};

namespace Ui {
    class Cronometro: public Ui_Cronometro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRONOMETRO_H
