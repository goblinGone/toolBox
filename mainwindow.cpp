#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->setText("Hello, world");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->setText("hello from the other button");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("another button push");
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->textBrowser->setText("last button push");
}

