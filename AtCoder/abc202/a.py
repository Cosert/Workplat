TYP=0
import sys; import math; 

mp=[0, 6, 5, 4, 3, 2, 1]

def solve() : 
    a, b, c=map(int, input().split())
    print(mp[a]+mp[b]+mp[c])
    return 1

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

