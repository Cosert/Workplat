import sys; import math; 
CASE=0; rla=''



def solve() : 
    n=int(rla)
    s=str(input())
    o, n, e, z, r=[0, 0, 0, 0, 0]
    for i in s : 
        if i=='o' : o+=1
        elif i=='n' : n+=1
        elif i=='e' : e+=1
        elif i=='z' : z+=1
        elif i=='r' : r+=1
    for i in range(min(o, n, e)) : print(1, end=' ')
    for i in range(min(z, e-min(o, n, e), r, o-min(o, n, e))) : print(0, end=' ')
    print()

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

