#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define inf 0x3f3f3f3f
#define maxn 100000

int n,x[maxn+1],y[maxn+1];

int main() {
    int a,b,v,c;
    scanf("%d",&n);

    if(n&1) {
        while(n--) scanf("%d%d",&a,&b);
        printf("nO");
    }
    else {
        for(int i=1;i<=(n>>1);i++) scanf("%d%d",x+i,y+i);
        scanf("%d%d",&a,&b);
        v=x[1]-(a*-1);
        c=y[1]-(b*-1);

        bool sim=true;

        for(int i=2;i<=(n>>1);i++) {
            scanf("%d%d",&a,&b);

            if(sim && (x[i]-(a*-1)!=v || y[i]-(b*-1)!=c)) sim=false; 
        }

        if(sim) printf("YES");
        else printf("NO");
    }
    return 0;
}

