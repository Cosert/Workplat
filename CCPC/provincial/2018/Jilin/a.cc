#include<bits/stdc++.h>
using namespace std; 

#define ld long double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>

#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=(int)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()

const int inf=0x3f3f3f3f; 
const long long mod=1e9+7; 

inline void solve() { 
    int n, ans=0; scanf("%d", &n); 
    
    for(int i=1, j; i<=n; i=j+1) { 
        j=n/(n/i); 
        ans+=(j-i+1)*(n/i); 
    } 
    
    printf("%s\n", ans&1? "odd" : "even"); 
} 

int main() { 
    //ios::sync_with_stdio(false); 
    //cin.tie(0); 
    
    int Cases=1; 
    cin>>Cases; 
    
    for(int Case=1; Case<=Cases; Case++) { 
        printf("Case %d: ", Case); 
        solve(); 
        //putchar('\n'); 
    } 
    
    return 0; 
} 

