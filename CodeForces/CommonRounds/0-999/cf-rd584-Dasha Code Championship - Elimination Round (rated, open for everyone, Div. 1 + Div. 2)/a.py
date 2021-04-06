import sys; import math; 
CASE=0; rla=''



def solve() : 
    n=int(rla)
    li=[int(i) for i in input().split()]
    li.sort()
    ans=0
    
    for i in range(len(li)) : 
        if li[i]==0 : continue
        ans+=1
        for j in range(i+1, len(li)) : 
            if li[j]==0 : continue
            if li[j]%li[i]==0 : li[j]=0
        li[i]=0
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

