# mssm_xs_tools

This is a class to provide a facilitated interface to mass relations, decay widths, branching fractions and production cross sections for all Higgs bosons of various benchmark models of the MSSM. This information is usually provided in form of 2D (TH2F) histograms in root input files linked to the [LHCXSWG-3](https://twiki.cern.ch/twiki/bin/view/LHCPhysics/LHCHXSWG3) TWiki page. It is usually parametrized as a function of the pseudoscalar neutral Higgs boson mass, $m_{\mathrm{A}}$, and the ratio between the vacuum expectation values, $\tan\beta=v_{2}/v_{1}$, of the two Higgs doublets in the MSSM, in the case of mass relations, neutral Higgs boson cross-sections, decay widths or branching fractions and as a function of the charged Higgs boson mass $m_{\mathrm{H^{+}}}$ and $\tan\beta$ in the case of charged Higgs boson cross-sections, decay widths and branching fractions.

The access functions provided in this class are supposed to facilitate the process of finding the proper histogram (following LHCXSWG internal naming conventions) and the proper bin in the 2D histogram corresponding to $m_{\phi}=(m_{\mathrm{A}}, m_{\mathrm{H^{+}}}$) and $\tan\beta$, of which the latter is a root technicality (cf. `mssm_xs_tools::read` for more details).

---

The quantity $m_\phi$ below denotes either $m_{\mathrm{A}}$ or $m_{\mathrm{H^{+}}}$ dependent on the scenario under consideration. By default it yields $m_{\phi}=m_{\mathrm{A}}$. Only for the heavy Higgs scenario and the CPV scenario $m_{\phi}=m_{\mathrm{H^{+}}}$.

---

The names of the 2D histograms are build from building blocks separated by "_", to identify the contained information. The following building blocks exist:

- **[MASS]**: indicating mass ("m");
- **[WIDTH]** : indicating width ("width");
- **[BOSON]** : indicating the boson type, used for cross section and decay information ("A", "H", "h");
- **[PROD]**: indicating the production type, separated by gluon-fusion and production in association with b-quarks ("ggH", "bbH");
- **[UNCERT]**: indicating the kind of variation corresponding to a given uncertainty ("up", "down"). The arguments "up" and "down" give the absolute difference to the central scale "$\Delta\Sigma^\pm$". Some uncertainties are split into scale and pdf+$\alpha_{\mathrm{S}}$ uncertainties, then the prefix "scale" or "pdfas" to "up" and "down" allows to obtain the individual uncertainties. Generally such individual uncertainties should be added in quadrature. For this purpose some routines named "\_unc" and "\_uncboundaries" can be found below.
- **[DECAY]** : indicating the decay type (e.g. "tautau", "mumu", "bb", ...).

The exact conventions of these building blocks are not always defined in a unique way and might change with time. The user should not worry about such changes. For this reasons the access functions provided by this class make use of a set of internal translation rules from a more intuitive naming scheme to the actual histogram names. For the sake of simplicity this naming scheme partially makes use of the naming conventions as used for the individual building blocks of the histogram names. For more information check the documentation for each individual "translation rule" in the class implementation. In the naming scheme used throughout this class the following rules apply:

- **Production**: separate building block for [PROD] from building block for [BOSON] by "->" (e.g. "gg->A"). This will provide you with the corresponding central value for the cross section. There is a way to obtain the cross sections after uncertainty shifts by appending a tag for the [UNCERT] type to the production string, separated by "::" ("gg->A::scaleup").
- **Decay**: separate building block for [BOSON] from building block for [DECAY] by "->" (e.g. "A->tautau"). This will provide you with the branching fraction for the corresponding decay ([e.g. see here](https://twiki.cern.ch/twiki/pub/LHCPhysics/LHCHWG/Higgs_XSBR_YR4_update.xlsx)).
- **Mass/Width**: just give the building block for the [BOSON] type as function argument (e.g. "A", "H", "h", "Hp").

In the case that called histograms do not exist in the root input file a WARNING is issued and a NULL pointer for TH2F is returned. Make sure you catch these NULL pointers in further use of this class. To hide away also this simple logic from the user a full set of fully documented pre-defined access functions for all available information is also provided. These function can alsombe used as reference for further examples of the access logic described above (e.g. concerning further conventions used for numerous building blocks of type [DECAY]).

# python wrapper

For the use with python the most relevant access functions of the class `mssm_xs_tools` have been wrapped into python using python `ctypes`. To be able to make use of them the class has to be provided in form of a shared library file .so.  the easiest way to do that is through your root installation using runtime compilation in the root prompt: 

> root -l
>
> .L mssm_xs_tools.C++

Check the documentation of the python module mssm_xs_tools.py for more information. 