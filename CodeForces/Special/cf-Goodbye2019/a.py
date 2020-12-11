import sys; import math; 
CASE=1; rla=''



def solve() : 
    n, o, p=map(int, input().split())
    la=[int(i) for i in input().split()]; lb=[int(i) for i in input().split()]
    print("YES" if max(la)>max(lb) else "NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

