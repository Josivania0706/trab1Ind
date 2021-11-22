//Maria Josivânia Oliveira Pinheiro
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->spinBoxR->setRange(0,1);          //
    ui->spinBoxG->setRange(0,1);          //fixar os valores dos spins
    ui->spinBoxB->setRange(0,1);         //

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, ui->openGLWidget, &canvas::movimentar);
    timer->start(2000/5);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    ui->openGLWidget->mudarCor(ui->spinBoxR->value(),ui->spinBoxG->value(), ui->spinBoxB->value());

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->openGLWidget->RotacionarObjeto();
}

