#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

#define maxn 200000

int n,a[maxn+1];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        int hi=n;n<<=1;
        for(int i=1;i<=n;i++) scanf("%d",a+i);

        sort(a+1,a+n+1);

        printf("%d\n",abs(a[hi+1]-a[hi]));
    }
    return 0;
}

