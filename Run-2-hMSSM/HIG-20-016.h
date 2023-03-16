/* This can be used as a template for setting up inputs for MSSM_limits_*.C */

#include "TGraph.h"

TGraph* HIG_20_016_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 130.98, 9.10);
  graph->SetPoint( 1, 155.24, 8.27);
  graph->SetPoint( 2, 160.22, 9.63);
  graph->SetPoint( 3, 164.88,10.03);
  graph->SetPoint( 4, 168.92, 8.47);
  graph->SetPoint( 5, 182.61, 7.48);
  graph->SetPoint( 6, 205.00, 6.24);
  graph->SetPoint( 7, 213.09, 6.20);
  graph->SetPoint( 8, 236.42, 6.14);
  graph->SetPoint( 9, 263.48, 5.44);
  graph->SetPoint(10, 287.11, 5.21);
  graph->SetPoint(11, 317.28, 4.78);
  graph->SetPoint(12, 349.94, 4.46);
  graph->SetPoint(13, 379.49, 3.53);
  graph->SetPoint(14, 405.92, 2.68);
  graph->SetPoint(15, 421.78, 2.07);
  graph->SetPoint(16, 438.58, 1.83);
  graph->SetPoint(17, 445.42, 1.53);
  graph->SetPoint(18, 462.84, 1.34);
  graph->SetPoint(19, 470.62, 1.04);
  graph->SetPoint(20, 481.81, 0.95);
  graph->SetPoint(21, 487.10, 0.80);
  if(filled){
    graph->SetPoint(22, 487.10, 0.80);
    graph->SetPoint(23, 130.98, 0.80);
    graph->SetPoint(24, 130.98, 9.10);
  }
  return graph;
}

TGraph* HIG_20_016_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 130.98,10.90);
  graph->SetPoint( 1, 144.35, 9.35);
  graph->SetPoint( 2, 161.77,10.41);
  graph->SetPoint( 3, 164.26,12.30);
  graph->SetPoint( 4, 184.79, 9.76);
  graph->SetPoint( 5, 186.34, 8.60);
  graph->SetPoint( 6, 204.38, 7.50);
  graph->SetPoint( 7, 214.33, 6.69);
  graph->SetPoint( 8, 239.22, 5.91);
  graph->SetPoint( 9, 266.59, 4.86);
  graph->SetPoint(10, 288.98, 4.57);
  graph->SetPoint(11, 317.28, 4.48);
  graph->SetPoint(12, 349.94, 4.28);
  graph->SetPoint(13, 376.69, 3.53);
  graph->SetPoint(14, 406.23, 2.69);
  graph->SetPoint(15, 426.45, 2.11);
  graph->SetPoint(16, 445.42, 1.90);
  graph->SetPoint(17, 456.93, 1.54);
  graph->SetPoint(18, 479.95, 1.37);
  graph->SetPoint(19, 489.59, 1.06);
  graph->SetPoint(20, 520.07, 0.80);
  return graph;
}
