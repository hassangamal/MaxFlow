#include "online_graph.h"
#include "ui_online_graph.h"

Online_Graph::Online_Graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Online_Graph)
{

    ui->setupUi(this);



}

Online_Graph::~Online_Graph()
{
    delete ui;
}



void Online_Graph::on_pushButton_clicked()
{
    close();
}
