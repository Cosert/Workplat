import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    s=str(input())
    a, b=[0, 0]
    for i in s: 
        if i=='1' : a+=1
        else : b+=1
    print("YES" if (a+120-n)/120>=0.75 else "NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

