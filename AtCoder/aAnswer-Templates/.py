import sys; import math; 

TESTYPE=0



def solve(rla) : 
    

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if TESTYPE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve(rla)
    

