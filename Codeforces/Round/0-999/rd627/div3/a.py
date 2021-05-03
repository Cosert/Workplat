import sys


def solve() : 
    n=int(input()); li=[int(i) for i in input().split()]
    if n==1 : print("YES")
    else : 
        t=li[0]&1
        for i in li : 
            if i&1!=t : 
                print("NO")
                return
        print("YES")

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

