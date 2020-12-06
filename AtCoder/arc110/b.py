import sys; import math; 

TESTYPE=0

L=int(10000000000)

def solve(rla) : 
    n=int(rla)
    s=str(input())
    if n==1 : 
        print(L if s[0]=='0' else 2*L); return
    if (n==2)&(s=='11') : 
        print(L); return

    m=0; x=1; p=0
    for i in range(min(n, 3)) : 
        if s[i]=='0' : 
            x=0; p=i+1
            break
    if (x>0)&(n>=3) : 
        print(0); return
    for i in range(p, n) : 
        if ((x==0)&(s[i]=='0'))|((x==1)&(s[i]=='0'))|((x==2)&(s[i]=='1')) : 
            print(0); return
        if s[i]=='0' : 
            x=0
            m+=1
        else : x+=1
    m+=ord(s[n-1])-ord('0')
    
    print(L-m)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if TESTYPE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve(rla)
    

