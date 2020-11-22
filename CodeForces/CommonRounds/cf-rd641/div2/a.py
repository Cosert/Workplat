import sys


def solve() : 
    n, m=map(int, input().split())
    d=2
    for i in range(2, n+1) : 
        if n%i==0 : 
            d=i
            break
    print(n+d+(m-1)*2)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

