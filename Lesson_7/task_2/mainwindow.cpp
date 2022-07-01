#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->b_0,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_1,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_2,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_3,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_4,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_5,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_6,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_7,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_8,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->b_9,&QPushButton::clicked,this,&MainWindow::LineEditInput);
    connect(ui->Add,&QPushButton::clicked,this,&MainWindow::Add);
    connect(ui->Subtract,&QPushButton::clicked,this,&MainWindow::Subtract);
    connect(ui->Divide,&QPushButton::clicked,this,&MainWindow::Divide);
    connect(ui->Multiply,&QPushButton::clicked,this,&MainWindow::Multiply);
    connect(ui->Dot,&QPushButton::clicked,this,&MainWindow::Dot);
    connect(ui->Equal,&QPushButton::clicked,this,&MainWindow::Equal);
    connect(ui->Clear,&QPushButton::clicked,this,&MainWindow::Clear);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LineEditInput()
{
    QPushButton *button = (QPushButton*)sender();
    ui->Display->setText(ui->Display->text()+button->text());
}

void MainWindow::Add()
{
    firstnum = ui->Display->text().toInt();
    action  = '+';
    ui->Display->clear();
}

void MainWindow::Subtract()
{
    firstnum = ui->Display->text().toInt();
    action  = '-';
    ui->Display->clear();
}

void MainWindow::Divide()
{
    firstnum = ui->Display->text().toInt();
    action  = '/';
    ui->Display->clear();
}

void MainWindow::Multiply()
{
    firstnum = ui->Display->text().toInt();
    action  = '*';
    ui->Display->clear();
}

void MainWindow::Dot()
{
    firstnum = ui->Display->text().toInt();
    action  = '.';
    firstnum = ui->Display->text().toDouble();
    ui->Display->clear();
}

void MainWindow::Equal()
{
    secondnum = ui->Display->text().toInt();
    switch (action) {
    case '+':
        ui->Display->setText(QString::number(firstnum + secondnum));
        break;
    case '-':
        ui->Display->setText(QString::number(firstnum - secondnum));
        break;
    case '/':
        ui->Display->setText(QString::number(firstnum / secondnum));
        break;
    case '*':
        ui->Display->setText(QString::number(firstnum * secondnum));
        break;
    }
}

void MainWindow::Clear()
{
    ui->Display->setText(QString::number(0));
}




