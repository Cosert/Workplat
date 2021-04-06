import sys; import math; 
CASE=1; rla=''



def solve() : 
    n, m=map(int, input().split())
    for i in range(n) :print(chr(ord('a')+i%3), end='')
    print()

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

