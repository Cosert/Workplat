#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f

int main() {
    int T;scanf("%d",&T);
    int n,t;

    while(T--) {
        scanf("%d%d",&n,&t);
        int a[n+1];
        int bp[n+1],tp[n+1];
        for(int i=1;i<=n;i++) {
            scanf("%d",a+i);
            if(t<a[i]) {
                ;
            }
        }
        
        int dp[n+1][t+1]={0};

        
    }
    return 0;
}
