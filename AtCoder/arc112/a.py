import sys; import math; 
CASE=1; rla=''



def solve() : 
    l, r=map(int, input().split())
    if l==r and l>0 : print(0); return
    
    m=r-l; k=m-l+1
    if m<l : print(0)
    elif k&1>0 : 
        n=(k+1)>>1
        print(n*n*2-n)
    else : 
        n=k>>1
        print((n*n+n)*2)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

