#!/usr/bin/python3
from sys import argv
from os import system 
system("root -l -b -q -e \".x MSSM_limits_hMSSM.C++\"")
system("pdftoppm MSSM_limits_hMSSM.pdf MSSM_limits_hMSSM -png -cropbox")
