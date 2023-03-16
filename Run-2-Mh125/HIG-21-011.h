/* This can be used as a template for setting up inputs for MSSM_limits_*.C */

#include "TGraph.h"

TGraph* HIG_21_011_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 256.75, 4.83);
  graph->SetPoint( 1, 277.04, 4.80);
  graph->SetPoint( 2, 297.63, 5.07);
  graph->SetPoint( 3, 316.76, 4.81);
  graph->SetPoint( 4, 346.35, 3.84);
  graph->SetPoint( 5, 440.38, 1.81);
  if(filled){
    graph->SetPoint(6, 440.38, 0.50);
    graph->SetPoint(7, 256.75, 0.50);
    graph->SetPoint(8, 256.75, 4.83);
  }
  return graph;
}

TGraph* HIG_21_011_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 257.11, 5.09);
  graph->SetPoint( 1, 276.94, 4.72);
  graph->SetPoint( 2, 296.61, 4.31);
  graph->SetPoint( 3, 316.12, 4.16);
  graph->SetPoint( 4, 346.97, 4.19);
  return graph;
}
