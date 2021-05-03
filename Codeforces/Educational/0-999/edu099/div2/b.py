import sys


def solve() : 
    x=int(input())
    for i in range(1, 2001) : 
        if i*(i+1)/2>=x : 
            n=int(i*(i+1)/2)
            print(i if (n==x)|(n>x+1) else i+1)
            return

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

