#include<iostream>
#include <QDialog>
#include<QString>
#include<QMessageBox>
#include"globalvar.h"
using namespace std ;
namespace Ui {
class NumberofEdges;
}

class NumberofEdges : public QDialog
{
    Q_OBJECT

public:
    explicit NumberofEdges(QWidget *parent = 0);
    ~NumberofEdges();

private slots:
    void on_OK_clicked();

private:
    Ui::NumberofEdges *ui;
};

