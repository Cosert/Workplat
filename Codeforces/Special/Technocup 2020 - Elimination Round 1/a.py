import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    if n<4 : print(4-n)
    else : print(1 if n&1==1 else 0)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

