import sys


def solve() : 
    n=int(input())
    if int(n/2)%2==1 : 
        print("NO")
        return
    print("YES")
    ans=0
    t=2
    for i in range(int(n/2)) : 
        print(t, end=" ")
        ans+=t
        t+=2
    t=1
    for i in range(int(n/2)-1) : 
        print(t, end=" ")
        ans-=t
        t+=2
    print(ans)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

