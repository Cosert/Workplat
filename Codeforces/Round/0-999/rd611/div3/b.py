import sys; import math; 
CASE=1; rla=''



def solve() : 
    n, m=map(int, input().split())
    r=n%m; mi=int((n-r)/m)
    print(m*mi+min(r, m>>1))

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

