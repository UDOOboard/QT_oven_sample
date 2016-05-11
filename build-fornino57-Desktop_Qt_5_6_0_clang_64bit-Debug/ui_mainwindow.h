/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *datelabel;
    QLabel *daylabel;
    QPushButton *pushButton;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(455, 0, 340, 136));
        graphicsView->setFrameShape(QFrame::NoFrame);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(40, -10, 311, 191));
        QFont font;
        font.setFamily(QStringLiteral("MS Serif"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        lcdNumber->setFont(font);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Raised);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(60, 220, 180, 180));
        pushButton_1->setMouseTracking(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 220, 180, 180));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 220, 180, 180));
        datelabel = new QLabel(centralWidget);
        datelabel->setObjectName(QStringLiteral("datelabel"));
        datelabel->setGeometry(QRect(260, 150, 221, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        datelabel->setFont(font1);
        daylabel = new QLabel(centralWidget);
        daylabel->setObjectName(QStringLiteral("daylabel"));
        daylabel->setGeometry(QRect(40, 150, 190, 51));
        daylabel->setFont(font1);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 0, 70, 70));
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(60, 410, 191, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_1->setFont(font2);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 410, 221, 31));
        label_2->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(560, 410, 191, 31));
        label_3->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        lcdNumber->raise();
        graphicsView->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        datelabel->raise();
        daylabel->raise();
        pushButton->raise();
        label_1->raise();
        label_2->raise();
        label_3->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        datelabel->setText(QApplication::translate("MainWindow", "03:05:2016", 0));
        daylabel->setText(QApplication::translate("MainWindow", "Wednesday", 0));
        pushButton->setText(QString());
        label_1->setText(QApplication::translate("MainWindow", "Cooking settings", 0));
        label_2->setText(QApplication::translate("MainWindow", "Automatic programs", 0));
        label_3->setText(QApplication::translate("MainWindow", "Special functions", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
