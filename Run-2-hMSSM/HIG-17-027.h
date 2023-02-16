#include "TGraph.h"

TGraph* HIG_17_027_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,401.83, 1.04);
  graph->SetPoint( 1,410.38, 1.20);
  graph->SetPoint( 2,429.91, 1.20);
  graph->SetPoint( 3,440.28, 1.30);
  graph->SetPoint( 4,451.88, 1.32);
  graph->SetPoint( 5,461.65, 1.40);
  graph->SetPoint( 6,485.45, 1.40);
  graph->SetPoint( 7,501.93, 1.54);
  graph->SetPoint( 8,510.17, 1.70);
  graph->SetPoint( 9,522.38, 1.66);
  graph->SetPoint(10,532.15, 1.48);
  graph->SetPoint(11,549.85, 1.21);
  graph->SetPoint(12,559.92, 1.10);
  graph->SetPoint(13,580.06, 1.10);
  graph->SetPoint(14,590.13, 1.00);
  graph->SetPoint(15,606.00, 1.16);
  graph->SetPoint(16,615.77, 1.31);
  graph->SetPoint(17,620.35, 1.40);
  graph->SetPoint(18,634.38, 1.44);
  graph->SetPoint(19,656.36, 1.50);
  graph->SetPoint(20,670.09, 1.60);
  graph->SetPoint(21,680.16, 1.50);
  graph->SetPoint(22,699.69, 1.50);
  if(filled){
    graph->SetPoint(23,699.69,  1.04);
    graph->SetPoint(24,401.83,  1.04);
  }
  return graph;
}

TGraph* HIG_17_027_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,400.31, 2.30);
  graph->SetPoint( 1,410.07, 2.40);
  graph->SetPoint( 2,429.91, 2.20);
  graph->SetPoint( 3,439.98, 2.20);
  graph->SetPoint( 4,452.80, 2.07);
  graph->SetPoint( 5,469.89, 1.90);
  graph->SetPoint( 6,479.96, 1.90);
  graph->SetPoint( 7,490.03, 1.80);
  graph->SetPoint( 8,510.17, 1.80);
  graph->SetPoint( 9,530.32, 1.60);
  graph->SetPoint(10,540.39, 1.60);
  graph->SetPoint(11,559.92, 1.40);
  graph->SetPoint(12,569.99, 1.40);
  graph->SetPoint(13,589.83, 1.20);
  graph->SetPoint(14,609.97, 1.20);
  graph->SetPoint(15,620.04, 1.10);
  graph->SetPoint(16,630.42, 1.10);
  graph->SetPoint(17,640.18, 1.00);
  graph->SetPoint(18,650.25, 1.00);
  graph->SetPoint(19,660.02, 0.90);
  graph->SetPoint(20,680.16, 0.90);
  graph->SetPoint(21,690.23, 0.80);
  graph->SetPoint(22,700.00, 0.80);
  return graph;
}
