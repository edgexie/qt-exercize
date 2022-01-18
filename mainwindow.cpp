#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cout<<"this is content"<<iniController->getInfo()<<endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

