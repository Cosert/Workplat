#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

#define maxn 100000
int n,a[maxn+1],d[maxn];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        int jmax=0,jmin=inf,mi=inf,mx=0;

        scanf("%d",a+1);
        for(int i=2;i<=n;i++) {
            scanf("%d",a+i);
            if(a[i]==-1) {
                if(a[i-1]!=-1) {
                    jmin=min(jmin,a[i-1]);
                    jmax=max(jmax,a[i-1]);
                    d[i-1]=-1;
                }
                else d[i-1]=0;
            }
            else {
                if(a[i-1]==-1) {
                    jmin=min(jmin,a[i]);
                    jmax=max(jmax,a[i]);
                    d[i-1]=-1;
                }
                else {
                    d[i-1]=abs(a[i]-a[i-1]);
                    mi=min(mi,d[i-1]);
                    mx=max(mx,d[i-1]);
                }
            }
        }

        int ans2=(jmin+jmax)>>1,ans1=jmax-ans2;
        if(mx==inf) mx=-1;

        printf("%d %d\n",max(ans1,mx),ans2);
    }
    return 0;
}

