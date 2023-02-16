#include "TGraph.h"

TGraph* HIG_21_001_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,   319.01,  1.02);
  graph->SetPoint(  1,   319.01,  1.51);
  graph->SetPoint(  2,   336.36,  2.25);
  graph->SetPoint(  3,   379.75,  2.49);
  graph->SetPoint(  4,   411.98,  3.18);
  graph->SetPoint(  5,   461.57,  5.09);
  graph->SetPoint(  6,   554.55,  6.42);
  graph->SetPoint(  7,   626.45,  7.50);
  graph->SetPoint(  8,   744.21,  8.58);
  graph->SetPoint(  9,   983.47, 12.36);  
  graph->SetPoint( 10,  1232.64, 18.26);  
  graph->SetPoint( 11,  1386.36, 21.45);  
  graph->SetPoint( 12,  1572.31, 26.51);  
  graph->SetPoint( 13,  1775.62, 33.87);  
  graph->SetPoint( 14,  1879.75, 39.28);  
  graph->SetPoint( 15,  1975.21, 43.45);  
  if(filled){
    graph->SetPoint(16, 1975.21, 62.00);
    graph->SetPoint(17,      91, 62.00);
    graph->SetPoint(18,      91,  1.02);
    graph->SetPoint(19,  319.01,  1.02);
  }
  return graph;
}

TGraph* HIG_21_001_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,   319.01,  1.02);
  graph->SetPoint(  1,   323.97,  2.44);
  graph->SetPoint(  2,   361.16,  3.18);
  graph->SetPoint(  3,   387.19,  4.11);
  graph->SetPoint(  4,   488.84,  5.44);
  graph->SetPoint(  5,   580.58,  6.52);
  graph->SetPoint(  6,   744.21,  8.14);
  graph->SetPoint(  7,   982.23,  9.51);
  graph->SetPoint(  8,  1232.64, 12.80);
  graph->SetPoint(  9,  1407.44, 16.05);  
  graph->SetPoint( 10,  1578.51, 20.56);  
  graph->SetPoint( 11,  1775.62, 27.44);  
  graph->SetPoint( 12,  1885.95, 33.19);  
  graph->SetPoint( 13,  1975.21, 37.31);  
  return graph;
}
