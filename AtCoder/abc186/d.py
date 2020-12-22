import sys; import math; 
CASE=0; rla=''



def solve() : 
    n=int(rla); li=[int(i) for i in input().split()]
    ans=0
    li.sort()
    k=sum(li)
    for i in range(n-1, 0, -1) : 
        k-=li[i]; n-=1
        ans+=li[i]*n-k
    
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

