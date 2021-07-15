import sys


def solve() : 
    n=int(input())
    print(n)
    for i in range(1, n+1) : print(i, end=' ')
    print()

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

