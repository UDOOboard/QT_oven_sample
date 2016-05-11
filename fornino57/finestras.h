#ifndef FINESTRAS_H
#define FINESTRAS_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class FinestraS;
}

class FinestraS : public QMainWindow
{
    Q_OBJECT
    void paintEvent(QPaintEvent*);
    int a;


public:
    explicit FinestraS(QWidget *parent = 0);
    ~FinestraS();
    int temperature;

private slots:
    void on_temperatureBar_valueChanged(int value);

    void on_back_clicked();

    void on_start_clicked();

    void on_pushButton_clicked();

private:

    Ui::FinestraS *ui;
};

#endif // FINESTRAS_H
