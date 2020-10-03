#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1
#define hst(temp1,temp2) temp1 < temp2 ? temp1:temp2
#define lst(temp1,temp2) temp1 > temp2 ? temp1:temp2
#define inf 0x3f3f3f3f

int n,m;

int main() {
    int T;scanf("%d",&T);int Tc=1;
    for(Tc=1;Tc<=T;Tc++) {
        scanf("%d%d",&n,&m);
        int l=m,h=m,no=0,tp=0;
        while(n--) {
            //printf("%d\n",n);
            int t,ti,a,b;
            scanf("%d%d%d",&ti,&a,&b);
            t=ti-tp;
            tp=ti;

            if(!no) {
                h+=t;l-=t;
                if(l>b || h<a) {
                    no=1;
                    continue;
                }

                l=max(l,a);h=min(h,b);
            }
        }

        if(no) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
