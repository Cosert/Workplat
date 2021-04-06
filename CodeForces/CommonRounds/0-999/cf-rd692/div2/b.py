import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input())
    
    for i in range(n, n+10001) : 
        a=i
        flag=1
        while a>0 : 
            if a%10 != 0 : 
                if i%(a%10)!=0 : 
                    flag=0
                    break
            a//=10
        if flag==1 : 
            print(i)
            return
    print(-1)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

