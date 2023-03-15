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
  graph->SetPoint( 0, 129.89, 8.21);
  graph->SetPoint( 1, 134.79, 8.21);
  graph->SetPoint( 2, 143.87, 6.76);
  graph->SetPoint( 3, 153.68, 7.45);
  graph->SetPoint( 4, 163.98, 7.74);
  graph->SetPoint( 5, 173.79, 7.64);
  graph->SetPoint( 6, 183.60, 6.94);
  graph->SetPoint( 7, 196.85, 5.97);
  graph->SetPoint( 8, 208.13, 5.48);
  graph->SetPoint( 9, 226.77, 4.77);
  graph->SetPoint(10, 235.60, 4.52);
  graph->SetPoint(11, 244.92, 4.09);
  graph->SetPoint(12, 255.71, 3.47);
  graph->SetPoint(13, 266.99, 3.07);
  graph->SetPoint(14, 274.35, 3.00);
  graph->SetPoint(15, 285.63, 2.97);
  graph->SetPoint(16, 304.77, 2.95);
  graph->SetPoint(17, 313.59, 2.96);
  graph->SetPoint(18, 323.41, 3.00);
  graph->SetPoint(19, 335.18, 3.21);
  graph->SetPoint(20, 346.46, 3.05);
  graph->SetPoint(21, 375.89, 2.18);
  graph->SetPoint(22, 393.55, 1.70);
  graph->SetPoint(23, 409.74, 1.39);
  graph->SetPoint(24, 423.97, 1.15);
  graph->SetPoint(25, 436.23, 0.81);
  return graph;
}
