#include<cstdio>
#include<algorithm>

int main() { 
    int n, m;  // number of items and the maxium volume. 
    int val[n+1], wei[n+1];  // values and weights of the listed items. 
    
    // Input n, m, v, w
    
    int dp[m+1]={0}; 
    for(int i=1; i<=n; i++) if(m>=wei[i]) for(int j=m; j>=wei[i]; j--) 
        if(j>=wei[i]) dp[j]= (dp[j]>=dp[j-wei[i]]+val[i]) ? dp[j] : dp[j-wei[i]]+val[i]; 
    
    int ans=dp[m]; 
    
    // output ans
    
    return 0; 
} 
