import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    print(n, end=' ')
    for i in range(1, n) : print(i, end=' ')
    print()

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

