#ifndef STATISTICSWINDOW_H
#define STATISTICSWINDOW_H

#include <QDialog>
#include "foodList.h"

namespace Ui {
class StatisticsWindow;
}

class StatisticsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit StatisticsWindow(QWidget *parent = nullptr);
    ~StatisticsWindow();

    QString *gender;
    int *age, *height, *weight;
    Food* data;

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::StatisticsWindow *ui;
};

#endif // STATISTICSWINDOW_H
