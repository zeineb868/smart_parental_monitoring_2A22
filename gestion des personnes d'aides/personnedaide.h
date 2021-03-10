#ifndef PERSONNEDAIDE_H
#define PERSONNEDAIDE_H

#include <QMainWindow>

namespace Ui {
class personnedaide;
}

class personnedaide : public QMainWindow
{
    Q_OBJECT

public:
    explicit personnedaide(QWidget *parent = nullptr);
    ~personnedaide();

private:
    Ui::personnedaide *ui;
};

#endif // PERSONNEDAIDE_H
