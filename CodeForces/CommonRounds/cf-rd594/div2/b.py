import sys; import math; 
CASE=0; rla=''



def solve() : 
    n=int(rla); li=[int(i) for i in input().split()]
    li.sort(); a=0; b=0
    for i in range(n>>1) : a+=li[i]
    for i in range(n>>1, n) : b+=li[i]
    print(a*a+b*b)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

