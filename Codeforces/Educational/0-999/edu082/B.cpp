#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

ll n,h,mo,a,b,ans;

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        ans=0;
        scanf("%lld%lld%lld",&n,&a,&b);

        if(n<=a) {
            printf("%lld\n",n);
        }
        else {
            if(n&1) h=(n+1)>>1;
            else h=n>>1;

            ans+=min(h,a);h-=min(h,a);
            if(h>0) {
                mo=h%a;if(mo) ans+=b;
                ans+=mo+((h-mo)/a)*(a+b);
            }
        
            printf("%lld\n",max(n,ans));
        } 
    }
    return 0;
}


