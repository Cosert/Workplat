import sys


def solve() : 
    n, k=map(int, input().split())
    li=[int(i) for i in input().split()]
    
    if n==1 : 
        print(sum(li))
        return
    elif n==2 : 
        ans=0
        for i in range(0, n*k-1, 2) : ans+=li[i]
        print(ans)
        return
    
    ans=0
    
    for i in range(k*(int(n/2)-((n&1)==0)), n*k, int(n/2)+1) : ans+=li[i]
    print(ans)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

