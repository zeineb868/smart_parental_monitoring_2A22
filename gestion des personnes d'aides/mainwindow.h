#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"personned_aides.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Ajouter_Employe_3_clicked();
    void on_supprimer_clicked();

private:
    Ui::MainWindow *ui;
     Personned_aides P;
};

#endif // MAINWINDOW_H
