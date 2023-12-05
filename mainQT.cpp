#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Meal Planner and Rater");
    w.show();
    Food foodData;
    foodData.readCsvFile();
    w.foodData = &(foodData);

    return a.exec();
}
