import sys

while True : 
    line=sys.stdin.readline()
    if not line : break
    #n, m=map(int, line.split())
    for cas in range(int(line)) : 
        n=int(input())
        m=n%10
        ans=(m-1)*10
        
        j, t=map(int, [1, 1])
        for i in range(4) : 
            if t>n : break
            t*=10
            j+=1
        j-=1
        print(ans+int(j*(j+1)/2))
