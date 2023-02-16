/* This can be used as a template for setting up inputs for MSSM_limits_nh125.C */

#include "TGraph.h"

TGraph* HIG_XX_XXX_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,,);
  graph->SetPoint( 1,,);
  graph->SetPoint( 2,,);
  graph->SetPoint( 3,,);
  graph->SetPoint( 4,,);
  graph->SetPoint( 5,,);
  graph->SetPoint( 6,,);
  graph->SetPoint( 7,,);
  graph->SetPoint( 8,,);
  graph->SetPoint( 9,,);
  graph->SetPoint(10,,);
  graph->SetPoint(11,,);
  graph->SetPoint(12,,);
  graph->SetPoint(13,,);
  graph->SetPoint(14,,);
  graph->SetPoint(15,,);
  graph->SetPoint(16,,);
  graph->SetPoint(17,,);
  graph->SetPoint(18,,);
  if(filled){
    graph->SetPoint(16,,);
    graph->SetPoint(17,,);
    graph->SetPoint(18,,);
  }
  return graph;
}

TGraph* HIG_XX_XX_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,,);
  graph->SetPoint( 1,,);
  graph->SetPoint( 2,,);
  graph->SetPoint( 3,,);
  graph->SetPoint( 4,,);
  graph->SetPoint( 5,,);
  graph->SetPoint( 6,,);
  graph->SetPoint( 7,,);
  graph->SetPoint( 8,,);
  graph->SetPoint( 9,,);
  graph->SetPoint(10,,);
  graph->SetPoint(11,,);
  graph->SetPoint(12,,);
  graph->SetPoint(13,,);
  graph->SetPoint(14,,);
  graph->SetPoint(15,,);
  graph->SetPoint(16,,);
  graph->SetPoint(17,,);
  graph->SetPoint(18,,);
  return graph;
}
