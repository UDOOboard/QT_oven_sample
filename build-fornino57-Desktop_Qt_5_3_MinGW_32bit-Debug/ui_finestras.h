/********************************************************************************
** Form generated from reading UI file 'finestras.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINESTRAS_H
#define UI_FINESTRAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinestraS
{
public:
    QWidget *centralwidget;
    QGraphicsView *temperature;
    QPushButton *back;
    QScrollBar *temperatureBar;
    QLCDNumber *degree;
    QLabel *degree_0;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *start;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FinestraS)
    {
        if (FinestraS->objectName().isEmpty())
            FinestraS->setObjectName(QStringLiteral("FinestraS"));
        FinestraS->resize(800, 480);
        centralwidget = new QWidget(FinestraS);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        temperature = new QGraphicsView(centralwidget);
        temperature->setObjectName(QStringLiteral("temperature"));
        temperature->setGeometry(QRect(20, 25, 105, 105));
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(730, 0, 70, 70));
        temperatureBar = new QScrollBar(centralwidget);
        temperatureBar->setObjectName(QStringLiteral("temperatureBar"));
        temperatureBar->setGeometry(QRect(170, 50, 421, 50));
        temperatureBar->setMaximum(250);
        temperatureBar->setSliderPosition(0);
        temperatureBar->setOrientation(Qt::Horizontal);
        degree = new QLCDNumber(centralwidget);
        degree->setObjectName(QStringLiteral("degree"));
        degree->setGeometry(QRect(610, 50, 91, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        degree->setFont(font);
        degree_0 = new QLabel(centralwidget);
        degree_0->setObjectName(QStringLiteral("degree_0"));
        degree_0->setGeometry(QRect(190, 100, 15, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 100, 15, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(335, 100, 20, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 100, 20, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 100, 20, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(555, 100, 20, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 150, 111, 111));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 320, 101, 70));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 320, 101, 70));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(390, 320, 101, 70));
        start = new QPushButton(centralwidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(600, 200, 150, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("JasmineUPC"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        start->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 10, 221, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(400, 180, 71, 51));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(25);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 200, 161, 31));
        label_8->setFont(font2);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(210, 280, 191, 31));
        label_9->setFont(font2);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 390, 51, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        label_10->setFont(font4);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(250, 390, 51, 21));
        label_11->setFont(font4);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(380, 390, 131, 21));
        label_12->setFont(font4);
        FinestraS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FinestraS);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        FinestraS->setMenuBar(menubar);
        statusbar = new QStatusBar(FinestraS);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FinestraS->setStatusBar(statusbar);

        retranslateUi(FinestraS);

        QMetaObject::connectSlotsByName(FinestraS);
    } // setupUi

    void retranslateUi(QMainWindow *FinestraS)
    {
        FinestraS->setWindowTitle(QApplication::translate("FinestraS", "MainWindow", 0));
        back->setText(QString());
        degree_0->setText(QApplication::translate("FinestraS", "0", 0));
        label->setText(QApplication::translate("FinestraS", "50", 0));
        label_2->setText(QApplication::translate("FinestraS", "100", 0));
        label_3->setText(QApplication::translate("FinestraS", "150", 0));
        label_4->setText(QApplication::translate("FinestraS", "200", 0));
        label_5->setText(QApplication::translate("FinestraS", "250", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        start->setText(QString());
        label_6->setText(QApplication::translate("FinestraS", "Temperatura (C\302\260)", 0));
        label_7->setText(QApplication::translate("FinestraS", "OFF", 0));
        label_8->setText(QApplication::translate("FinestraS", "Ventilazione", 0));
        label_9->setText(QApplication::translate("FinestraS", "Piano riscaldato:", 0));
        label_10->setText(QApplication::translate("FinestraS", "Grill", 0));
        label_11->setText(QApplication::translate("FinestraS", "Sotto", 0));
        label_12->setText(QApplication::translate("FinestraS", "Sopra e sotto", 0));
    } // retranslateUi

};

namespace Ui {
    class FinestraS: public Ui_FinestraS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINESTRAS_H
