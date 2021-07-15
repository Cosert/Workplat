import sys; import math; 
CASE=0; rla=''



def solve() : 
    s=str(rla)
    l, r=map(int, input().split())
    n=len(s)
    

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

