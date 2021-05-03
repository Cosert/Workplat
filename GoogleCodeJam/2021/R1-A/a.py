import sys; import math; 
CASE=1
ITAC=0



def solve() : 
    n=int(input())
    li=list(map(int, input().split()))
    
    ans=0
    for i in range(1, n) : 
        while li[i]<=li[i-1] : 
            if li[i-1] 
            li[i]*=10
            ans+=1
    
    print(ans)
    
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

