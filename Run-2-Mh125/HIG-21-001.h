#include "TGraph.h"

TGraph* HIG_21_001_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,   520.70,  6.22);
  graph->SetPoint(  1,   625.05,  8.23);
  graph->SetPoint(  2,   794.00,  9.61);
  graph->SetPoint(  3,   962.94, 12.55);
  graph->SetPoint(  4,  1176.60, 18.45);
  graph->SetPoint(  5,  1370.39, 23.31);
  graph->SetPoint(  6,  1555.90, 29.06);
  graph->SetPoint(  7,  1708.28, 35.83);
  graph->SetPoint(  8,  1857.35, 43.15);
  graph->SetPoint(  9,  1968.32, 50.67);  
  graph->SetPoint( 10,  2034.58, 56.12);  
  graph->SetPoint( 11,  2057.76, 60.00);  
  if(filled){
    graph->SetPoint(12,   60.00, 60.00);
    graph->SetPoint(13,   60.00,  1.00);
    graph->SetPoint(14,  520.70,  1.00);
    graph->SetPoint(15,  520.70,  6.22);
  }
  return graph;
}

TGraph* HIG_21_001_exp(){
  TGraph* graph = new TGraph();
//  graph->SetPoint(  0,    60.00,  1.00);
//  graph->SetPoint(  0,   520.70,  1.00);
  graph->SetPoint(  0,   520.70,  6.22);
  graph->SetPoint(  1,   625.05,  7.79);
  graph->SetPoint(  2,   794.00,  8.92);
  graph->SetPoint(  3,   962.94, 10.00);
  graph->SetPoint(  4,  1176.60, 12.60);
  graph->SetPoint(  5,  1370.39, 16.53);
  graph->SetPoint(  6,  1555.90, 21.84);
  graph->SetPoint(  7,  1708.28, 27.88);
  graph->SetPoint(  8,  1857.35, 35.69);
  graph->SetPoint(  9,  1968.32, 43.64);  
  graph->SetPoint( 10,  2059.42, 51.70);  
//  graph->SetPoint( 13,  2128.99, 60.00);  
  return graph;
}
