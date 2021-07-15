import sys

pw=[]
def init() : 
    a=2
    for i in range(31) : 
        pw.append(a)
        a*=2
init()

def solve() : 
    n=int(input())
    
    if n==2 : 
        print(2)
        return
    
    a=pw[n-1]; b=0
    for i in range(int(n/2)-1) : a+=pw[i]
    for i in range(int(n/2)-1, n-1) : b+=pw[i]
    
    print(abs(a-b))

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

