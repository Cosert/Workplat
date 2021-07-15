import sys; import math; 
CASE=1; rla=''



def solve() : 
    a=[int(i) for i in input().split()]
    a.sort(reverse=True)
    ans=0
    for i in range(len(a)) : 
        if a[i]>0 : ans+=1; a[i]-=1
    if (a[0]>0)&(a[1]>0) : ans+=1; a[0]-=1; a[1]-=1
    if (a[0]>0)&(a[2]>0) : ans+=1; a[0]-=1; a[2]-=1
    if (a[1]>0)&(a[2]>0) : ans+=1; a[1]-=1; a[2]-=1
    if (a[0]>0)&(a[1]>0)&(a[2]>0) : ans+=1
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

