for sadf in range(int(input())) : 
    n=int(input())
    m=n%10
    x=0
    while n>=1 : 
        x+=1
        n/=10
    print(int(10*(m-1)+x))
