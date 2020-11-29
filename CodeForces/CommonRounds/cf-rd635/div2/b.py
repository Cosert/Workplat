import sys


def solve() : 
    x, n, m=map(int, input().split())
    while x>20 : 
        if n==0 : break
        n-=1
        x=(x>>1)+10
    print("YES" if m*10>=x else "NO")

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

