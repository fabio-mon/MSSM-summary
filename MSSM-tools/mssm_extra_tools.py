"""
Functions to extrapolate cross-section x BR limits into the mA-tanb plane
"""

import numpy as np

def mA_tanb_scan(obs, mX, mX2mA, model, start=0.5, stop=60., step_size=0.5):
    """
    Scan tanb and find intercept of the prediction with the observed limit.

    The function uses the idea that at the point of the intercept the 
    difference "pred-obs" changes sign. When this happens the given tanb value 
    is estimated from the tanb points above and below through linear 
    interpolation.
    
    The scan can be run for fixed values of mX, in the direction from small to 
    large values for tanb, or in the direction from large to small values of 
    tanb. In the latter case note that step_size has to have a negative value.
    
    Currently the scan stops at the first crossing point. Identifying islands 
    in the mA-tanb plane, where the scan would cross at least twice is not 
    supported.

    Arguments are:
              
    obs        : observed limit
    mX         : mass value for which the obs is provided 
    mX2mA      : mapping from mX to mA
    model      : model to obtain the prediction from as function of mA and tanb
    start      : tanb value to start the scan
    stop       : tanb value to stop the scan
    step_size  : step size in tanb 
    
    The return value is a tuple of (mA, tanb). If no intercept is found (mA, 
    stop) is returned. 
    """
    __last_tanb__=-1
    __last_diff__= 0
    for tb in np.arange(start, stop, step_size):
        mA   = mX2mA(mX, tb)
        pred = model(mA, tb)
        if not __last_diff__==0:
            if (pred-obs)*__last_diff__<0: 
                tanb=__last_tanb__+(__last_diff__)/(__last_diff__+obs-pred)*(tb-__last_tanb__)
                return (mX2mA(mX, tanb), tanb)
        if pred>0:
            __last_diff__= pred-obs
            __last_tanb__= tb
    return (mA, stop)

if __name__=="__main__":
    # Call mA_tanb_scan with some reasonable values; example taken from 
    # HIG-21-011
    import mssm_xs_tools 
    mssm = mssm_xs_tools.mssm_xs_tools(b"root_files/hMSSM_13.root", True, 0)
    def ggHhh(mA, tb): 
        return mssm.xsec(b"gg->H", mA, tb)*mssm.br(b"H->hh", mA, tb)

    def mH2mA(mX, tb):
        return mssm.mass2mA(b"H", mX, tb)
    print(mA_tanb_scan(0.63, 260, mH2mA, ggHhh))

__version__=1.0
