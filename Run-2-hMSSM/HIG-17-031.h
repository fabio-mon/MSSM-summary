#include "TGraph.h"

TGraph* HIG_17_031_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(0,523.12,59.8);
  graph->SetPoint(1,523.62,8.55);
  graph->SetPoint(2,524.64,5.85);
  graph->SetPoint(3,527.17,3.79);
  graph->SetPoint(4,531.74,2.75);
  graph->SetPoint(5,543.41,1.88);
  graph->SetPoint(6,559.13,1.44);
  graph->SetPoint(7,578.91,1.18);
  graph->SetPoint(8,600.22,1.01);
  if(filled){
    graph->SetPoint(9,125.,1.01);
    graph->SetPoint(10,125.,59.8);
    graph->SetPoint(11,523.62,59.8);
  }
  return graph;
}

TGraph* HIG_17_031_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint(0,389.20,59.8);
  graph->SetPoint(1,390.22,5.85);
  graph->SetPoint(2,391.23,3.80);
  graph->SetPoint(3,393.26,2.75);
  graph->SetPoint(4,400.36,1.88);
  graph->SetPoint(5,411.01,1.45);
  graph->SetPoint(6,425.22,1.18);
  graph->SetPoint(7,440.43,1.01);
  return graph;
}
