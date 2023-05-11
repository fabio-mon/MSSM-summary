# Inputs used for this recast. Numbers obtained from: 
# https://twiki.cern.ch/twiki/pub/LHCPhysics/LHCHWG/Higgs_XSBR_YR4_update.xlsx
# https://pdg.lbl.gov/2022/listings/contents_listings.html
mh         = 125.4                  # Observed H(125) mass
br_hgamgam = 2.27e-3                # BR(H(125)->gammagamma)
br_hbb     = 5.76e-1                # BR(H(125)->bb)
br_WW2l2n  = 2.203e-1*1.086e-1**2   # BR(H(125)->W(lnu)W(lnu)
fb2pb      = 1e-3                   # Translation fb->pb

import csv
import mssm_xs_tools 

def recast_limits(mssm, source, target, mass_column, limit_column): 

    # Set up the scan
    start = 60
    stop  = 0.5
    step  =-0.5

    # service functions for the scan 
    def ggHhh(mA, tb): 
        return mssm.xsec(b"gg->H", mA, tb)*mssm.br(b"H->hh", mA, tb)
    def mH2mA(mX, tb):
        return mssm.mass2mA(b"H", mX, tb)

    # Read
    contour = []
    from mssm_extra_tools import mA_tanb_scan
    with open(source) as f:
        r=list(csv.DictReader(f, delimiter=","))
        for i,l in enumerate(r):
            # interpolate between available mX points to make boundaries smoother
            if i<(len(r)-1):
                m_low = float(r[i][mass_column])
                m_high = float(r[i+1][mass_column])
                lim_low = float(r[i][limit_column])
                lim_high = float(r[i+1][limit_column])
                if m_low>m_high:
                    raise RuntimeError("masses in the input csv must be sorted")
                m = m_low
                while(m<m_high):
                    lim = lim_low + (lim_high-lim_low) * (m-m_low) / (m_high-m_low)
                    contour.append(mA_tanb_scan(lim*fb2pb, m, 
                                                mH2mA, ggHhh, start, stop, step))
                    m = m+10.
                                    
    # Write
    with open(target, mode="w") as f:
        w=csv.writer(f, delimiter=",")
        w.writerow(["mA","tanb"])
        for l in contour:
            if not l[1]==stop:
                w.writerow(l)

if __name__=="__main__":
    import sys
    if len(sys.argv)!=5:
        raise RuntimeError("""USAGE: python H2hh_mAtanb.py <input.csv> <output.csv> <scenario> <sqrtS>
                           <scenario> = hMSSM or mh125
                           <sqrtS> = 13 or 14""")

    inputfile=("root_files/%s_%s.root"%(sys.argv[3],sys.argv[4])).encode('ascii') 
    mssm = mssm_xs_tools.mssm_xs_tools(inputfile, True, 0)    
    recast_limits(mssm, sys.argv[1], sys.argv[2], "mX", "limit")
