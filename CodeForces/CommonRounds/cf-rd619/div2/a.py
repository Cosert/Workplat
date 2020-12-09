import sys; import math; 
CASE=1; rla=''



def solve() : 
    a=str(input()); b=str(input()); c=str(input())
    n=len(a)
    for i in range(n) : 
        if a[i]!=c[i] and b[i]!=c[i] : 
            print("NO"); return
    print("YES")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

