import sys


def solve() : 
    n, m=map(int, input().split())
    la=[int(i) for i in input().split()]
    lb=[int(i) for i in input().split()]
    la.sort()
    lb.sort(reverse=1)
    
    for i in range(len(la)) : 
        if la[i]+lb[i]>m : 
            print("No")
            return 0
    print("Yes")
    

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
        line=sys.stdin.readline()

