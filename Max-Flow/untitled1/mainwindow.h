#include<iostream>
#include <QMainWindow>
#include<QVector>
#include<QQueue>
#include"welcome.h"
#include"numberofedges.h"
#include"online_graph.h"
#include"frotomax.h"
#include"globalvar.h"
#include"vector"
#include"about_program.h"
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public:
     bool BFS(long long s,  long long  e, vector<long long >& our_path);
    long long Max_Flow(long long   s , long long  e );
  void  take_graph();
  void Copygraph();

private slots:
    void on_actionAdd_Number_of_Nodes_triggered();

    void on_AddNode_clicked();

    void on_actionOnline_Graph_triggered();

    void on_Max_flow_clicked();

    void on_Get_paths_clicked();

    void on_pushButton_clicked();



    void on_actionAbout_Developer_2_triggered();

    void on_actionAbout_Program_triggered();

private:
    Ui::MainWindow *ui;
};



