#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto a = new QMenu();
    auto q =new QString("oh god");
    a->addMenu(*q);
    ui->menubar->addMenu(a);
}

MainWindow::~MainWindow()
{
    delete ui;
}

