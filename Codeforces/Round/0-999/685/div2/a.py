import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    print(n-1 if n<=3 else 2+(n&1))

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

