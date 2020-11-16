import sys


def solve() : 
    a, b, c, d=map(int, input().split())
    print(max(a+b, c+d))

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : solve()
    

