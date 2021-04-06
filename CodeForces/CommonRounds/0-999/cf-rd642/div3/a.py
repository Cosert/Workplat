import sys


def solve() : 
    n, m=map(int, input().split())
    if n==1 : print(0)
    elif n==2 : print(m)
    else : print(2*m)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

