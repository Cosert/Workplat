for cas in range(int(input())): 
    n=int(input())
    s=str(input())
    a, b, j=map(int, [-1, -1, 0])
    
    for i in s: 
        if i=='0' : 
            b=j
        elif a==-1 : 
            a=j
        j+=1
    
    if b>a : s=s[:a]+s[b:]
    print(s)
