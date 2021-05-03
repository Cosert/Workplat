import sys


def solve() : 
    n=int(input())
    for i in range(n) : print(1, end=' ')
    print()

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

