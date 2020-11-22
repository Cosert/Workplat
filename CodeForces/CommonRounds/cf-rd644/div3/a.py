import sys


def solve() : 
    a, b=map(int, input().split())
    if a<b : a*=2
    else : b*=2
    print(max(a, b)*max(a, b))

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

