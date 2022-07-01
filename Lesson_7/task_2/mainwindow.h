#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void numbers();
    void LineEditInput();
    void Add();
    void Subtract();
    void Divide();
    void Multiply();
    void Dot();
    void Equal();
    void Clear();
    //void EqualDot();

private:
    Ui::MainWindow *ui;
    int firstnum;
    int secondnum;
    char action;
};
#endif // MAINWINDOW_H
