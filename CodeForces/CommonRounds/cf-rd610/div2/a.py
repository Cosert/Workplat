import sys; import math; 
CASE=1; rla=''



def solve() : 
    a, b, c, d=map(int, input().split())
    if a>b : t=a; a=b; b=t
    l=abs(b-a)
    if c<a : print(l-max(0, min(c+d-a, l)))
    elif c>b : print(l-max(0, min(b-(c-d), l)))
    else : print(l-2*d+max(0, a-(c-d))+max(0, c+d-b))

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

