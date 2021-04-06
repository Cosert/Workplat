import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input()); li=[int(i) for i in input().split()]
    li.sort()
    if n==1 : print(1); return
    for i in range(len(li)-1) : 
        if li[i+1]-li[i]<2 : 
            print(2); return
    print(1)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

