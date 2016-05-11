#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#include <QMainWindow>
#include "finestras.h"
#include <QTimer>

namespace Ui {
class Cronometro;
}

class Cronometro : public QMainWindow
{
    Q_OBJECT
    void paintEvent(QPaintEvent*);

    int t;
    QTimer timer;
    QString textTimer;

public:
    explicit Cronometro(QWidget *parent = 0);

    ~Cronometro();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();
public slots:
    void diminuire();
private:
    Ui::Cronometro *ui;
};

#endif // CRONOMETRO_H
