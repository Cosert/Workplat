TYP=1   
import sys; import math; 



def solve() : 
    n, k=map(int, input().split())
    li=[int(i) for i in input().split()]
    
    li.sort()
    
    ans=[li[0]-1, k-li[len(li)-1]]
    
    for i in range(len(li)-1) : 
        if li[i+1]==li[i] : continue
        cur=(li[i+1]-li[i]-1)//2+((li[i+1]-li[i]-1)&1)
        ans.append(cur)
    
    ans.sort(reverse=True)
    
    print((ans[0]+ans[1])/k)
    
    return 1

def putcas(casnum, eol='\n') : 
    print('Case #'+str(casnum)+':', end=eol)
def solvetp(TYP, T=-1) : 
    if TYP==1 : 
        cases=T
        if cases==-1 : cases=int(input())
        for cas in range(cases) : 
            putcas(cas+1, ' ')
            
            solve()
    elif TYP==2 : 
        while True : 
            if solve()==0 : break
            
    else : solve()



solvetp(TYP)

