#include "TGraph.h"

TGraph* Eligibility(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 123.20, 61.00);
  graph->SetPoint( 1, 125.13, 52.09);
  graph->SetPoint( 2, 125.13, 45.23);
  graph->SetPoint( 3, 125.13, 38.66);
  graph->SetPoint( 4, 127.06, 27.85);
  graph->SetPoint( 5, 129.00, 21.28);
  graph->SetPoint( 6, 136.73, 15.59);
  graph->SetPoint( 7, 156.06, 10.48);
  graph->SetPoint( 8, 192.79,  8.15);
  graph->SetPoint( 9, 273.98,  6.83);
  graph->SetPoint(10, 405.43,  6.32);
  graph->SetPoint(11, 587.15,  6.18);
  graph->SetPoint(12, 795.92,  6.10);
  graph->SetPoint(13, 969.91,  6.03);
  graph->SetPoint(14,1174.82,  6.03);
  graph->SetPoint(15,1375.86,  6.03);
  graph->SetPoint(16,1576.91,  5.96);
  graph->SetPoint(17,1735.42,  5.96);
  graph->SetPoint(18,1921.00,  5.96);
  graph->SetPoint(19,2148.59,  5.96);
  graph->SetPoint(20,2148.59,  0.90);
  graph->SetPoint(21,  89.00,  0.90);
  graph->SetPoint(22,  89.00, 61.00);
  graph->SetPoint(23, 123.20, 61.00);
  return graph;
}
