import sys; import math; 
CASE=0; rla=''



def solve() : 
    n=int(rla)
    s=str(input())
    a=0; b=0; c=0; li=[]
    
    for i in range(n) : 
        if s[i]=='a' : a+=1
        else : b+=1
        if i&1==1 and a!=b : 
            c+=1
            if a>b : a-=1; b+=1; li.append('b')
            else : a+=1; b-=1; li.append('a')
        else : li.append(s[i])
    print(c)
    ans=''.join(li)
    print(ans)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

