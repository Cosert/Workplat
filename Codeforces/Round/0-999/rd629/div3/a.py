import sys


def solve() : 
    n, m=map(int, input().split())
    print(m-n if n<m else (n%m!=0)*m-n%m)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

