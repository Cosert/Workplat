import sys; import math; 
CASE=1; rla=''



def solve() : 
    a, b=map(int, input().split())
    if a==b : print(0)
    elif a<b : print(2 if (a&1)==(b&1) else 1)
    else : print(2 if (a&1)!=(b&1) else 1)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

