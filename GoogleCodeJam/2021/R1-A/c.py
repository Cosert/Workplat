import sys; import math; 
CASE=1
ITAC=0

inf=0x3f3f3f3f3f3f

def gcd(x, y) : 
    mi=0
    if x > y : mi=y
    else : mi=x
    
    for i in range(1,smaller + 1) : 
        if((x % i == 0) and (y % i == 0)) : res=i
    
    return res

def solve() : 
    
    n, m=map(int, input().split())
    la=[]
    lb=[]
    mi=inf; mx=-1
    mis=""; mxs=""
    
    for i in range(n) : 
        a, b=map(str, input().split())
        la.append(a)
        lb.append(int(b))
        if lb[i]>mx : mx=lb[i]; mxs=la[i]
        if lb[i]<mi : mi=lb[i]; mis=la[i]
    
    ans=""
    
    if mi==0 : 
        for i in range(m) : 
            if mis[i]=='T' : ans+='F'
            else : ans+='T'
        print(ans, str(m)+'/1')
        return 0
    elif mx==m or n==1 : 
        print(mxs, str(mx)+'/1')
        return 0
    
    
    return -1*CASE

def putcas(casnum, eol='\n') : 
    print('Case #'+str(casnum)+':', end=eol)

cas=0; cases=1

if CASE==1 : cases=int(input())

while True : 
    cas+=1; 
    if CASE==1 and ITAC==0 : putcas(cas, ' ')
    
    
    
    if solve()==1 : break
    
    
    
    if CASE==1 and cas>=cases : break

