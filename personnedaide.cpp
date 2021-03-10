#include "personnedaide.h"
#include "ui_personnedaide.h"

personnedaide::personnedaide(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::personnedaide)
{
    ui->setupUi(this);
}

personnedaide::~personnedaide()
{
    delete ui;
}
