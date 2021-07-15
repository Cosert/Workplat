import sys


def solve() : 
    n=int(input())
    for i in range(n*4, n*2+1, -2) : print(i, end=" ")
    print("")

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : solve()
    

