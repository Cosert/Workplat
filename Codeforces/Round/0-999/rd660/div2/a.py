for cas in range(int(input())) : 
    n=int(input())
    if n<=30 : print("NO")
    else : 
        print("YES")
        n=n-30
        if (n==6)|(n==10)|(n==14) : print("15 10 6", n-1)
        else : print("14 10 6", n)
        
