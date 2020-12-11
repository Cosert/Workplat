import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input()); li=[int(i) for i in input().split()]
    m=sum(li); cnt=0
    for i in li : 
        if i==0 : cnt+=1
    
    print(cnt+(m+cnt==0))

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

