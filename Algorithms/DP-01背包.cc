#include<cstdio>
#include<algorithm>

int main() { 
    int n, m;  // number of items and the maxium volume. 
    int v[n+1], w[n+1];  // values and weights of the listed items. 

    // Input n, m, v, w

    int dp[m+1]={0}; 
    for(int i=1; i<=n; i++) for(int j=m; j>=1; j--) { 
        if(j>=w[i]) dp[i][j]=max(dp[i-1][j], dp[i][j-w[i]]+v[i]); 
        else dp[i][j]=dp[i-1][j]; 
    } 

    int ans=dp[m]; 

    // output ans

    return 0; 
} 
