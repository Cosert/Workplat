#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;scanf("%d",&n);

    int a[n+1];

    for(int i=1;i<=n;i++) {
        scanf("%d",&a[i]);

        if(!a[i]) a[i]=-1;
        else {
            if(a[i]%2) a[i]=1;
            else a[i]=0;
        }
    }

    const int inf=10000000;
    int dp[n+1][2];
    

    return 0;
}
