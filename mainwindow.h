#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "inputwindow.h"
#include <QMainWindow>
#include "foodList.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Food* foodData;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //std::vector<std::pair<QString, QString>> foodList;
    InputWindow *inputWindow;
};
#endif // MAINWINDOW_H
