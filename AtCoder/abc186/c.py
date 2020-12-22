import sys; import math; 
CASE=0; rla=''

def check(x) : 
    a=x
    while a>=7 : 
        if a%10==7 : return 1
        a//=10
    a=x
    while a>=7 : 
        if a%8==7 : return 1
        a//=8
    return 0

def solve() : 
    n=int(rla)
    ans=0
    for i in range(1, n+1) : 
        ans+=check(i)
    print(n-ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

