import sys


def solve() : 
    print(len(str(input())))

while True : 
    line=sys.stdin.readline()
    if not line : break
    for cas in range(int(line)) : 
        solve()
    

