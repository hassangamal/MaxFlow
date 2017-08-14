#include "welcome.h"
#include "ui_welcome.h"

Welcome::Welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
     QPixmap wel ("C:/Users/SoOM3a/Documents/untitled1/Welcome.png");
       ui->label_2->setPixmap(wel);

}

Welcome::~Welcome()
{
    if(cls==1)
    {
    delete ui;
       cls=0;
    }
    else
    {
        delete ui;
        exit(0);


    }
}

void Welcome::on_Start_clicked()
{
    close();
    cls++;

}
