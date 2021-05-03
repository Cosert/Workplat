#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1

#define inf 0x3f3f3f3f
#define maxn 100

int n, b[maxn|1], a[maxn<<1|1]; 

int main() {
    int T;scanf("%d",&T);
    while(T--) { 
        scanf("%d", &n); 

        scanf("%d", b+1); 
        for(int i=2; i<=n; i++) { 
            scanf("%d", b+i); 
        } 
    } 
    return 0; 
}

