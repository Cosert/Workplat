import sys


def solve() : 
    n, a, b=map(int, input().split())
    x=ord('a'); m=-1
    s=""
    for i in range(b) : 
        m+=1
        s+=chr(x+m%26)
    for i in range(a-b-1) : s+=chr(x+m%26)
    while n>=len(s): 
        print(s, end='')
        n-=len(s)
    for i in range(n) : print(s[i], end='')
    print()

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

