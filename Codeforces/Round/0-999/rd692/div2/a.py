import sys; import math; 
CASE=1; rla=''



def solve() : 
    n=int(input()); s=str(input())
    m=0
    for i in range(len(s)-1, -1, -1) : 
        if s[i]==')' : m+=1
        else : break
    print("Yes" if m>len(s)-m else "No")

while True : 
    rla=sys.stdin.readline()
    cases=1
    if not rla: break
    if (rla=='\n')|(rla=='') : continue
    if CASE==1 : cases=int(rla)
    for cas in range(cases) : 
        
        solve()
    

