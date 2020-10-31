import sys

mod=int(1000000007)

while True:
    line = sys.stdin.readline()
    if not line : break
    
    n, m = (int(i) for i in line.split())
    a=[int(i) for i in input().split()]
    b=[int(i) for i in input().split()]
    
    ans=int(0)
    for i in range(len(a)) : 
        #print(a[i]*b[i])
        ans=(ans+a[i]*b[i]%mod)%mod
    ans=(ans*pow(m, n-1, mod))%mod
    ans=(ans+pow(m, n, mod))%mod
    print(ans)
