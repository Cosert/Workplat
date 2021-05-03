import sys; import math; 
CASE=0; rla=''



def solve() : 
    li=[int(i) for i in rla.split()]
    c=sum(li)
    li.sort()
    if li[3]==c-li[3] : print("YES")
    elif li[3]+li[0]==c-li[3]-li[0] : print("YES")
    else : print("NO")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

