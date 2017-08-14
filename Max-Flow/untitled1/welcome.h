#include<iostream>
#include"globalvar.h"
using namespace std ;
#include <QDialog>

namespace Ui {
class Welcome;
}

class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

private slots:
    void on_Start_clicked();

private:
    Ui::Welcome *ui;
};
