import sys; import math; 
CASE=0; rla=''



def solve() : 
    n, m, t=map(int, rla.split())
    l=n; r=0
    flag=1
    for i in range(m) : 
        a, b=map(int, input().split())
        l-=(a-r)
        if l<=0 : flag=0
        l=min(l+(b-a), n)
        r=b
    l-=(t-r)
    
    if l<=0 : flag=0
    print("Yes" if flag==1 else "No")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

