import sys; import math; 
CASE=1; rla=''



def solve() : 
    n, m, a, b, k=map(int, input().split())
    x, y=map(int, "0 0".split())
    while n>0 : n-=a; x+=1
    while m>0 : m-=b; y+=1
    print(x, y) if x+y<=k else print(-1)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

