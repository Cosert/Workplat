import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    li=[int(i) for i in input().split()]
    t=0
    for i in range(n) : 
        if i>0 : 
            if li[i]==li[i-1] : 
                if i==n-1 : li[i]+=1
                elif i<n-1 and li[i]!=li[i+1] : li[i]+=1
    ans=1
    for i in range(1, n) : 
        if li[i]!=li[i-1] : ans+=1
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    
# Bye, 2020, Forever
