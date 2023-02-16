#include "TGraph.h"

TGraph* HIG_16_018_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,300.06, 27.98);
  graph->SetPoint( 1,335.21, 32.72);
  graph->SetPoint( 2,349.69, 34.69);
  graph->SetPoint( 3,362.78, 33.02);
  graph->SetPoint( 4,399.31, 28.34);
  graph->SetPoint( 5,451.00, 26.87);
  graph->SetPoint( 6,499.25, 25.51);
  graph->SetPoint( 7,533.02, 33.82);
  graph->SetPoint( 8,562.66, 41.33);
  graph->SetPoint( 9,599.87, 50.69);
  graph->SetPoint(10,628.82, 55.55);
  graph->SetPoint(11,655.70, 60.00);
  if(filled){
    graph->SetPoint(12,300.06,60.00);
    graph->SetPoint(13,300.06,27.98);
  }
  return graph;
}

TGraph* HIG_16_018_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,300.06, 28.47);
  graph->SetPoint( 1,335.21, 29.88);
  graph->SetPoint( 2,362.78, 30.50);
  graph->SetPoint( 3,392.42, 30.50);
  graph->SetPoint( 4,422.74, 31.73);
  graph->SetPoint( 5,460.65, 33.70);
  graph->SetPoint( 6,501.32, 35.98);
  graph->SetPoint( 7,547.49, 41.33);
  graph->SetPoint( 8,590.23, 46.38);
  graph->SetPoint( 9,628.82, 51.74);
  graph->SetPoint(10,664.66, 56.97);
  graph->SetPoint(11,685.34, 59.99);
  return graph;
}
