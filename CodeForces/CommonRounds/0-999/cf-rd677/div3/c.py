import sys

def solve() : 
    n=int(input())
    li=[int(i) for i in input().split()]
    same=True; a=int(0); j=int(-1)
    for i in li : 
        if i>a : a=i
    for i in range(len(li)) : 
        if li[i]==a : 
            if i>0 :
                if li[i]>li[i-1] : 
                    same=False
                    print(i+1)
                    break
            if i<n-1 : 
                if li[i]>li[i+1] : 
                    same=False
                    print(i+1)
                    break
    if same : print(-1)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : solve()
