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

#include "HIG-21-001.h"
#include "HIG-16-018.h"
#include "HIG-18-010.h"
#include "HIG-20-016.h"
#include "Eligibility.h"

void MSSM_limits_mh125(){
  // switch off stats box
  gStyle->SetOptStat(0);
  /// define colors
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
  // define canvas
  TCanvas* canv = new TCanvas("MSSM", "MSSM Limits: Mh125", 600, 640);
  canv->SetGridx(0); canv->SetLogx(1);
  canv->SetGridy(0); canv->SetLogy(1);
  canv->SetLeftMargin(0.12);
  canv->SetRightMargin(0.05);
  canv->SetTopMargin(0.06);
  canv->SetBottomMargin(0.10);  
  TH1F* hr=canv->DrawFrame(90., 1., 2100., 60.);
  // define x-axis
  hr->SetXTitle("m_{A} [GeV]");
  hr->GetXaxis()->SetLabelFont(42);
  hr->GetXaxis()->SetLabelSize(0.034);
  hr->GetXaxis()->SetLabelOffset(0.015);
  hr->GetXaxis()->SetTitleSize(0.04);
  hr->GetXaxis()->SetTitleFont(42);
  hr->GetXaxis()->SetTitleColor(1);
  hr->GetXaxis()->SetTitleOffset(1.20);
  hr->GetXaxis()->SetNdivisions(50005);
  hr->GetXaxis()->SetMoreLogLabels();
  hr->GetXaxis()->SetNoExponent();
  // define y-axis
  hr->SetYTitle("tan#beta");
  hr->GetYaxis()->SetLabelFont(42);
  hr->GetYaxis()->SetTitleSize(0.04);
  hr->GetYaxis()->SetTitleOffset(1.30);
  hr->GetYaxis()->SetLabelSize(0.034);    
  hr->GetYaxis()->SetNdivisions(50005);
  hr->GetYaxis()->SetMoreLogLabels();
  // eligibility line for the given benchmark
  TGraph* e1 = Eligibility();
  e1->SetLineColor(kRed);
  e1->SetLineWidth(1);
  e1->SetLineStyle(1);
  e1->SetLineWidth(2);
  e1->SetFillColor(kRed);  
  e1->SetFillStyle(3005);
  e1->Draw("FLsame");
  
  TGraph* g10 = HIG_21_001_exp();
  g10->SetLineColor(kBlue+2);
  g10->SetLineWidth(303);
  g10->SetFillStyle(3004);
  g10->SetFillColor(kBlue+2);
  g10->SetLineStyle(1);
  g10->Draw("Lsame");

  TGraph* g11 = HIG_21_001_obs(true );
  TGraph* g12 = HIG_21_001_obs(false);
  g12->SetLineColor(kBlue);
  g12->SetLineStyle(1);
  g12->SetLineWidth(1);
  g12->SetMarkerStyle(20);
  g12->SetMarkerSize(0.7);
  g12->SetMarkerColor(kBlue);
  g11->SetLineColor(kBlue);
  g11->SetFillColor(tBlue->GetNumber());
  g11->SetFillStyle(1001); //3005
  g11->Draw("Fsame");
  g12->Draw("Lsame");

  TGraph* g20 = HIG_16_018_exp();
  g20->SetLineColor(kCyan+2);
  g20->SetLineWidth(303);
  g20->SetFillStyle(3004);
  g20->SetFillColor(kCyan+2);    
  g20->SetLineStyle(1);
  g20->Draw("Csame");

  TGraph* g21 = HIG_16_018_obs(true );
  TGraph* g22 = HIG_16_018_obs(false);
  g22->SetLineColor(kCyan);
  g22->SetLineStyle(1);
  g22->SetLineWidth(1);
  g22->SetMarkerStyle(20);
  g22->SetMarkerSize(0.7);
  g22->SetMarkerColor(kCyan);
  g21->SetLineColor(kCyan);
  g21->SetFillColor(tCyan->GetNumber());
  g21->SetFillStyle(1001); //3005
  g21->Draw("Fsame");
  g22->Draw("Lsame");

  TGraph* g30 = HIG_18_010_exp();
  g30->SetLineColor(kYellow+2);
  g30->SetLineWidth(303);
  g30->SetFillStyle(3004);
  g30->SetFillColor(kYellow+2);    
  g30->SetLineStyle(1);
  g30->Draw("Csame");

  TGraph* g31 = HIG_18_010_obs(true );
  TGraph* g32 = HIG_18_010_obs(false);
  g32->SetLineColor(kYellow);
  g32->SetLineStyle(1);
  g32->SetLineWidth(1);
  g32->SetMarkerStyle(20);
  g32->SetMarkerSize(0.7);
  g32->SetMarkerColor(kYellow);
  g31->SetLineColor(kYellow);
  g31->SetFillColor(tYellow->GetNumber());
  g31->SetFillStyle(1001); //3005
  g31->Draw("Fsame");
  g32->Draw("Lsame");

  TGraph* g40 = HIG_20_016_exp();
  g40->SetLineColor(kMagenta+2);
  g40->SetLineWidth(-303);
  g40->SetFillStyle(3004);
  g40->SetFillColor(kMagenta+2);
  g40->SetLineStyle(1);
  g40->Draw("Csame");
  
  TGraph* g41 = HIG_20_016_obs(true );
  TGraph* g42 = HIG_20_016_obs(false);
  g42->SetLineColor(kMagenta);
  g42->SetLineStyle(1);
  g42->SetLineWidth(1);
  g42->SetMarkerStyle(20);
  g42->SetMarkerSize(0.7);
  g42->SetMarkerColor(kMagenta);
  g41->SetLineColor(kMagenta);
  g41->SetFillColor(tMagenta->GetNumber());
  g41->SetFillStyle(1001); //3005
  g41->Draw("Fsame");
  g42->Draw("Lsame");
  
  TLatex* tex;
  tex = new TLatex();
  tex->SetNDC();
  tex->SetTextAlign(11);

  tex->SetTextFont(63);
  tex->SetTextSize(25);
  tex->SetTextAngle( 0);
  tex->SetTextColor(kBlack);
  tex->DrawLatex(0.12, 0.95, "CMS");
  tex->SetTextFont(53);
  tex->SetTextSize(25);
  tex->DrawLatex(0.22, 0.95, "Preliminary");
  tex->SetTextFont(42);
  tex->SetLineWidth(2);
  tex->SetTextSize(0.035);
  tex->DrawLatex(0.59,0.95,"35.9 - 138 fb^{-1} (13 TeV)");
  
  TGraph* obs = new TGraph(); obs->SetFillColor(kGray);
  TGraph* exp = new TGraph(); 
  exp->SetLineColor(1.); 
  exp->SetFillColor(1.); 
  exp->SetLineWidth(303); 
  exp->SetFillStyle(3004);     

  TLegend* leg0_ = new TLegend(0.535, 0.130, 0.920, 0.435);
  leg0_->SetBorderSize(1);
  leg0_->SetFillStyle (1001);
  leg0_->SetTextSize(0.022464);
  leg0_->SetFillColor (kWhite);
  leg0_->AddEntry(obs, "Observed exclusion 95% CL", "F");  
  leg0_->AddEntry(exp, "Expected exclusion 95% CL", "LF");
  leg0_->AddEntry(g31, "#splitline{A/H/h #rightarrow #mu#mu}{PLB 798 (2019) 134992}", "F"); // Hmm
  leg0_->AddEntry(g21, "#splitline{A/H #rightarrow bb}{JHEP 1808 (2018) 113}", "F");        // Hbb
  leg0_->AddEntry(g11, "#splitline{A/H/h #rightarrow #tau#tau}{2208.02717}", "F");          // Htt
  leg0_->AddEntry(g41, "H#rightarrow WW(l#nu l#nu) (HIG-20-016)", "F");                     // HWW
  leg0_->Draw("same");

  TLegend* leg1_ = new TLegend(0.15, 0.130, 0.44, 0.18);
  leg1_->SetBorderSize(1);
  leg1_->SetFillStyle (1001);
  leg1_->SetTextSize(0.022464);
  leg1_->SetFillColor (kWhite);
  leg1_->AddEntry(e1, "m_{h}^{MSSM}\\neq 125 \\pm 3 GeV", "LF");  
  leg1_->Draw("same");

  TPaveText* extra = new TPaveText(0.75, 0.85, 0.8, 0.95, "NDC");
  extra->SetBorderSize(   0 );
  extra->SetFillStyle (   0 );
  extra->SetTextAlign (  12 );
  extra->SetTextSize  (0.03 );
  extra->SetTextColor (   1 );
  extra->SetTextFont  (  62 );
  extra->AddText("M_{h}^{125} scenario");
  extra->Draw("same");  

  canv->Update();
  canv->Print("MSSM_limits_mh125.pdf");
  return;
}

