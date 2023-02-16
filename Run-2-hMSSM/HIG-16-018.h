#include "TGraph.h"

TGraph* HIG_16_018_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,301.16,22.40);
  graph->SetPoint( 1,349.61,26.07);
  graph->SetPoint( 2,400.39,21.91);
  graph->SetPoint( 3,455.43,21.36);
  graph->SetPoint( 4,499.61,20.94);
  graph->SetPoint( 5,545.74,26.55);
  graph->SetPoint( 6,600.00,33.23);
  graph->SetPoint( 7,655.43,37.67);
  graph->SetPoint( 8,699.22,41.16);
  graph->SetPoint( 9,769.77,48.23);
  graph->SetPoint(10,830.62,54.32);
  graph->SetPoint(11,867.83,58.03);
  graph->SetPoint(12,887.21,60.00);
  if(filled){
    graph->SetPoint(13,301.16,60.00);
    graph->SetPoint(14,301.61,22.40);
  }
  return graph;
}

TGraph* HIG_16_018_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,301.16,22.74);
  graph->SetPoint( 1,341.47,23.61);
  graph->SetPoint( 2,398.06,23.82);
  graph->SetPoint( 3,455.43,25.44);
  graph->SetPoint( 4,510.47,27.28);
  graph->SetPoint( 5,568.22,30.39);
  graph->SetPoint( 6,627.91,33.75);
  graph->SetPoint( 7,685.27,37.15);
  graph->SetPoint( 8,739.92,42.13);
  graph->SetPoint( 9,787.21,46.91);
  graph->SetPoint(10,830.62,51.38);
  graph->SetPoint(11,871.71,55.57);
  graph->SetPoint(12,908.91,60.00);
  return graph;
}
