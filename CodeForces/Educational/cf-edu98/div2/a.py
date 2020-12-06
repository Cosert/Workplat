import sys


def solve() : 
    a, b=map(int, input().split())
    ans=2*min(a, b); x=max(a,b)-(ans>>1)
    if x : 
        ans+=1
        x-=1
    print(ans+2*x)

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

