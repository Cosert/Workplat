import sys; import math; 
CASE=1; rla=''



def solve() : 
    li=[int(i) for i in input().split()]
    li.sort()
    a=sum(li)
    print("YES" if a%9==0 and li[0]>=a//9 else "NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

