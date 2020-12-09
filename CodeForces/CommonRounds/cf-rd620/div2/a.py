import sys; import math; 
CASE=1; rla=''



def solve() : 
    n, m, a, b=map(int, input().split())
    print(int((m-n)/(a+b)) if (m-n)%(a+b)==0 else -1)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

