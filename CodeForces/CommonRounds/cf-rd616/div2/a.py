import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    s=str(input())
    m=0
    for i in s : 
        if (ord(i)-ord('0'))%2==1 : m+=1
    if m<=1 : print(-1); return
    cnt=0
    for i in s : 
        if (ord(i)-ord('0'))%2==1 : print(i, end=''); cnt+=1
        if cnt>=2 : break
    print()
    
while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

