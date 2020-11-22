import sys


def solve() : 
    n, a, b, c=map(int, input().split())
    s=input()
    x=0; y=0
    
    for i in s : 
        if i=='0' : x+=1
        else : y+=1
    print(min(x*a+y*b, (x+y)*a+c*y, (x+y)*b+c*x))

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

