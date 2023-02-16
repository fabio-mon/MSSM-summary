#include "TGraph.h"

TGraph* HIG_18_023_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,220.30, 1.51);
  graph->SetPoint( 1,236.93, 2.09);
  graph->SetPoint( 2,249.62, 2.49);
  graph->SetPoint( 3,263.22, 2.88);
  graph->SetPoint( 4,284.38, 3.36);
  graph->SetPoint( 5,300.10, 3.60);
  graph->SetPoint( 6,319.90, 3.50);
  graph->SetPoint( 7,340.00, 3.70);
  graph->SetPoint( 8,340.00, 3.59);
  graph->SetPoint( 9,344.38, 2.65);
  graph->SetPoint(10,348.01, 1.85);
  graph->SetPoint(11,350.13, 1.40);
  graph->SetPoint(12,358.74, 1.16);
  graph->SetPoint(13,365.84, 0.96);
  if(filled){
    graph->SetPoint(14,220.30,  0.96);
    graph->SetPoint(15,220.30,  1.51);
  }
  return graph;
}

TGraph* HIG_18_023_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,220.30, 1.91);
  graph->SetPoint( 1,236.93, 2.41);
  graph->SetPoint( 2,249.62, 2.65);
  graph->SetPoint( 3,263.22, 2.82);
  graph->SetPoint( 4,284.38, 2.92);
  graph->SetPoint( 5,307.36, 3.07);
  graph->SetPoint( 6,321.86, 3.25);
  graph->SetPoint( 7,332.29, 3.51);
  graph->SetPoint( 8,340.00, 3.70);
  graph->SetPoint( 9,344.69, 2.65);
  graph->SetPoint(10,348.77, 1.85);
  graph->SetPoint(11,350.73, 1.48);
  graph->SetPoint(12,358.74, 1.24);
  graph->SetPoint(13,366.90, 1.00);
  return graph;
}
