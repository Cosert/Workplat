for _tes in range(int(input())) : 
    n, r = map(int, input().split())
    if n<=1 : print(1)
    else : 
        ans=int(0)
        if n<=r : 
            r=n-1
            ans=1
        print(int(ans+((r+1)*r)/2))

