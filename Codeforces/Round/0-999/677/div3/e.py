import sys
import math

while True : 
    line=sys.stdin.readline()
    if not line : break
    
    n=int(line)
    m=int(n*n/4)
    for i in range(1, n) : n*=i
    print(int(n/m/2))

