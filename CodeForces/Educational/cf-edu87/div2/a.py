import sys


def solve() : 
    a, b, c, d=map(int, input().split())
    if a<=b : 
        print(b)
        return
    a-=b
    if d>=c : print(-1)
    else : print(b+(int(a/(c-d))+(a%(c-d)>0))*c) #(a/(c-d)+(a-a%(c-d)>0))*c

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

