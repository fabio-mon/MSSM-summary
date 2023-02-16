#include "TGraph.h"

TGraph* HIG_20_016_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,  109.13, 19.79);
  graph->SetPoint(  1,  113.18, 14.33);
  graph->SetPoint(  2,  118.26, 11.63);
  graph->SetPoint(  3,  120.96, 10.09);
  graph->SetPoint(  4,  125.35,  8.24);
  graph->SetPoint(  5,  135.16,  7.04);
  graph->SetPoint(  6,  153.08,  7.26);
  graph->SetPoint(  7,  154.09,  7.75);
  graph->SetPoint(  8,  164.91,  8.44);
  graph->SetPoint(  9,  183.84,  6.75);  
  graph->SetPoint( 10,  206.49,  5.79);  
  graph->SetPoint( 11,  225.08,  5.47);  
  graph->SetPoint( 12,  234.89,  5.82);  
  graph->SetPoint( 13,  264.64,  4.68);  
  graph->SetPoint( 14,  304.87,  4.33);  
  graph->SetPoint( 15,  345.10,  3.94);  
  graph->SetPoint( 16,  362.68,  3.26);  
  graph->SetPoint( 17,  383.98,  2.52);  
  graph->SetPoint( 18,  392.43,  1.84);  
  graph->SetPoint( 19,  396.15,  1.26);  
  graph->SetPoint( 20,  397.50,  0.95);  
  graph->SetPoint( 21,  424.54,  0.63);  
  graph->SetPoint( 22,  443.81,  0.55);  
  graph->SetPoint( 23,  443.81,  0.50);  
  if(filled){
    graph->SetPoint(24,  60.00,  0.50);
    graph->SetPoint(25,  60.00, 19.79);
    graph->SetPoint(26, 109.13, 19.79);
  }
  return graph;
}

TGraph* HIG_20_016_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint(  0,  113.18, 19.79);
  graph->SetPoint(  1,  117.92, 14.33);
  graph->SetPoint(  2,  120.62, 11.63);
  graph->SetPoint(  3,  125.35, 10.77);
  graph->SetPoint(  4,  130.09,  8.84);
  graph->SetPoint(  5,  144.29,  7.92);
  graph->SetPoint(  6,  160.18,  9.35);
  graph->SetPoint(  7,  165.58, 11.59);
  graph->SetPoint(  8,  176.06, 10.63);
  graph->SetPoint(  9,  189.25,  8.44);  
  graph->SetPoint( 10,  204.80,  7.02);  
  graph->SetPoint( 11,  226.10,  6.06);  
  graph->SetPoint( 12,  243.00,  4.71);  
  graph->SetPoint( 13,  270.72,  4.05);  
  graph->SetPoint( 14,  308.59,  3.82);  
  graph->SetPoint( 15,  345.77,  3.74);  
  graph->SetPoint( 16,  363.02,  3.13);  
  graph->SetPoint( 17,  380.93,  2.52);  
  graph->SetPoint( 18,  392.77,  1.84);  
  graph->SetPoint( 19,  398.85,  1.26);  
  graph->SetPoint( 20,  401.22,  0.95);  
  graph->SetPoint( 21,  427.92,  0.69);  
  graph->SetPoint( 22,  451.93,  0.59);  
  graph->SetPoint( 23,  471.53,  0.50);  
  graph->SetPoint( 24,  471.53,  0.55);  
  return graph;
}




























