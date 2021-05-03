import sys; import math; 
CASE=1; rla=''



def solve() : 
    mp=[0]*101
    n=int(input())
    li=[int(i) for i in input().split()]
    if n<=2 : 
        print(n-1); return
    for i in range(n-1) : 
        for j in range(i+1, n) : mp[li[j]-li[i]]=1
    print(sum(mp))

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    
# Bye, 2020, Forever
