
import sys

if __name__=="__main__":
    if len(sys.argv)!=2:
        raise RuntimeError("USAGE: python csv2graph.py <input.csv> ")

    print('#include "TGraph.h"')
    print('TGraph* a_name(){')
    print('TGraph* graph = new TGraph();')

    Lines = []
    with open(sys.argv[1],'r') as infile:
        Lines = infile.readlines()[1:]

    for i,l in enumerate(Lines):
        ll = l.replace("\n","")
        print('graph->SetPoint(%i, %s);'%(i,ll))

    print('return graph;')
    print('}')
        
        
