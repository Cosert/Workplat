import sys; import math; 
CASE=1; rla=''



def solve() : 
    x=1000000000
    n=int(input())
    ans=0
    while n: 
        while n<x : x=int(x/10)
        ans+=x
        n-=x-int(x/10)
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

