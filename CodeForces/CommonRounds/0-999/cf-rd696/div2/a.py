import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    s=str(input())
    fl=0
    
    for i in s : 
        if i=='1' : 
            print('1' if fl<2 else '0', end='')
            if fl<2 : fl=2
            else : fl=1
        else : 
            print('1' if fl!=1 else '0', end='')
            if fl!=1 : fl=1
            else : fl=0
    print()

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

