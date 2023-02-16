#include "TGraph.h"

TGraph* HIG_18_010_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,129.62, 14.40);
  graph->SetPoint( 1,137.60, 10.80);
  graph->SetPoint( 2,149.56, 10.73);
  graph->SetPoint( 3,160.19, 9.33 );
  graph->SetPoint( 4,165.95, 11.80);
  graph->SetPoint( 5,170.38, 14.93);
  graph->SetPoint( 6,176.14, 12.07);
  graph->SetPoint( 7,186.32, 9.73 );
  graph->SetPoint( 8,195.18, 10.20);
  graph->SetPoint( 9,200.50, 8.73 );
  graph->SetPoint(10,206.70, 10.40);
  graph->SetPoint(11,214.67, 12.60);
  graph->SetPoint(12,226.63, 17.20);
  graph->SetPoint(13,234.16, 15.00);
  graph->SetPoint(14,239.92, 12.67);
  graph->SetPoint(15,247.45, 14.60);
  graph->SetPoint(16,254.98, 16.47);
  graph->SetPoint(17,275.36, 17.80);
  graph->SetPoint(18,287.32, 16.73);
  graph->SetPoint(19,295.29, 15.13);
  graph->SetPoint(20,310.35, 17.93);
  graph->SetPoint(21,320.10, 17.07);
  graph->SetPoint(22,332.50, 20.60);
  graph->SetPoint(23,344.02, 23.00);
  graph->SetPoint(24,353.77, 25.67);
  graph->SetPoint(25,364.40, 23.93);
  graph->SetPoint(26,378.57, 27.40);
  graph->SetPoint(27,384.33, 31.13);
  graph->SetPoint(28,394.96, 35.60);
  graph->SetPoint(29,401.61, 32.20);
  graph->SetPoint(30,408.25, 28.73);
  graph->SetPoint(31,412.68, 26.20);
  graph->SetPoint(32,420.65, 24.20);
  graph->SetPoint(33,429.07, 27.40);
  graph->SetPoint(34,435.27, 31.53);
  graph->SetPoint(35,444.57, 35.53);
  graph->SetPoint(36,452.99, 31.13);
  graph->SetPoint(37,459.19, 26.60);
  graph->SetPoint(38,465.39, 23.67);
  graph->SetPoint(39,479.13, 24.60);
  graph->SetPoint(40,487.54, 27.13);
  graph->SetPoint(41,499.50, 31.67);
  graph->SetPoint(42,510.58, 36.33);
  graph->SetPoint(43,524.75, 35.40);
  graph->SetPoint(44,535.83, 37.93);
  graph->SetPoint(45,543.80, 41.53);
  graph->SetPoint(46,553.10, 46.87);
  graph->SetPoint(47,564.17, 52.20);
  graph->SetPoint(48,579.68, 56.20);
  graph->SetPoint(49,594.74, 59.87);
  if(filled){
    graph->SetPoint(50,594.74, 60.00);
    graph->SetPoint(51,129.62, 60.00);
    graph->SetPoint(52,129.62, 14.40);
  }
  return graph;
}

TGraph* HIG_18_010_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,129.62, 12.00);
  graph->SetPoint( 1,139.37, 10.67);
  graph->SetPoint( 2,150.00, 10.00);
  graph->SetPoint( 3,167.72, 10.33);
  graph->SetPoint( 4,186.32, 11.20);
  graph->SetPoint( 5,206.70, 12.07);
  graph->SetPoint( 6,224.42, 13.13);
  graph->SetPoint( 7,240.37, 14.33);
  graph->SetPoint( 8,258.08, 15.67);
  graph->SetPoint( 9,281.12, 17.20);
  graph->SetPoint(10,317.44, 19.47);
  graph->SetPoint(11,361.74, 24.07);
  graph->SetPoint(12,409.58, 27.67);
  graph->SetPoint(13,452.10, 32.27);
  graph->SetPoint(14,495.51, 36.53);
  graph->SetPoint(15,542.47, 41.53);
  graph->SetPoint(16,599.17, 48.07);
  return graph;
}
