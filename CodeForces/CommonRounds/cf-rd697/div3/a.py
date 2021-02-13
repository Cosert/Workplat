import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    while n%2==0 : n//=2
    print("YES" if n>1 else "NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

