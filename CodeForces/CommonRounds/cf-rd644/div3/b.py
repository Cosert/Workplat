import sys


def solve() : 
    n=int(input())
    li=[int(i) for i in input().split()]
    li.sort()
    
    m=3999929999999
    for i in range(1, n) : 
        if li[i]-li[i-1]<m : m=li[i]-li[i-1]
    
    print(m)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

