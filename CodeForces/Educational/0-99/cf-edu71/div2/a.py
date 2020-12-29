import sys; import math; 
CASE=1; rla=''



def solve() : 
    h, p, f=map(int, input().split())
    a, b=map(int, input().split())
    if a>=b : 
        ans=min(h>>1, p)
        h-=ans<<1; p-=ans
        ans*=a
        print(ans+min(h>>1, f)*b)
    else : 
        ans=min(h>>1, f)
        h-=ans<<1; f-=ans
        ans*=b
        print(ans+min(h>>1, p)*a)

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

