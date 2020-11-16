import sys


def solve() : 
    n=input()
    li=[int(i) for i in input().split()]
    n=len(li)
    
    flag=False
    for i in range(1, len(li)) : 
        if li[i]>=li[i-1] : 
            flag=True
            break
    print("YES" if flag==True else "NO")

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

