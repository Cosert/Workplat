import sys


def solve() : 
    n=input()
    li=[int(i) for i in input().split()]
    
    for i in range(int(n), int(int(n)/2), -1) : 
        print(li[i-1]*-1, end=" ")
    for i in range(int(int(n)/2), 0, -1) : 
        print(li[i-1], end=" ")
    print()

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

