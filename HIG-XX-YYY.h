/* This can be used as a template for setting up inputs for MSSM_limits_*.C */

#include "TGraph.h"

TGraph* HIG_XX_YYY_obs(bool filled){
  // Function to return the observed cotour. Call with filled=true/false. 
  //
  // true  : use for a TGraph that should be plotted as filled
  // false : use for a TGraph that should be plotted as NOT filled 
  // 
  // Add the x-value in the column of second arguments; add the y-valuess in 
  // the column of third arguments to TGraph::SetPoint(*, *, *).
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
    // In case of filled=true add three points here to make sure the filled 
    // contour is closed and convex. 
    graph->SetPoint(19,,);
    graph->SetPoint(20,,);
    graph->SetPoint(21,,);
  }
  return graph;
}

TGraph* HIG_XX_YYY_exp(){
  // Function to return the expected cotour. These contours are not supposed to  
  // be filled. 
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
