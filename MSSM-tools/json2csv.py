
import json
import csv
import sys

if __name__=="__main__":
    if len(sys.argv)!=4:
        raise RuntimeError("USAGE: python json2csv.py <input.json> <output.csv> <exp/obs")

    indata={}
    with open(sys.argv[1], 'r') as infile:
        indata = json.load(infile)

    with open(sys.argv[2], 'w', newline='') as outfile:
        csvwriter = csv.writer(outfile)
        csvwriter.writerow(["mX","limit"])
        for m,limits in indata.items():
            mass = float(m)
            limit = 0.
            if sys.argv[3]=="exp":
                limit = float(limits["limit"])
            elif sys.argv[3]=="obs":
                limit = float(limits["obs"])
            else:
                raise RuntimeError("Only exp or obs supported")
            csvwriter.writerow([mass,limit])

