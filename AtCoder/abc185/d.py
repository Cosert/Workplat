import sys; import math; 
CASE=0; rla=''



def solve() : 
    n, m=map(int, rla.split())
    li=[]
    if m>0 : 
        li=[int(i) for i in input().split()]; li.append(0); li.append(n+1)
    if m==0 or m==n+2 : 
        print(1 if m==0 else 0)
        return
    k=[]
    li.sort()
    
    for i in range(len(li)-1) : 
        if li[i+1]-li[i]-1>=1 : k.append(li[i+1]-li[i]-1)
    ans=0
    k.sort()
    for i in k : 
        ans+=i//k[0]+int(i%k[0]!=0)
    
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

