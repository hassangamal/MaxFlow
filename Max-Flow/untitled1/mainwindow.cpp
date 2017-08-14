#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->Get_paths->setDisabled(1);
     ui->Max_flow->setDisabled(1);
     ui->label->setDisabled(1);
     ui->Number_Nodes->setDisabled(1);
     ui->AddNode->setDisabled(1);
  Welcome Hi ;
  Hi.exec();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdd_Number_of_Nodes_triggered()
{

 NumberofEdges Enter ;
Enter.exec();
if(cls)
{
    cls=0; ////////////check
ui->Number_Nodes->setText(QString::number(LNEdges,10));
    ui->Number_Nodes->setEnabled(1);
    ui->label->setEnabled(1);
    ui->AddNode->setEnabled(1);
}
}

void MainWindow::on_AddNode_clicked()
{


    show_edge = ui->Number_Nodes->text().toLong(0,10);
    From = ui->linet_from->text().toLong(0,10);
    To = ui->linet_T->text().toLong(0,10);
    Cost = ui->lineT_cost->text().toLong(0,10);

     if (From==To)
    {
        QMessageBox::warning((this),"Erorr","Can't add edge on the same Node .");
    }
    else
    {
       take_graph();

    }

}

void MainWindow::on_actionOnline_Graph_triggered()
{
    Online_Graph graph ;
    graph.exec();
}

long long MainWindow::Max_Flow(  long long   s , long long  e )
{
    long long   max = 0 ,flow;
    vector<long long> our_path(num_nods) ;


      sz = 0;

    while(BFS(s,e,our_path))
    {

        flow  = INT_MAX ;
        for(int i = e ; i !=s ; i = our_path[i] )
         {
               all_paths[sz].push_back(our_path[i]) ;

               flow  = min(flow , Copy_graph[our_path[i]][i]) ;
         }
        sz++;
        for(int i = e ; i !=s ; i = our_path[i] )
         {
             Copy_graph[our_path[i]][i] -=flow;
            Copy_graph[i][our_path[i]] += flow ;
         }
        max += flow ;

    }

    return  max ;
}

void MainWindow::Copygraph()
{

         Copy_graph=graph;

}
void MainWindow::take_graph()
{

          graph.resize(num_nods);
        Copy_graph.resize(num_nods);

           for(int i=0;i<num_nods;i++)
            for(int  j=0;j<num_nods;j++)
            {
                graph[i].push_back(0);
               Copy_graph[i].push_back(0);
            }

              if(From >=0 && From <num_nods && To >=0 && To <num_nods )
              {
              graph[From][To] = Cost ;

                           show_edge--;
              ui->Number_Nodes->setText(QString::number(show_edge,10));
              ui->linet_from->setText("0");
              ui->linet_T->setText("0");
              ui->lineT_cost->setText("0");
                 }
              else
              {
                  QMessageBox::warning((this),"Erorr","Not in the range! try again this node hasn't been added");
              }
              if(!show_edge)
              {
                  ui->Get_paths->setEnabled(1);
                  ui->Max_flow->setEnabled(1);
                  ui->label->setDisabled(1);
                  ui->Number_Nodes->setDisabled(1);
                  ui->AddNode->setDisabled(1);
              }

 }

bool MainWindow::BFS( long long s,  long long  e, vector<long long >& our_path)
{
    vector<bool> vis(num_nods);
    QQueue<int> q ;
    for(int i=0;i<num_nods;i++) vis[i] = false ;

    q.push_back(s);
    our_path[s] = -1 ;
    vis[s] = true ;
    while(!q.empty())
    {
      int  node = q.front() ;
      q.pop_front();
      for(long long i=0;i<Copy_graph[node].size();i++)
        {
         if(!vis[i] && Copy_graph[node][i] > 0)
            {

               vis[i] =true ;
               q.push_back(i) ;
               our_path[i] = node ;
            }
        }

    }
    if(vis[e])  return true ;
    return false ;
}



void MainWindow::on_Max_flow_clicked()
{
    FroToMAx FMaxTO;
    FMaxTO.exec();

   if(cls && From >= 0 &&From <num_nods && To>=0 && To < num_nods && From!=To  )
    {
       cls=0 ; ///////// check
         Copygraph();
    Max_flow= Max_Flow(From,To);
        ui->Answer->clear();
        ui->Answer->appendPlainText( "the maximam  flow Between  " +QString::number(From,10) +" and "+QString::number(To,10)+" is :" +QString::number(Max_flow,10));

        //////////////////////////memset 0 /////////////////////////////
        for(int  i=0;i<sz;i++)
        {
              all_paths[i].clear();
        }
        /////////////////////////////////////////////////////////////////////
    }
    else if (From==To && From < 0 && From >=num_nods && To<0 && To >= num_nods)
    {
        QMessageBox::warning((this),"Invalid" ,"you Enter  invalid  start  or  end!! try  again");

    }

 }


void MainWindow::on_Get_paths_clicked()
{

    FroToMAx findpath ;
    findpath.exec();
    if(cls && From!=To && (From >= 0 &&From <num_nods&& To>=0 && To < num_nods) )
    {
        cls=0; //////////check
        ui->Answer->clear();
        ui->Answer->appendPlainText("This's All Paths\n");
       Copygraph();
            Max_flow= Max_Flow(From,To);
        for(int  i=0;i<sz;i++)
        {
           for(int j =  all_paths[i].size()-1 ; j>=0 ; j--)
           {

              ui->Answer->insertPlainText(QString::number(all_paths[i][j],10)+"--->");
           }
             ui->Answer->insertPlainText(QString::number(To,10)+"\n");
        }
     }
    else if (From==To && From < 0 && From >=num_nods && To<0 && To >= num_nods)
    {
        QMessageBox::warning((this),"Invalid" ,"you Enter  invalid  start  or  end!! try  again");

    }
    //////////////////////////memset 0 /////////////////////////////
    for(int  i=0;i<sz;i++)
    {
          all_paths[i].clear();
    }
    /////////////////////////////////////////////////////////////////////
}

void MainWindow::on_pushButton_clicked()
{
     num_edgs = 0 , num_nods=0 , LNEdges=0 ,show_edge=0 ,Max_flow=0, sz=0 , cls=0 , check_graph=0 ;


     graph.clear();
    Copy_graph.clear();
    ui->Number_Nodes->setText("0");
    ui->Get_paths->setDisabled(1);
    ui->Max_flow->setDisabled(1);
    ui->label->setDisabled(1);
    ui->Number_Nodes->setDisabled(1);
    ui->AddNode->setDisabled(1);
    ui->linet_from->setText("0");
    ui->linet_T->setText("0");
    ui->lineT_cost->setText("0");
    ui->Answer->clear();
    for(int  i=0;i<sz;i++)
    {
          all_paths[i].clear();
    }


}



void MainWindow::on_actionAbout_Developer_2_triggered()
{

    QMessageBox::information((this),"Information about Team"," <h3>  Team :-  <br></h3> "
        " <h4> Abdelrahaman Hassan Mohamed (leader&Dev) </h4>  "
        " <h4>Hassan gmal kamal ( Dev )</h4>"
        " <h4>AbdelRahman Ahmed Jr ( Dev )</h4>"
        "<h4> Abdelrahaman Mohamed Ashraf ( GUI )</h4>"
        "<h4>Abdelrahaman Mohamed Esmail ( GUI )</h4>");
}

void MainWindow::on_actionAbout_Program_triggered()
{
    About_Program about_pro;
    about_pro.exec();
}
