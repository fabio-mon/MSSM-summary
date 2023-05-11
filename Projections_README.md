
# Instructions for projections      
1. Retrieve the .json file provided by the inference tool, for example json_files/bbgg_138fb_exp.json
2. Convert the json to csv in the format required by the following step
```
python3 json2csv.py json_files/bbgg_138fb_exp.json csv_files/bbgg_138fb_exp.csv exp
```
3. Convert the (mX, limit) in a (mA, tan(b)) exclusion for the two different scenarios
```
python3 H2hh_mAtanb.py csv_files/bbgg_138fb_exp.csv csv_files/bbgg_138fb_mAtanb_Mh125_exp.csv mh125 14
python3 H2hh_mAtanb.py csv_files/bbgg_138fb_exp.csv csv_files/bbgg_138fb_mAtanb_hMSSM_exp.csv hMSSM 14
```
NOTE: for now we should use the theory predictions for the hMSSM scenario at 13 TeV because the ones at 14 TeV have a bug      
4. Convert the (mA, tan(b)) exclusion in a c++ library.
```
python3 csv2graph.py csv_files/bbgg_138fb_mAtanb_Mh125_exp.csv | sed s#a_name#bbgg_138#g > ../Run-2-Mh125/bbgg_138fb.h
python3 csv2graph.py csv_files/bbgg_138fb_mAtanb_hMSSM_exp.csv | sed s#a_name#bbgg_138#g > ../Run-2-hMSSM/bbgg_138fb.h
```
the file contents will be something like
```
#include "TGraph.h"
TGraph* bbgg_138(){
TGraph* graph = new TGraph();
graph->SetPoint(0, 297.90103156274057,5.3547233056925645);
graph->SetPoint(1, 397.02568292532527,3.85627878981041);
graph->SetPoint(2, 483.1847537363587,1.0919467102567268);
return graph;
}
```
5. Add the library created at the previous step to the plotting script. Below is the example for the Mh125 scenario. The same procedure should be done for the hMSSM scenario.       
Open the file MSSM-summary/Run-2-Mh125/MSSM_limits_mh125.C and add `#include "bbgg_138fb.h"` to the header and the following two lines where all the graphs are defined
```
TGraph* g_bbgg_138fb = Contour(bbgg_138, NULL, kMagenta+2, kMagenta, tMagenta->GetNumber(), false); 
leg0_->AddEntry(g_bbgg_138fb , "#splitline{H #rightarrow hh (bb#gamma#gamma)}{138 fb^{-1}, 14 TeV}", "F");
```
6. Run the plotting script. Below is the example for the Mh125 scenario. The same procedure should be done for the hMSSM scenario.
```
cd MSSM-summary/Run-2-Mh125/
python3 update_MSSM_limits_mh125.py
```

