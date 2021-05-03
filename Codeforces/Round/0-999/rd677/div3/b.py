import sys

def solve() : 
    n=int(input())
    li=[int(i) for i in input().split()]
    l=False; ans, t=map(int, [0, 0])
    for i in li : 
        if i==0 : t+=1
        else : 
            if l==True : ans+=t
            else : l=True
            t=0
    print(ans)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : solve()
