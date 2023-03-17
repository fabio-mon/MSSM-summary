#include "mssm_xs_tools.h"
#include "mssm_xs_tools.C"

#include <iostream>
#include <stdio.h>

#include "TLine.h"
#include "TFile.h"
#include "TGraph.h"
#include "TCanvas.h" 

void mssm_mH2mA(const char* boson="H", double tanb=5){
  mssm_xs_tools mssm("root_files/hMSSM_13.root",true,0);
 
  TCanvas* canv = new TCanvas("cmp", "Comparison 8TeV(v0.5) vs 13TeV(v1.0)", 600, 600);
  canv->SetGridx(1); canv->SetLogx(0);
  canv->SetGridy(1); canv->SetLogy(0);
  canv->SetLeftMargin(0.15);
  TH1F* hr=canv->DrawFrame(0., 0., 500., 500.);
  // format x axis
  hr->SetXTitle("tan#beta");
  hr->GetXaxis()->SetLabelFont(62);
  hr->GetXaxis()->SetLabelSize(0.03);
  hr->GetXaxis()->SetLabelOffset(0.015); /// 0.015
  hr->GetXaxis()->SetTitleSize(0.03);
  hr->GetXaxis()->SetTitleFont(62);
  hr->GetXaxis()->SetTitleColor(1);
  hr->GetXaxis()->SetTitleOffset(1.50);
  hr->GetXaxis()->SetLabelSize(0.035);
  // format y axis
  hr->SetYTitle("cross section (pb)");
  hr->GetYaxis()->SetLabelFont(62);
  hr->GetYaxis()->SetTitleSize(0.04);
  hr->GetYaxis()->SetTitleOffset(1.70);
  hr->GetYaxis()->SetLabelSize(0.035);  

  TLine* line = new TLine();
  line->SetLineWidth(3);
  line->SetLineColor(1);
  line->SetLineStyle(1);
  line->DrawLine(0., 0., 500., 500.);
  
  double minimum=230.;
  TGraph* g1=new TGraph();
  TGraph* g2=new TGraph();
  TGraph* g3=new TGraph();
  for(int i=0;i<200;++i){
    g1->SetPoint(i,mssm.mass(boson, minimum+i,tanb),mssm.mass2mA(boson, mssm.mass(boson, minimum+i,tanb),tanb));
    g2->SetPoint(i,minimum+i,mssm.mass(boson, minimum+i,tanb));
    g3->SetPoint(i,mssm.mass(boson, minimum+i,tanb),minimum+i);
  }
  g1->SetLineColor(kBlue);
  g1->SetLineWidth(3);
  g3->SetLineStyle(9);
  g1->Draw("sameL");
  g2->SetLineColor(kRed);
  g2->SetLineWidth(3);
  g2->Draw("sameL");
  g3->SetLineColor(kGreen);
  g3->SetLineWidth(3);
  g3->Draw("sameL");

  double mH=315.;
  std::cout << "value of mA for mH=" << mH << " GeV, tanb=" << tanb << " : " << mssm.mass2mA(boson, mH,tanb) << std::endl; 
  std::cout << "result from g1: " << g1->Eval(315.) << std::endl;
  std::cout << "result from g3: " << g3->Eval(315.) << std::endl;
  std::cout << "result from g2: " << g2->Eval(200.5)  << " mH(200.5) : " << g2->Eval(295.5) << " mH(300.5)" << std::endl;
  return;
}

