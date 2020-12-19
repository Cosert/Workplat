import sys; import math; 
CASE=1; rla=''

inf=998244353535353535353

def solve() : 
    n=int(input()); li=[int(i) for i in input().split()]
    sum1=0; sum2=0; m=0
    for i in li : 
        if m==0 : sum1+=abs(1-i)
        else : sum2+=abs(1-i)
        m^=1
    if sum(li)>=2*sum1 : m=0
    else : m=1
    for i in li : 
        print(1 if m==0 else i, end=' ')
        m^=1
    print()

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

