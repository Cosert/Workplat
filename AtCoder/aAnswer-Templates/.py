import sys; import math; 
rdl=sys.stdin.buffer.readline
CASE=0; rla=''



def solve() : 
    n=int(rla)

while True : 
    rla=sys.stdin.buffer.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    



