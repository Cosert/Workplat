import sys; import math; 
CASE=1; rla=''



def solve() : 
    a, b=map(int, input().split())
    print((24-a)*60-b)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

