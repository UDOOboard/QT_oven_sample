#include "finestras.h"
#include "mainwindow.h"
#include "ui_finestras.h"
#include "ui_mainwindow.h"
#include "cronometro.h"
#include "ui_cronometro.h"
#include <QWidget>

FinestraS::FinestraS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FinestraS)
{
    ui->setupUi(this);
    a=0;
    temperature=0;
    ui->degree->display(temperature);

}
void FinestraS::paintEvent(QPaintEvent*)
{
        this->setStyleSheet("background-color: rgb(240,225,255);");

    QGraphicsScene *scene1 =new QGraphicsScene;
    QPixmap m1("../temperature.png");
    scene1->addPixmap(m1);
    ui->temperature->setScene(scene1);

    QPixmap ventola2("../ventola.png");
    QIcon ButtonIcon2(ventola2);
    ui->pushButton->setIcon(ButtonIcon2);
    ui->pushButton->setIconSize(QSize(98, 67));

    QPixmap grill("../grill.png");
    QIcon ButtonIcon3(grill);
    ui->pushButton_3->setIcon(ButtonIcon3);
    ui->pushButton_3->setIconSize(QSize(98,67));

    QPixmap sotto("../cotturaSotto.png");
    QIcon ButtonIcon4(sotto);
    ui->pushButton_2->setIcon(ButtonIcon4);
    ui->pushButton_2->setIconSize(QSize(98,67));

    QPixmap tutto("../sopraSotto.png");
    QIcon ButtonIcon5(tutto);
    ui->pushButton_4->setIcon(ButtonIcon5);
    ui->pushButton_4->setIconSize(QSize(98,67));

    QPixmap timer("../timer.png");
    QIcon ButtonIcon6(timer);
    ui->start->setIcon(ButtonIcon6);
    ui->start->setIconSize(QSize(98,67));


    QPixmap option("../indietro.png");
    QIcon ButtonIcon(option);
    ui->back->setIcon(ButtonIcon);
    ui->back->setIconSize(QSize(70,70));

    ui->degree->setPalette(Qt::red);

}

FinestraS::~FinestraS()
{
    delete ui;
}

void FinestraS::on_temperatureBar_valueChanged(int value)
{
    temperature = value;
    ui->degree->display(temperature);

}

void FinestraS::on_back_clicked()
{
    MainWindow* b=new MainWindow();
    b->show();
    FinestraS::close();
}



void FinestraS::on_start_clicked()
{

    Cronometro* b= new Cronometro();
    b->show();
    FinestraS::close();

}


void FinestraS::on_pushButton_clicked()
{
    if(a==0)
    {
        ui->label_7->setText("ON");
        a=1;
    }
    else
    {
        ui->label_7->setText("OFF");
        a=0;
    }
}
