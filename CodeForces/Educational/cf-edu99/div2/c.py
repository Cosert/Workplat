import sys


def solve() : 
    a, b=map(int, input().split())
    print(a-1, b)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

