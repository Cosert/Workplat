import sys; import math; 

TESTYPE=0

def solve(rla) : 
    mp=[False for i in range(1001)]
    n=int(rla)
    ans=1
    
    for i in range(2, n+1) : ans=int(ans*i/math.gcd(ans, i))
    print(ans+1)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if TESTYPE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve(rla)
    

