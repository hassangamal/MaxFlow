#include "globalvar.h"

long long num_edgs = 0 , num_nods=0 , LNEdges=0 ;
long long From , To , Cost , show_edge=0 ,Max_flow=0, sz=0 ;
int cls=0 , check_graph=0 ;

 vector<long long> all_paths[10007];
 vector<vector <long long> > graph;
vector<vector <long long> > Copy_graph;
