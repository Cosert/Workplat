#include<bits/stdc++.h>

using namespace std; using ld=long double; using ll=long long; using ull=unsigned long long; using pii=std::pair<int, int>; 

#define fir first
#define sec second

struct nd{ 
    int w, h; 
} li[10001]; 
int dp[10001]; 

int main() { 
    memset(dp, 0, sizeof(dp)); 
    
    int n, x, y, tot=0; cin>>n>>x>>y; 
    for(int i=1; i<=n; i++) { 
        scanf("%d%d", &li[i].w, &li[i].h); 
        tot+=li[i].w; 
    } 
    
    sort(li+1, li+n+1, [](const nd& a, const nd& b){ return a.h>b.h; }); 
    
    if(li[1].h==y) { 
        puts(tot<=x? "-1" : "impossible"); 
        return 0; 
    } 
    else if(tot>2*x || li[1].h>y) { 
        puts("impossible"); 
        return 0; 
    } 
    
    int p=1; if(n>1) for(int i=1; i<=n-1; i++) { 
        if(li[i+1].h>y-li[i].h) { 
            li[i+1].h=li[i].h; 
            li[i+1].w+=li[i].w; 
            p++; 
        } 
        else break; 
    } 
    
    for(int i=p; i<=n; i++) for(int j=x-li[i].w; j>=0; j--) 
        dp[j+li[i].w]=max(dp[j+li[i].w], dp[j]+li[i].w); 
    
    tot-dp[x]<=x? printf("%d\n", li[1].h) : puts("impossible"); 
    
    return 0; 
} 
