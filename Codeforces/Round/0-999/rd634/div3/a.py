import sys


def solve() : 
    n=int(input())
    if n<3 : print(0)
    else : print((n>>1)-1+(n&1))

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

