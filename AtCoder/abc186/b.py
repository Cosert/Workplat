import sys; import math; 
CASE=0; rla=''

def solve() : 
    mp=[0]*101
    n, m=map(int, rla.split())
    mi=998244353333
    for i in range(n) : 
        a=[int(j) for j in input().split()]
        for j in a : 
            mp[j]+=1
            if j<mi : mi=j
    ans=0
    for i in range(101) : 
        ans+= (0 if i+1<=mi else mp[i]*(i-mi))
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

