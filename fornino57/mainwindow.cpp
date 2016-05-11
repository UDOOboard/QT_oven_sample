#include "finestras.h"
#include "mainwindow.h"
#include "ui_finestras.h"
#include "ui_mainwindow.h"
#include "cronometro.h"
#include "ui_cronometro.h"
#include <QPixmap>
#include <QTime>
#include <QDate>
#include <QIcon>
#include <QRect>
#include <QWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FinestraS* a= new FinestraS();
}

void MainWindow::paintEvent(QPaintEvent*)
{


    QPainter d(this);
        this->setStyleSheet("background-color: white;");
        ui->graphicsView->setGeometry(width()-360,0,440,50);

        ui->pushButton->setStyleSheet("background-color: rgb(205,205,180)");
        ui->pushButton_1->setStyleSheet("background-color: rgb(220,200,255)");
        ui->pushButton_2->setStyleSheet("background-color: rgb(205,235,205)");
        ui->pushButton_3->setStyleSheet("background-color: rgb(255,250,170)");

        ui->label_1->setText("<font color='#505050'>Cooking settings</font>");
        ui->label_2->setText("<font color='#505050'>Automatic programs</font>");
        ui->label_3->setText("<font color='#505050'>Special functions</font>");





        QGraphicsScene *scene =new QGraphicsScene;
        QPixmap m("../logo_400.png");
        scene->addPixmap(m);
        ui->graphicsView->setScene(scene);

        QTime t=QTime::currentTime();
        ui->lcdNumber->display(t.toString("hh:mm"));
        QDate d1 = QDate::currentDate();
        ui->datelabel->setText(d1.toString("dd/MM/yyyy"));
        switch(d1.dayOfWeek())
        {
        case 1:
            ui->daylabel->setText("Monday");
            break ;
        case 2 :
            ui->daylabel->setText("Tuesday");
            break ;
        case 3 :
            ui->daylabel->setText("Wednesday");
            break ;
        case 4:
            ui->daylabel->setText("Thursday");
            break ;
        case 5:
            ui->daylabel->setText("Friday");
            break ;
        case 6:
            ui->daylabel->setText("Saturday");
            break ;
        case 7:
            ui->daylabel->setText("Sunday");
            break ;
        }

        QPixmap option("../impostazioni.png");
        QIcon ButtonIcon(option);
        ui->pushButton->setIcon(ButtonIcon);
        ui->pushButton->setIconSize(QSize(50,50));

        QPixmap settings("../bottone1.png");
        QIcon ButtonIcon_1(settings);
        ui->pushButton_1->setIcon(ButtonIcon_1);
        ui->pushButton_1->setIconSize(QSize(100,110));

        QPixmap programs("../cotturastandard.png");
        QIcon ButtonIcon_2(programs);
        ui->pushButton_2->setIcon(ButtonIcon_2);
        ui->pushButton_2->setIconSize(QSize(100,110));

        QPixmap special("../speciali.png");
        QIcon ButtonIcon_3(special);
        ui->pushButton_3->setIcon(ButtonIcon_3);
        ui->pushButton_3->setIconSize(QSize(100,110));



}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    FinestraS* a= new FinestraS();
    a->show();
    MainWindow::close();
}
