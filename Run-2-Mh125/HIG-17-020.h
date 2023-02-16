#include "TGraph.h"

TGraph* HIG_17_020_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,   90.60,  5.62);
  graph->SetPoint(  1,  126.33,  5.32);
  graph->SetPoint(  2,  179.00,  5.40);
  graph->SetPoint(  3,  235.42,  6.13);
  graph->SetPoint(  4,  291.85,  5.69);
  graph->SetPoint(  5,  323.82,  4.37);
  graph->SetPoint(  6,  384.01,  6.13);
  graph->SetPoint(  7,  483.70,  8.39);
  graph->SetPoint(  8,  570.22,  9.42);
  graph->SetPoint(  9,  673.67, 10.29);  
  graph->SetPoint( 10,  765.83, 11.02);  
  graph->SetPoint( 11,  878.68, 12.70);  
  graph->SetPoint( 12,  991.54, 14.82);  
  graph->SetPoint( 13, 1085.58, 17.60);  
  graph->SetPoint( 14, 1166.46, 20.74);  
  graph->SetPoint( 15, 1260.50, 24.68);  
  graph->SetPoint( 16, 1352.66, 30.46);  
  graph->SetPoint( 17, 1441.07, 35.72);  
  graph->SetPoint( 18, 1525.71, 41.42);  
  graph->SetPoint( 19, 1610.34, 48.72);  
  graph->SetPoint( 20, 1679.94, 55.15);  
  graph->SetPoint( 21, 1711.91, 59.97);  
  if(filled){
    graph->SetPoint(22,1711.91, 60.00);
    graph->SetPoint(23,  90.60, 60.00);
    graph->SetPoint(24,  90.60,  5.62);
  }
  return graph;
}

TGraph* HIG_17_020_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,   90.60,  5.69);
  graph->SetPoint(  1,  126.33,  4.45);
  graph->SetPoint(  2,  179.00,  4.67);
  graph->SetPoint(  3,  235.42,  5.03);
  graph->SetPoint(  4,  291.85,  5.11);
  graph->SetPoint(  5,  344.51,  5.69);
  graph->SetPoint(  6,  400.94,  6.93);
  graph->SetPoint(  7,  483.70,  8.17);
  graph->SetPoint(  8,  570.22,  9.12);
  graph->SetPoint(  9,  673.67, 10.15);  
  graph->SetPoint( 10,  765.83, 11.39);  
  graph->SetPoint( 11,  878.68, 13.58);  
  graph->SetPoint( 12,  991.54, 16.14);  
  graph->SetPoint( 13, 1085.58, 18.69);  
  graph->SetPoint( 14, 1166.46, 22.20);  
  graph->SetPoint( 15, 1260.50, 25.93);  
  graph->SetPoint( 16, 1352.66, 31.48);  
  graph->SetPoint( 17, 1441.07, 36.96);  
  graph->SetPoint( 18, 1510.66, 41.42);  
  graph->SetPoint( 19, 1593.42, 48.72);  
  graph->SetPoint( 20, 1663.01, 55.15);  
  graph->SetPoint( 21, 1700.63, 59.97);  
  return graph;
}
