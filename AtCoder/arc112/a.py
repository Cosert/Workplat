import sys; import math; 
rdl=sys.stdin.buffer.readline
CASE=1; rla=''



def solve() : 
    l, r=map(int, rdl().split())
    if l==r and l>0 : print(0); return
    
    m=r-l*2
    if m<0 : print(0)
    else : print((m+1)*(m+2)//2)

while True : 
    rla=sys.stdin.buffer.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

