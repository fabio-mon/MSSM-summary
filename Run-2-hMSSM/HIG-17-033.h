#include "TGraph.h"

TGraph* HIG_17_033_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 130.13, 8.87);
  graph->SetPoint( 1, 134.79, 8.85);
  graph->SetPoint( 2, 144.85, 7.79);
  graph->SetPoint( 3, 151.72, 7.50);
  graph->SetPoint( 4, 154.91, 7.20);
  graph->SetPoint( 5, 160.79, 8.49);
  graph->SetPoint( 6, 164.96, 8.91);
  graph->SetPoint( 7, 174.77, 9.08);
  graph->SetPoint( 8, 176.98, 6.50);
  graph->SetPoint( 9, 184.83, 5.89);
  graph->SetPoint(10, 194.88, 5.87);
  graph->SetPoint(11, 196.11, 5.24);
  graph->SetPoint(12, 206.90, 4.75);
  graph->SetPoint(13, 209.11, 4.24);
  graph->SetPoint(14, 225.05, 3.47);
  graph->SetPoint(15, 235.11, 3.46);
  graph->SetPoint(16, 244.67, 3.26);
  graph->SetPoint(17, 254.98, 2.75);
  graph->SetPoint(18, 264.79, 2.54);
  graph->SetPoint(19, 275.09, 2.79);
  graph->SetPoint(20, 305.01, 3.00);
  graph->SetPoint(21, 314.09, 3.25);
  graph->SetPoint(22, 324.63, 3.39);
  graph->SetPoint(23, 334.93, 3.61);
  graph->SetPoint(24, 344.74, 3.63);
  graph->SetPoint(25, 363.63, 3.25);
  graph->SetPoint(26, 392.33, 2.25);
  graph->SetPoint(27, 410.23, 1.75);
  graph->SetPoint(28, 428.14, 1.27);
  graph->SetPoint(29, 436.48, 0.93);
  graph->SetPoint(30, 437.21, 0.80);
  if(filled){
    graph->SetPoint(31, 130.13, 0.80);
    graph->SetPoint(32, 130.13, 8.87);
  }
  return graph;
}

TGraph* HIG_17_033_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0, 109.13, 19.79);
  graph->SetPoint( 1, 113.18, 14.33);
  graph->SetPoint( 2, 118.26, 11.63);
  graph->SetPoint( 3, 120.96, 10.09);
  graph->SetPoint( 4, 125.35,  8.24);
  graph->SetPoint( 5, 135.16,  7.04);
  graph->SetPoint( 6, 153.08,  7.26);
  graph->SetPoint( 7, 154.09,  7.75);
  graph->SetPoint( 8, 164.91,  8.44);
  graph->SetPoint( 9, 183.84,  6.75);
  graph->SetPoint(10, 206.49,  5.79);
  graph->SetPoint(11, 225.08,  5.47);
  graph->SetPoint(12, 234.89,  5.82);
  graph->SetPoint(13, 264.64,  4.68);
  graph->SetPoint(14, 304.87,  4.33);
  graph->SetPoint(15, 345.10,  3.94);
  graph->SetPoint(16, 362.68,  3.26);
  graph->SetPoint(17, 383.98,  2.52);
  graph->SetPoint(18, 392.43,  1.84);
  graph->SetPoint(19, 396.15,  1.26);
  graph->SetPoint(20, 397.50,  0.95);
  graph->SetPoint(21, 424.54,  0.63);
  graph->SetPoint(22, 443.81,  0.55);
  graph->SetPoint(23, 443.81,  0.50);
  return graph;
}
