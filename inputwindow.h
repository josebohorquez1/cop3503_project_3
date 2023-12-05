#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QDialog>
#include "statisticswindow.h"
#include "foodList.h"

namespace Ui {
class InputWindow;
}

class InputWindow : public QDialog
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = nullptr);
    ~InputWindow();

    QString gender;
    int age, height, weight = 0;
    Food* foodData;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_refreshButton_clicked();

private:
    Ui::InputWindow *ui;
    StatisticsWindow *statisticsWindow;
};

#endif // INPUTWINDOW_H
