#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inputwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //foodData.readCsvFile();
    // std::string testA = foodData->data["Milk"][0].description;
    //ui->testLabel->setText(testA);
    // std::cout << testA << std::endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}


void MainWindow::on_pushButton_clicked()
{
    inputWindow = new InputWindow(this);
    inputWindow->setWindowTitle("Data Input Window");
    inputWindow->foodData = foodData;
    inputWindow->show();
}

