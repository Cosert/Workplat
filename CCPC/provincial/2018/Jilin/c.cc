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
const int maxn=1e5; 

int n, tot, li[maxn|1]; 

string ans; 

inline void solve() { 
    scanf("%d", &n); 
    ans.clear(); tot=0; 
    for(int i=0; i<n; i++) ans+='0'; 
    rep(i, n) wi(li[i]); 
    
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

