import sys; import math; 
CASE=1; rla=''

lx=[]*100000

def solve() : 
    n, m=map(int, input().split())
    li=[int(i) for i in input().split()]
    flag=1
    x=0
    for i in range(n) : 
        if li[i]!=i+1 : 
            flag=0
            if li[i]>x : x=li[i]
    
    
    ans=0; px=1
    for i in range(m) : 
        a, b=map(float, input().split())
        if a<x or b==0 : continue
        ans+=px*b
        px*=1-b
    print(1 if flag==1 else min(ans, 1.000000))

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

