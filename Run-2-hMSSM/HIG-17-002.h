#include "TGraph.h"

TGraph* HIG_17_002_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,230.00,1.00);
  graph->SetPoint( 1,229.18,1.04);
  graph->SetPoint( 2,230.21,1.09);
  graph->SetPoint( 3,233.90,1.16);
  graph->SetPoint( 4,239.45,1.21);
  graph->SetPoint( 5,245.00,1.24);
  graph->SetPoint( 6,252.19,1.29);
  graph->SetPoint( 7,256.92,1.34);
  graph->SetPoint( 8,260.41,1.40);
  graph->SetPoint( 9,264.73,1.45);
  graph->SetPoint(10,272.53,1.53);
  graph->SetPoint(11,282.19,1.55);
  graph->SetPoint(12,293.70,1.56);
  graph->SetPoint(13,306.03,1.61);
  graph->SetPoint(14,315.27,1.69);
  graph->SetPoint(15,322.47,1.78);
  graph->SetPoint(16,328.63,1.90);
  graph->SetPoint(17,337.26,2.00);
  graph->SetPoint(18,341.99,1.83);
  graph->SetPoint(19,345.68,1.71);
  graph->SetPoint(20,348.15,1.61);
  graph->SetPoint(21,355.14,1.53);
  graph->SetPoint(22,354.93,1.39);
  graph->SetPoint(23,359.86,1.29);
  graph->SetPoint(24,367.26,1.22);
  graph->SetPoint(25,371.99,1.19);
  graph->SetPoint(26,367.88,1.13);
  graph->SetPoint(27,363.15,1.08);
  graph->SetPoint(28,363.36,1.03);
  graph->SetPoint(29,364.79,1.00);
  if(filled){
    graph->SetPoint(31,203.00,1.00);
  }
  return graph;
}

TGraph* HIG_17_002_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,232.47,1.00);
  graph->SetPoint( 1,231.44,1.04);
  graph->SetPoint( 2,227.33,1.09);
  graph->SetPoint( 3,225.89,1.16);
  graph->SetPoint( 4,226.51,1.21);
  graph->SetPoint( 5,227.33,1.24);
  graph->SetPoint( 6,232.67,1.22);
  graph->SetPoint( 7,238.84,1.27);
  graph->SetPoint( 8,247.26,1.35);
  graph->SetPoint( 9,252.19,1.43);
  graph->SetPoint(10,257.33,1.54);
  graph->SetPoint(11,262.26,1.54);
  graph->SetPoint(12,262.88,1.48);
  graph->SetPoint(13,263.49,1.42);
  graph->SetPoint(14,267.60,1.38);
  graph->SetPoint(15,273.15,1.41);
  graph->SetPoint(16,277.26,1.43);
  graph->SetPoint(17,282.40,1.39);
  graph->SetPoint(18,292.67,1.41);
  graph->SetPoint(19,302.53,1.46);
  graph->SetPoint(20,312.40,1.49);
  graph->SetPoint(21,322.26,1.55);
  graph->SetPoint(22,332.12,1.58);
  graph->SetPoint(23,336.44,1.50);
  graph->SetPoint(24,335.62,1.40);
  graph->SetPoint(25,337.05,1.30);
  graph->SetPoint(26,340.75,1.24);
  graph->SetPoint(27,347.33,1.19);
  graph->SetPoint(28,343.42,1.14);
  graph->SetPoint(29,338.29,1.08);
  graph->SetPoint(30,336.23,1.03);
  graph->SetPoint(31,336.85,1.00);
  return graph;
}

TGraph* HIG_17_002_exp_two(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,237.19,1.77);
  graph->SetPoint( 1,232.26,1.75);
  graph->SetPoint( 2,232.26,1.69);
  graph->SetPoint( 3,227.74,1.62);
  graph->SetPoint( 4,227.12,1.56);
  graph->SetPoint( 5,223.42,1.48);
  graph->SetPoint( 6,218.49,1.40);
  graph->SetPoint( 7,215.62,1.32);
  graph->SetPoint( 8,218.49,1.26);
  graph->SetPoint( 9,221.99,1.24);
  graph->SetPoint(10,228.15,1.29);
  graph->SetPoint(11,231.64,1.35);
  graph->SetPoint(12,235.75,1.41);
  graph->SetPoint(13,239.25,1.46);
  graph->SetPoint(14,242.95,1.54);
  graph->SetPoint(15,239.86,1.60);
  graph->SetPoint(16,238.42,1.66);
  graph->SetPoint(17,237.81,1.72);
  return graph;
}
