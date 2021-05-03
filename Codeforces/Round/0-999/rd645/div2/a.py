import sys


def solve() : 
    n, m=map(int, input().split())
    ans=(n>>1)*m
    if n&1 : ans+=(m&1)+(m>>1)
    print(ans)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

