#include <QDialog>
#include<iostream>
#include<QMessageBox>
#include"globalvar.h"

using namespace std ;
namespace Ui {
class FroToMAx;
}

class FroToMAx : public QDialog
{
    Q_OBJECT

public:
    explicit FroToMAx(QWidget *parent = 0);
    ~FroToMAx();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FroToMAx *ui;
};
