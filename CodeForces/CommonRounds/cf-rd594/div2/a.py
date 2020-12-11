import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input()); la=[int(i) for i in input().split()]
    m=int(input()); lb=[int(i) for i in input().split()]
    od=0; ev=0
    for i in la : 
        if i&1 : od+=1
        else : ev+=1
    ans=0
    for i in lb : ans+= od if i&1 else ev
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

