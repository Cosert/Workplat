import sys; import math; 
CASE=1; rla=''



def solve() : 
    q=[int(i) for i in input().split()]
    q.sort()
    print("No" if q[0]+q[1]<q[2]-1 else "Yes")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

