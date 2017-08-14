#include "numberofedges.h"
#include "ui_numberofedges.h"

NumberofEdges::NumberofEdges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumberofEdges)
{
    ui->setupUi(this);
}

NumberofEdges::~NumberofEdges()
{
    delete ui;

}

void NumberofEdges::on_OK_clicked()
{
    num_nods = ui->Num_NODES->text().toLong(0,10);
 num_edgs = ui->Num_Edges->text().toLong(0,10);
 if(num_edgs ==0 || num_nods<=1)
 {
    QMessageBox::warning((this),"Erorr","It's Impossible .");
 }
 else
 {
 LNEdges = num_edgs;
 cls++;
   close();
 }
}
