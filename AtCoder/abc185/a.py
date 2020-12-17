import sys; import math; 
CASE=0; rla=''



def solve() : 
    a=[int(i) for i in rla.split()]
    a.sort(); print(a[0])

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

