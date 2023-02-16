#!/usr/bin/python3
from sys import argv
from os import system 
system("root -l -b -q -e \".x MSSM_limits_mh125.C+\"")
system("pdftoppm MSSM_limits_mh125.pdf MSSM_limits_mh125 -png -cropbox")
