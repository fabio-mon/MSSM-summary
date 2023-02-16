#include "../Common.h"
#include "HIG-16-018.h"
#include "HIG-17-002.h"
#include "HIG-21-001.h"
#include "HIG-17-027.h"
#include "HIG-17-031.h"
#include "HIG-17-033.h"
#include "HIG-18-010.h"
#include "HIG-18-023.h"

void MSSM_limits_hMSSM(){
/*-----------------------------------------------------------------------------

 General setup of the canvas

-----------------------------------------------------------------------------*/
  // switch off stats box
  gStyle->SetOptStat(0);
  // define canvas  
  TCanvas* canv = new TCanvas("MSSM", "MSSM Limits: hMSSM", 900, 640);
  canv->SetGridx(0); canv->SetLogx(1);
  canv->SetGridy(0); canv->SetLogy(1);
  canv->SetLeftMargin(0.12);
  canv->SetRightMargin(0.35);
  canv->SetTopMargin(0.06);
  canv->SetBottomMargin(0.10);  
  TH1F* hr=canv->DrawFrame(130., 1., 2100., 60.);
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
  // define legend
  TLegend* leg0_ = new TLegend(0.67, 0.10, 0.97, 0.94);
  leg0_->SetBorderSize(1);
  leg0_->SetFillStyle (1001);
  leg0_->SetTextSize(0.026);
  leg0_->SetFillColor (kWhite);
  TGraph* obs = new TGraph(); obs->SetFillColor(kGray);
  TGraph* exp = new TGraph(); 
  exp->SetLineColor(1.); 
  exp->SetFillColor(1.); 
  exp->SetLineWidth(303); 
  exp->SetFillStyle(3004);     
  leg0_->AddEntry(obs, "Observed exclusion 95% CL", "F");  
  leg0_->AddEntry(exp, "Expected exclusion 95% CL", "LF");
  
/*-----------------------------------------------------------------------------

 Plotting (contours will be drawn on top of each other according to this order)

-----------------------------------------------------------------------------*/
  TGraph* g1 = Contour(HIG_17_031_exp, HIG_17_031_obs, kCombDark->GetNumber(), kComb->GetNumber(), tComb->GetNumber()); 
  leg0_->AddEntry(g1 , "#splitline{h(125)}{EPJC 79 (2019) 421}", "F");
  TGraph* g2 = Contour(HIG_18_010_exp, HIG_18_010_obs, kYellow+2, kYellow, tYellow->GetNumber()); 
  leg0_->AddEntry(g2, "#splitline{A/H/h #rightarrow #mu#mu}{PLB 798 (2019) 134922}", "F");
  TGraph* g3 = Contour(HIG_16_018_exp, HIG_16_018_obs, kCyan+2, kCyan, tCyan->GetNumber()); 
  leg0_->AddEntry(g3, "#splitline{A/H #rightarrow bb}{JHEP 08 (2018) 113}", "F");
  TGraph* g4 = Contour(HIG_21_001_exp, HIG_21_001_obs, kBlue+2, kBlue, tBlue->GetNumber()); 
  leg0_->AddEntry(g4, "#splitline{A/H/h #rightarrow #tau#tau}{axriv:2208.02717}", "F");
  TGraph* g5 = Contour(HIG_17_033_exp, HIG_17_033_obs, kMagenta+2, kMagenta, tMagenta->GetNumber()); 
  leg0_->AddEntry(g5, "#splitline{H #rightarrow WW(l#nu l#nu and l#nu qq)}{JHEP 03 (2020) 34}", "F");
  TGraph* g6 = Contour(HIG_17_002_exp, HIG_17_002_obs, kRed+2, kRed, tRed->GetNumber()); 
  leg0_->AddEntry(g6 , "#splitline{H #rightarrow hh (bb#tau#tau)}{PLB 778 (2018) 101}", "F");
  TGraph* g7 = Contour(HIG_17_027_exp, HIG_17_027_obs, kOrange+2, kOrange, tOrange->GetNumber()); 
  leg0_->AddEntry(g7, "#splitline{H #rightarrow tt}{JHEP 04 (2020) 171}", "F");
  TGraph* g8 = Contour(HIG_18_023_exp, HIG_18_023_obs, kGreen+2, kGreen, tGreen->GetNumber()); 
  leg0_->AddEntry(g8, "#splitline{A #rightarrow Zh (ll#tau#tau)}{JHEP 03 (2020) 65}", "F");

/*-----------------------------------------------------------------------------

 Labelling

-----------------------------------------------------------------------------*/
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
  tex->DrawLatex(0.19, 0.95, "Preliminary");
  tex->SetTextFont(42);
  tex->SetLineWidth(2);
  tex->SetTextSize(0.035);
  tex->DrawLatex(0.42,0.95,"(35.9-138) fb^{-1} (13 TeV)");
  tex->SetTextSize(0.034);
  tex->DrawLatex(0.10,0.057, "130");

  /*
  tex->SetTextFont(43);
  tex->SetTextSize(14);
  tex->SetTextAngle(270);
  tex->DrawLatex(0.93, 0.74, "March 2018");
  */

  TPaveText* extra = new TPaveText(0.55, 0.85, 0.65, 0.95, "NDC");
  extra->SetBorderSize(   0 );
  extra->SetFillStyle (   0 );
  extra->SetTextAlign (  12 );
  extra->SetTextSize  (0.03 );
  extra->SetTextColor (   1 );
  extra->SetTextFont  (  62 );
  extra->AddText("hMSSM");
  extra->Draw("same");  

  leg0_->Draw("same");
  canv->Update();
  canv->Print("MSSM_limits_hMSSM.pdf");
  return;
}

