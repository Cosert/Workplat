import sys; import math; 
CASE=0; rla=''

bas=1
for i in range(2, 12) : bas*=i

def solve() : 
    n=int(rla); n-=1
    a=1
    for i in range(n, n-11, -1) : a*=i
    print(a//bas)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

