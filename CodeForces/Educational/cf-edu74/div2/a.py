cases=int(input())
for cas in range(cases) : 
    a, b=map(int, input().split())
    print("NO" if a-b<2 else "YES")

