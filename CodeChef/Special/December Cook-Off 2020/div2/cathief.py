import sys; import math; 
CASE=1; rla=''



def solve() : 
    x, y, m, n=map(int, input().split())
    print("Yes" if abs(x-y)%(2*m)==0 else "No")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

