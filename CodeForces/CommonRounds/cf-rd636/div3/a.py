import sys


def solve() : 
    n=int(input())
    for i in range(2, 30) : 
        if n%((1<<i)-1)==0 : 
            print(int(n/((1<<i)-1)))
            return
    print(-1)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

