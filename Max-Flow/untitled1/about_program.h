#include<iostream>
#include <QDialog>
using namespace std ;
namespace Ui {
class About_Program;
}

class About_Program : public QDialog
{
    Q_OBJECT

public:
    explicit About_Program(QWidget *parent = 0);
    ~About_Program();

private slots:


    void on_pushButton_clicked();

private:
    Ui::About_Program *ui;
};
