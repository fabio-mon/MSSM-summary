/* This can be used as a template for setting up inputs for MSSM_limits_*.C */

#include "TGraph.h"

TGraph* HIG_21_011_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 255.02, 4.44);
  graph->SetPoint( 1, 276.02, 4.68);
  graph->SetPoint( 2, 296.82, 4.98);
  graph->SetPoint( 3, 316.87, 4.80);
  graph->SetPoint( 4, 345.90, 3.92);
  graph->SetPoint( 5, 442.48, 2.40);
  if(filled){
    graph->SetPoint(6, 442.48, 0.40);
    graph->SetPoint(7, 255.02, 0.40);
    graph->SetPoint(8, 255.02, 4.44);
  }
  return graph;
}

TGraph* HIG_21_011_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 255.53, 4.68);
  graph->SetPoint( 1, 275.89, 4.61);
  graph->SetPoint( 2, 295.78, 4.31);
  graph->SetPoint( 3, 315.96, 4.21);
  graph->SetPoint( 4, 346.50, 4.26);
  graph->SetPoint( 5, 439.88, 2.03);
  return graph;
}
