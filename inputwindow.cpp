#include "inputwindow.h"
#include "ui_inputwindow.h"
#include <QMessageBox>
#include "foodList.h"

InputWindow::InputWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::InputWindow)
{
    ui->setupUi(this);
}

InputWindow::~InputWindow()
{
    delete ui;
}

void InputWindow::on_pushButton_2_clicked()
{
    // Check to see if any field = 0
    gender = ui->genderBox->currentText();
    age = ui->ageSpin->value();
    height = ui->heightSpin ->value();
    weight = ui->weightSpin->value();

    // If Entry Unfilled
    if (age == 0 || height == 0 || weight == 0){
        QMessageBox::critical(this, "Error Input", "Not all inputs are valid.");
    }
    else{
        // if All Entries Filled
        statisticsWindow = new StatisticsWindow(this);
        statisticsWindow->setWindowTitle("Data Statistics Window");

        statisticsWindow->gender = &(gender);
        statisticsWindow->age = &(age);
        statisticsWindow->height = &(height);
        statisticsWindow->weight = &(weight);
        statisticsWindow->data = foodData;
        statisticsWindow->show();
    }
}


void InputWindow::on_pushButton_clicked()
{
    close();
}


void InputWindow::on_refreshButton_clicked()
{
    ui->categoryCombobox->addItem("Milk");
    ui->closestFoodCombobox->addItem("Milk, human");
    ui->closestFoodCombobox->addItem("Milk, NFS");
    ui->closestFoodCombobox->addItem("Milk, whole");
    ui->closestFoodCombobox->addItem("Milk, low sodium, whole");
    ui->closestFoodCombobox->addItem("Milk, calcium fortified, whole");
    ui->closestFoodCombobox->addItem("Milk, calcium fortified, low fat (1%)");
    ui->closestFoodCombobox->addItem("Milk, calcium fortified, fat free (skim)");
    ui->closestFoodCombobox->addItem("Milk, reduced fat (2%)");
    ui->closestFoodCombobox->addItem("Milk, acidophilus, low fat (1%)");
    ui->closestFoodCombobox->addItem("Milk, acidophilus, reduced fat (2%)");
    ui->closestFoodCombobox->addItem("Milk, low fat (1%)");
    ui->closestFoodCombobox->addItem("Milk, fat free (skim)");
    ui->closestFoodCombobox->addItem("Milk, lactose free, low fat (1%)");
    ui->closestFoodCombobox->addItem("Milk, lactose free, fat free (skim)");
    ui->closestFoodCombobox->addItem("Milk, lactose free, reduced fat (2%)");
    ui->closestFoodCombobox->addItem("Milk, lactose free, whole");
}

