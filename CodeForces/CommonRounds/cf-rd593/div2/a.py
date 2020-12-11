import sys; import math; 
CASE=1; rla=''



def solve() : 
    a, b, c=map(int, input().split())
    ans=0
    if b>0 : 
        ans+=min(b, c>>1)*3
        b-=min(b, c>>1)
    if a>0 : 
        ans+=min(a, b>>1)*3
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

