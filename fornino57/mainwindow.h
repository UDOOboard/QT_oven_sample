#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTime>
#include <QDate>
#include <QMainWindow>
#include "finestras.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    void paintEvent(QPaintEvent*);
    QTime t;
    QDate d1;
    int d2;


public:
    explicit MainWindow(QWidget *parent = 0);
    int temperature1;
    ~MainWindow();

private slots:


    void on_pushButton_1_clicked();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
