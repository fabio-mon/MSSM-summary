/* This can be used as a template for setting up inputs for MSSM_limits_*.C */

#include "TGraph.h"

TGraph* my_HIG_21_011_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 255.02, 4.44);
  graph->SetPoint( 1, 276.02, 4.68);
  graph->SetPoint( 2, 296.82, 4.98);
  graph->SetPoint( 3, 316.87, 4.80);
  graph->SetPoint( 4, 345.90, 3.92);
  graph->SetPoint( 5, 442.48, 2.40);
  graph->SetPoint( 6, 450.00, 1.00);
  if(filled){
    graph->SetPoint(7, 450.00, 0.40);
    graph->SetPoint(8, 255.02, 0.40);
    graph->SetPoint(9, 255.02, 4.44);
  }
  return graph;
}

TGraph* bbgg_138fb_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint(0, 297.1239173471913,5.244285084428088);
  graph->SetPoint(1, 396.6019300733798,3.9654979057802815);
  graph->SetPoint(2, 490.98557587463785,2.019315845756705);
  return graph;
}

TGraph* bbgg_300fb_exp(){
TGraph* graph = new TGraph();
graph->SetPoint(0, 297.7694442731142,5.966308351885743);
graph->SetPoint(1, 397.65714900418,4.805827175355393);
graph->SetPoint(2, 494.93457453377795,2.7887605271207225);
graph->SetPoint(3, 589.3934507875241,1.6165524709209356);
return graph;
}

TGraph* bbgg_1000fb_exp(){
TGraph* graph = new TGraph();
graph->SetPoint(0, 298.4509514586984,7.203144322939335);
graph->SetPoint(1, 398.45632377740304,5.949958085054707);
graph->SetPoint(2, 497.45577041129525,4.022878441799836);
graph->SetPoint(3, 595.6988374238789,2.7280132043269543);
graph->SetPoint(4, 687.2589963889926,1.2845375930552403);
return graph;
}

TGraph* bbgg_3000fb_exp(){
TGraph* graph = new TGraph();
graph->SetPoint(0, 298.8778647031753,8.48214417004747);
graph->SetPoint(1, 398.86994732974034,6.983134882621138);
graph->SetPoint(2, 498.4287026828372,5.162330744968112);
graph->SetPoint(3, 597.7002145265094,3.8146089052902368);
graph->SetPoint(4, 694.3604629686635,2.1325793173900256);
graph->SetPoint(5, 787.9825094585375,1.2094895672770087);
return graph;
}
