#include "about_program.h"
#include "ui_about_program.h"

About_Program::About_Program(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_Program)
{
    ui->setupUi(this);

    QPixmap pic("C:/Users/SoOM3a/Documents/untitled/logo.jpg");
    ui->label->setPixmap(pic);
    ui->label_2->setText(" Base on Qt 5.5.1 (MSVC 2012,64bit)\n\n Built in Dec 2015\n\nCopyRight 2014-2015 to FCIS . All reserved\n\n For Any issue connect us :- Team51_FCIS@gmail.com\n\n\n NO WARRANTY OF ANY KIND,INCLUDING THE WARRANTY OF DESIGN,\n MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. \n " );


}

About_Program::~About_Program()
{
    delete ui;
}



void About_Program::on_pushButton_clicked()
{
    close();
}
