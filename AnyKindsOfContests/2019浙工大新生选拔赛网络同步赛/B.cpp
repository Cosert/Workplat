#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,v1,v2,v3;scanf("%d%d%d%d",&n,&v1,&v2,&v3);
    int o1[n+1],t1[n+1],o2[n+1],t2[n+1],o3[n+1],t3[n+1];

    for(int i=1;i<=n;i++) scanf("%d%d%d%d%d%d",&o1[i],&t1[i],&o2[i],&t2[i],&o3[i],&t3[i]);

    int dp[n+1][v1+1][v2+1][v3+1];
    dp[0][3]=0;

    bool b1,b2,b3;

    for(int i=1;i<=n;i++) {
        b1=1;b2=1;b3=1;
        if(v1<o1[i]) b1=0;
        if(v2<o2[i]) b2=0;
        if(v3<o3[i]) b3=0;

        if(b1 && b2 && b3) dp[i+1]
    }

    return 0;
}
