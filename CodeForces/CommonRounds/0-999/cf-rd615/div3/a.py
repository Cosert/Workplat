import sys; import math; 
CASE=1; rla=''



def solve() : 
    a, b, c, n=map(int, input().split())
    k=max(a, b, c); m=3*k-a-b-c
    
    print("YES" if n>=m and (n-m)%3==0 else "NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

