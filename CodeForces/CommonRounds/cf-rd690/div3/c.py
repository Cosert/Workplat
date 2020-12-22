import sys; import math; 
CASE=1; rla=''

mp=[9, 8, 7, 6, 5, 4, 3, 2, 1]


def solve() : 
    n=int(input())
    if n<10 or n>45 : 
        print(n if n<10 else -1)
        return
    
    

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

