n=10000000

primes = [True] * (n+1)#范围0到n的列表
p = 2#这是最小的素数
while p * p <= n:#一直筛到sqrt(n)就行了
    if primes[p]:#如果没被筛，一定是素数
        for i in range(p * 2, n + 1, p):
            primes[i] = False
    p += 1

for i in range(len(primes)) :
    if i % 2 > 0:
        if primes[i]:
            if primes[i+2]:
                if primes[i+4]:
                    print(i, i+2, i+4)

