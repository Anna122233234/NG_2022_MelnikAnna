#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Words, &QLineEdit::textChanged,this,&MainWindow::Counter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Counter()
{
    QString string = ui->Words->text();
    int words=0;
    for(int i = 0; i < string.length(); i++){
        if((string[i] >= 'A' && string[i] <= 'Z')  || (string[i] >= 'a' && string[i] <= 'z')){
            if(!(string[i+1]>='a' && string[i+1]<='z') || (string[i+1]>='A' && string[i+1]<='Z')){
                words++;
            }
        }
    }
    ui->WCounter->setValue(words);
}

