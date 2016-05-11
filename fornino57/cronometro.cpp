#include "finestras.h"
#include "mainwindow.h"
#include "ui_finestras.h"
#include "ui_mainwindow.h"
#include "cronometro.h"
#include "ui_cronometro.h"

Cronometro::Cronometro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cronometro)
{
    ui->setupUi(this);
    t=0;
    timer.setInterval(1000*60);
    connect(&timer,SIGNAL(timeout()),this,SLOT(diminuire()));
    textTimer="START";
}

void Cronometro::paintEvent(QPaintEvent*)
{
    this->setStyleSheet("background-color: rgb(240,225,255);");

    ui->pushButton->setStyleSheet("background-color: rgb(239,239,239)");
    ui->pushButton_2->setStyleSheet("background-color: rgb(239,239,239)");
    ui->pushButton_3->setStyleSheet("background-color: rgb(239,239,239)");
    ui->pushButton_4->setStyleSheet("background-color: rgb(239,239,239)");
    ui->pushButton_5->setStyleSheet("background-color: rgb(239,239,239)");
    QPixmap back("../indietro.png");
    QIcon BB(back);
    ui->pushButton_6->setIcon(BB);
    ui->pushButton_6->setIconSize(QSize(70,70));


}

Cronometro::~Cronometro()
{
    delete ui;
}

void Cronometro::on_pushButton_3_clicked()
{
    timer.stop();
    t++;
    ui->lcdNumber->display((double)t);
}

void Cronometro::on_pushButton_4_clicked()
{
    timer.stop();
    t=t-1;
    if(t<=0)
        t=0;
    ui->lcdNumber->display((double)t);
}

void Cronometro::on_pushButton_clicked()
{
    timer.stop();
    t+=10;
    ui->lcdNumber->display((double)t);
}

void Cronometro::on_pushButton_2_clicked()
{
    timer.stop();
    t=t-10;
    if(t<=0)
        t=0;
    ui->lcdNumber->display((double)t);
}

void Cronometro::on_pushButton_6_clicked()
{
    FinestraS* h=new FinestraS;
    h->show();
    Cronometro::close();
}

void Cronometro::on_pushButton_5_clicked()
{
    if(ui->lcdNumber->value() != 0)
    {

        if(textTimer.compare("START") == 0)
        {
            timer.start();
            ui->pushButton_5->setText("PAUSE");
            textTimer="PAUSE";
            ui->pushButton_2->setDisabled(1);
            ui->pushButton->setDisabled(1);
            ui->pushButton_3->setDisabled(1);
            ui->pushButton_4->setDisabled(1);

        }
        else
        {
            timer.stop();
            ui->pushButton_5->setText("START");
            textTimer="START";
            ui->pushButton_2->setDisabled(0);
            ui->pushButton->setDisabled(0);
            ui->pushButton_3->setDisabled(0);
            ui->pushButton_4->setDisabled(0);

        }
    }



}

void Cronometro::diminuire()
{
    if(t<=0)
    {
        t=0;
        timer.stop();
    }
    else
        t=t-1;
    ui->lcdNumber->display((double)t);

}
