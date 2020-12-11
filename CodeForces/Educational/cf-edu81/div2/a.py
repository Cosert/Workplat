import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    if n&1 : print(7, end=''); n-=3
    while n>0 : print(1, end=''); n-=2
    print()

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

