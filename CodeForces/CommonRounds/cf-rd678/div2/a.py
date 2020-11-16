import sys


def solve() : 
    n, m=map(int, input().split())
    n=sum([int(i) for i in input().split()])
    
    print("YES" if n==m else "NO")

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : solve()
    

