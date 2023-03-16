# MSSM-summary plots
This repository hosts everything that is required to create CMS high mass MSSM Higgs boson summary plots. It includes the following sub-directories: 

- **Run-2-hMSSM**: contains the script to create the hMSSM summary plot.
- **Run-2-Mh125**: contains the script to create the Mh125 sumary plot
- **MSSM-tools**: contains the most up to date version of `mssm_xs_tools` and further tools to extraplolate cross-section times branch fraction limits into the $m_{\mathrm{A}}$-$\tan\beta$ plane, for those processes, for which such a procedure is applicable. 

The root macros in these directories require a basic root and a recent python 3 installation.

To create the summary plots go to the corresponding sub-directory and execute: 

```shell
python3 update_MSSM_limits_[hMSSM, mh125].py
```

For the use of the `mssm_xs_tools` have a look to the README.md file in the MSSM_tools folder. 
