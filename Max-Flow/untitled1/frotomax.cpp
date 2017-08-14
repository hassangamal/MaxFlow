#include "frotomax.h"
#include "ui_frotomax.h"

FroToMAx::FroToMAx(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FroToMAx)
{

    ui->setupUi(this);

}

FroToMAx::~FroToMAx()
{
        delete ui;

}

void FroToMAx::on_pushButton_clicked()
{
    From = ui->from->text().toLong(0,10);
    To = ui->to->text().toLong(0,10);
     cls++;
    close();
}
