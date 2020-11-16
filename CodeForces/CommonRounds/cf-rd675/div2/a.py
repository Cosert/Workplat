import sys


def solve() : 
    a, b, c=map(int, input().split())
    print(a+b+c-1)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

