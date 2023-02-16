#include "TGraph.h"

TGraph* HIG_18_010_obs(bool filled){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,130.94, 17.32);
  graph->SetPoint( 1,135.61, 16.02);
  graph->SetPoint( 2,139.93, 14.81);
  graph->SetPoint( 3,149.64, 15.29);
  graph->SetPoint( 4,157.19, 13.80);
  graph->SetPoint( 5,165.83, 16.41);
  graph->SetPoint( 6,169.78, 19.11);
  graph->SetPoint( 7,174.10, 17.47);
  graph->SetPoint( 8,177.70, 15.73);
  graph->SetPoint( 9,180.58, 14.57);
  graph->SetPoint(10,189.93, 15.05);
  graph->SetPoint(11,197.12, 14.57);
  graph->SetPoint(12,200.00, 13.80);
  graph->SetPoint(13,213.31, 16.99);
  graph->SetPoint(14,226.98, 21.53);
  graph->SetPoint(15,234.89, 18.72);
  graph->SetPoint(16,239.93, 17.28);
  graph->SetPoint(17,245.32, 18.34);
  graph->SetPoint(18,248.20, 19.40);
  graph->SetPoint(19,254.68, 20.75);
  graph->SetPoint(20,259.71, 19.88);
  graph->SetPoint(21,267.27, 20.95);
  graph->SetPoint(22,274.82, 22.15);
  graph->SetPoint(23,289.21, 21.00);
  graph->SetPoint(24,294.96, 19.55);
  graph->SetPoint(25,303.60, 20.85);
  graph->SetPoint(26,310.07, 21.91);
  graph->SetPoint(27,320.86, 21.53);
  graph->SetPoint(28,329.86, 24.04);
  graph->SetPoint(29,342.45, 25.87);
  graph->SetPoint(30,350.00, 28.53);
  graph->SetPoint(31,365.11, 27.37);
  graph->SetPoint(32,375.18, 28.77);
  graph->SetPoint(33,384.17, 33.99);
  graph->SetPoint(34,394.96, 37.90);
  graph->SetPoint(35,405.04, 33.51);
  graph->SetPoint(36,410.07, 30.13);
  graph->SetPoint(37,415.11, 28.29);
  graph->SetPoint(38,425.18, 27.71);
  graph->SetPoint(39,432.73, 32.44);
  graph->SetPoint(40,439.93, 37.37);
  graph->SetPoint(41,444.60, 38.05);
  graph->SetPoint(42,451.08, 35.34);
  graph->SetPoint(43,457.55, 31.09);
  graph->SetPoint(44,462.95, 28.19);
  graph->SetPoint(45,470.14, 26.79);
  graph->SetPoint(46,484.89, 28.19);
  graph->SetPoint(47,496.40, 33.12);
  graph->SetPoint(48,505.40, 36.99);
  graph->SetPoint(49,514.75, 38.68);
  graph->SetPoint(50,525.18, 37.95);
  graph->SetPoint(51,533.09, 39.21);
  graph->SetPoint(52,539.57, 41.33);
  graph->SetPoint(53,544.24, 43.36);
  graph->SetPoint(54,550.00, 46.94);
  graph->SetPoint(55,560.07, 52.01);
  graph->SetPoint(56,574.82, 56.36);
  graph->SetPoint(57,589.21, 59.64);
  if(filled){
    graph->SetPoint(58,589.21, 60.00);
    graph->SetPoint(59,130.94, 60.00);
    graph->SetPoint(60,130.94, 17.32);
  }
  return graph;
}

TGraph* HIG_18_010_exp(){
  TGraph* graph = new TGraph();
  graph->SetPoint( 0,130.94, 15.92);
  graph->SetPoint( 1,143.88, 15.20);
  graph->SetPoint( 2,161.15, 15.05);
  graph->SetPoint( 3,179.14, 15.73);
  graph->SetPoint( 4,200.72, 16.55);
  graph->SetPoint( 5,223.02, 17.86);
  graph->SetPoint( 6,248.20, 19.59);
  graph->SetPoint( 7,275.54, 21.04);
  graph->SetPoint( 8,303.60, 22.44);
  graph->SetPoint( 9,327.70, 24.14);
  graph->SetPoint(10,350.36, 26.60);
  graph->SetPoint(11,374.82, 28.10);
  graph->SetPoint(12,402.88, 29.98);
  graph->SetPoint(13,430.94, 32.44);
  graph->SetPoint(14,456.12, 35.34);
  graph->SetPoint(15,483.45, 37.86);
  graph->SetPoint(16,519.42, 40.85);
  graph->SetPoint(17,543.17, 43.36);
  graph->SetPoint(18,574.10, 46.79);
  graph->SetPoint(19,600.00, 49.50);
  return graph;
}
