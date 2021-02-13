import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    print("YES" if n//2020>=n%2020 else "NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

