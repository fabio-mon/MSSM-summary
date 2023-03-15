#include "mssm_xs_tools.h"
#include <iostream>

#include "TMath.h"
#include "TGraph.h"

mssm_xs_tools::mssm_xs_tools(const char* filename, bool kINT, unsigned verbosity) : verbosity_(verbosity), kINTERPOL_(kINT), cashed_(false), nbinsX_(0), minX_(0), maxX_(0), nbinsY_(0), minY_(0), maxY_(0){
  if(verbosity>99){
    std::cout << "Welcome to the MSSM ROOT file access tool (v2.0)." << std::endl
              << " In case of questions contact the LHCHXSWG MSSM subgroup conveners." << std::endl
              << " The subsequent people contributed to the coding and testing of the ROOT files since 2010:" << std::endl
              << " Monica Vazquez Acosta," << std::endl
              << " Emanuele Bagnaschi," << std::endl
              << " Felix Frensch," << std::endl
              << " Andrew Gilbert," << std::endl
              << " Artur Gottmann," << std::endl
              << " Guillermo Hamity, " << std::endl
              << " Sven Heinemeyer, " << std::endl
              << " Panu Keskinen," << std::endl
              << " Stefan Liebler," << std::endl
              << " Allison McCarn," << std::endl
              << " Trevor Vickey," << std::endl
              << " Roger Wolf." << std::endl;
  }
  if(!filename){
    std::cout << "Chose input file using the method mssm_xs_tools::setup()" << std::endl;
  }
  else{
    input_ = new TFile(filename);
  }
}

void 
mssm_xs_tools::setup(const char* filename){
  /* ______________________________________________________________________________________________
   * If not available, yet open input file from full path specified in [filename]. If input_ does
   * already point to a file nothing is done. This quarantees that only one file can be opened for
   * one instance of the class.  
   */
  if(!input_){
    input_ = new TFile(filename);
  }
  return;
}

std::string 
mssm_xs_tools::br_rule(const char* decay){
  /* ______________________________________________________________________________________________
   * Function argument [decay] expected to be of special form (e.g. "A->tautau"). Search for 
   * deliminator "->" required to be present in [decay]. Split argument: first block corresponds to 
   * building block [BOSON], second block to building block [DECAY]. Prefix histogram name with 
   * "br", append [BOSON], append [DECAY], separated by "_" (histogram name in example above: 
   * "br_A_tautau").
   */
  std::string name; 
  std::string source(decay);
  if(source.find("->")!=std::string::npos){
    name = std::string("br")+"_"+source.substr(0, source.find("->"))+"_"+source.substr(source.find("->")+2);
  }
 return name;  
}

std::string
mssm_xs_tools::width_rule(const char* boson){
  /* ______________________________________________________________________________________________
   * Function agrument [boson] expected to be of special form (e.g. "H"). Function argument 
   * corresponds to building block [BOSON] of histogram name. Prefix histogram name with 
   * "width", append [BOSON], separated by "_" (histgoram name in example above: "width_H");
   */
  return std::string("width")+"_"+std::string(boson);
} 

std::string
mssm_xs_tools::coupling_rule(const char* boson){
  /* ______________________________________________________________________________________________
   * Function agrument [boson] expected to be of special form (e.g. "gt_H");
   */
  return std::string("rescale")+"_"+std::string(boson);
} 

std::string 
mssm_xs_tools::xsec_rule(const char* mode){
  /* ______________________________________________________________________________________________
   * Function argument [mode] expected to be of special form (e.g. "gg->A::scaleUp"); "->" and "::"
   * are deliminators of building blocks; "->" is required to be present, while"::" is optional. 
   * Search for deliminators "->" (required to be present) and "::" (optional) in [mode]. Split 
   * argument: first block corresponds to [PROD], second block to [BOSON], the third block (option-
   * al) to [UNCERT]. Prefix histogram name with "xs", append [PROD], append [BOSON], append 
   * [UNCERT] if available, seperated by "_" (histogram name in example above: "xs_gg_A_scaleUp").
   */
  std::string source(mode);
  std::string process = source.find("->")!=std::string::npos ? source.substr(0, source.find("->")) : std::string();
  std::string uncert  = source.find("::")!=std::string::npos ? source.substr(source.rfind("::")+2) : std::string();
  std::string boson   = source.substr(source.find("->")+2, source.rfind("::")-(source.find("->")+2));
  std::string name; 
  if(!process.empty()){
    name = std::string("xs")+"_"+process+"_"+boson+(uncert.empty()? uncert : std::string("_")+uncert);
  }
 return name;  
}

std::string 
mssm_xs_tools::mass_rule(const char* boson){
  /* ______________________________________________________________________________________________
   * Function agrument [boson] expected to be of special form (e.g. "H"). Function argument corres-
   * ponds to building block [BOSON] of histogram name. Prefix histogram name with "m", append 
   * [BOSON],  seperated by "_" (histgoram name in example above: "m_H");
   */
  return std::string("m")+"_"+std::string(boson);
}

TH2F* 
mssm_xs_tools::hist(std::string histname){
  /* ______________________________________________________________________________________________
   * Check if a histogram with name [histname] is already on stack. If so return historam. If not 
   * try to get a histogram with name [histname] from the input file, cast to TH2F*; add histogram 
   * on stack with key [histogramname]. If getting the histogram from the input file was not 
   * successful issue a WARNING and return a NULL pointer. For verbosity_>2 issue  MESSAGE that a 
   * histogram with name [histname] has been read from the input file upon successful completion. 
   * Save histogram on stack for future use. Return pointer to histogram.
   */  
  if(hists_.find(histname) == hists_.end()){
    // hist not on stack; read from file; if it fails return NULL.
    hists_[std::string(histname)] = (TH2F*) input_->Get(histname.c_str());
    //std::cout << "* " << hists_[std::string(histname)]->GetName() << std::endl;
    if(!hists_.find(histname)->second){
      std::cout << "WARNING: required histogram " 
                << "[" << histname << "] " 
                << "does not exist in input file " 
                << "[" << input_->GetName() << "]" 
                << std::endl
                << "         " 
                << "return NULL..." 
                << std::endl;
      return NULL;
    }
    else{
      if(!cashed_){
        // cash maximal number of bins on x- (mA) and y- (tanb) axis of TH2F, used to define the 
        // boundaries of the histogram when running in interpolation mode
        nbinsX_ = hists_.find(histname)->second->GetXaxis()->GetNbins();
        nbinsY_ = hists_.find(histname)->second->GetYaxis()->GetNbins();     
        // cash minmal and maximal value of x- (mA) and y- (tanb) axis of TH2F. The information 
        // about the x-axis is used for mass->mA conversions. The information on the y-axis is 
        // currently not used, while it is still considered useful to have it 
        minX_   = hists_.find(histname)->second->GetXaxis()->GetBinCenter(hists_.find(histname)->second->GetXaxis()->GetFirst());
        maxX_   = hists_.find(histname)->second->GetXaxis()->GetBinCenter(hists_.find(histname)->second->GetXaxis()->GetLast ());
        minY_   = hists_.find(histname)->second->GetYaxis()->GetBinCenter(hists_.find(histname)->second->GetYaxis()->GetFirst());
        maxY_   = hists_.find(histname)->second->GetYaxis()->GetBinCenter(hists_.find(histname)->second->GetYaxis()->GetLast ());
        cashed_=true;
      }
      if(verbosity_>2){
        std::cout << "MESSAGE: read histogram " 
                  << "[" << histname << "] " 
                  << "from input file " 
                  << "[" << input_->GetName() << "]" 
                  << std::endl;
      }    
    } 
  }
  return hists_.find(histname)->second;
}

double 
mssm_xs_tools::mass2mA(const char* boson, double m, double tanb){
  /* ______________________________________________________________________________________________
   * Get mA for a given value of mass for a fixed value of tanb. The parameter mass can stand for h
   * H or Hp, the meaning is determined from the parameter boson. To get to the desired result the 
   * nominal minimum and maximum of mA in the model file is determined automatically. The associa-
   * tion of mass to mA might not be unique (e.g. in the hMSSM). In this case the highest value of
   * mA that returns mass is chosen. To achieve this in a next step a TGraph is filled to deter-
   * mine the lowest accessible value of mass as a function of mA. This value of mA is chosen as 
   * the starting value for a second graph in which mA as a function of mass (the unique inverse) 
   * is filled. From this second graph the value of mA for given mass is obtained using TGraph
   * Eval with linear interpolation for values of mass, which are not available as exact values. In
   * cases where values outside the valid ranges of the model are requested Warnings are issued and 
   * the value -1. is returned. This may happen when the requested value of tanb is not compatible 
   * with the model or when an mA value is requested for a value of mass that cannot be reached 
   * within the model.
   */    
  // this may be necessary if mass2mA is called for the very first time after instantiation; the 
  // mass histogram is then already saved on the stack in the course of the cashing of meta 
  // information, so this is not a complete waist of runtime 
  if(!cashed_){ hist(this->mass_rule(boson)); }
  double value = -1.; 
  if(tanb<minY_ || maxY_<tanb){
    std::cout << "WARNING: requested mA value for (mH,tanb)=" << boson 
              << "(" << m << "," << tanb << ") " 
              << "which cannot be provided from input file " 
              << "[" << input_->GetName() << "]. Available range: " 
              << "tanb in [" << minY_ << " , " << maxY_ << "]"  
              << std::endl
              << "         " 
              << "return -1..." 
              << std::endl;
    return value;
  }
  TGraph* g=new TGraph(); int n=0;
  // find mA value of minimally accessible boson mass in this model; in a second step start the 
  // inversion function from there to make sure that it is unique; the mA value of choice is the 
  // larger one beyond the minimum of boson mass
  for(int i=0;i<(int)(TMath::Floor(maxX_)-TMath::Ceil(minX_));++i){
    float x=TMath::Ceil(minX_)+i;
    float y=mass(boson, x, tanb);
    // reject potential for nan's, which may be returned in non trivial application boundaries 
    // of the model (e.g. if the accessible values of mH vary as a function of tanb like in the 
    // hMSSM)
    if(y==y){ g->SetPoint(n++, x, y); }
  }
  double lowest_mA = g->GetX()[TMath::LocMin(n, g->GetY())]; g->Set(0), n=0;
  // fill graph with inverse function mA(boson mass); start from mA of minimal accessible value 
  // for boson mass and continue with increasing values 
  for(int i=0;i<(int)(TMath::Floor(maxX_)-TMath::Ceil(lowest_mA));++i){
    float x=TMath::Ceil(lowest_mA)+i;
    float y=mass(boson, x, tanb);
    g->SetPoint(n++, y, x); 
  }
  // if mass lies within the accessible range of boson masses evaluate
  if(TMath::MinElement(n, g->GetX())<=m && m<=TMath::MaxElement(n, g->GetX())){
    value = g->Eval(m);
  }
  else{
    std::cout << "WARNING: requested mA value for (mH,tanb)=" << boson 
              << "(" << m << "," << tanb << ") " 
              << "which cannot be provided from input file " 
              << "[" << input_->GetName() << "]. Available range: " 
              << "mA in [" << TMath::MinElement(n, g->GetX()) 
              << " , " << TMath::MaxElement(n, g->GetX()) << "]"   
              << std::endl
              << "         " 
              << "return -1..." 
              << std::endl;
  }
  delete g;
  return value;
}  


