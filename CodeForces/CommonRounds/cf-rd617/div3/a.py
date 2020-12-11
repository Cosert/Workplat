import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    li=[int(i) for i in input().split()]
    if sum(li)&1 : print("YES"); return
    odd=0; even=0
    for i in li : 
        if i&1 : odd+=1
        else : even+=1
        if odd and even : print("YES"); return
    print("NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

