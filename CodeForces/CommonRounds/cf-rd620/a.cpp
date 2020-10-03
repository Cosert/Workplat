#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

int d,x,y,a,b;

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%d%d%d%d",&x,&y,&a,&b);
        d=abs(x-y);
        if(d%(a+b)) printf("-1\n");
        else printf("%d\n",d/(a+b));
    }

    return 0;
}
