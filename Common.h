#include <iostream>

#include "TROOT.h"
#include "TColor.h"
#include "TCanvas.h"
#include "TPaveText.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TGraph.h"
#include "TH2F.h"

// define transparent colors
TColor* tRed     = new TColor(3001,  1.,  0.,  0., "tRed"     , 0.15);
TColor* tGreen   = new TColor(3002,  0.,  1.,  0., "tGreen"   , 0.15);
TColor* tBlue    = new TColor(3003,  0.,  0.,  1., "tBlue"    , 0.15);
TColor* tMagenta = new TColor(3004,  1.,  0.,  1., "tMagenta" , 0.15);
TColor* tCyan    = new TColor(3005,  0.,  1.,  1., "tCyan"    , 0.50);
TColor* tYellow  = new TColor(3006,  1.,  1.,  0., "tYellow"  , 0.15);
TColor* tOrange  = new TColor(3007,  1.,  .5,  0., "tOrange"  , 0.15);
TColor* tBlack   = new TColor(3008,  0.,  0.,  0., "tBlack"   , 0.15);
TColor* kCombDark= new TColor(3009, .48, .88,  1., "kCombDark");
TColor* kComb    = new TColor(3010, .28, .58, .70, "kComb");
TColor* tComb    = new TColor(3011, .28, .58, .70, "tComb"    , 0.25);
 
TGraph* Contour(TGraph* exp(), TGraph* obs(bool), int dcolor, int lcolor, int tcolor){
  TGraph* g0 = exp();
  g0->SetLineColor(dcolor);
  g0->SetLineWidth(-303);
  g0->SetFillStyle(3004);
  g0->SetFillColor(dcolor);
  g0->SetLineStyle(1);
  g0->Draw("Lsame");

  TGraph* g1 = obs(true );
  TGraph* g2 = obs(false);
  g2->SetLineColor(lcolor);
  g2->SetLineStyle(1);
  g2->SetLineWidth(1);
  g2->SetMarkerStyle(20);
  g2->SetMarkerSize(0.7);
  g2->SetMarkerColor(lcolor);
  g1->SetLineColor(lcolor);
  g1->SetFillColor(tcolor);
  g1->SetFillStyle(1001);
  g1->Draw("Fsame");
  g2->Draw("Lsame");
  return g1;
}

