import sys


def solve() : 
    n=int(input())
    print(n)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

