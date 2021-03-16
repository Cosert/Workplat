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

unordered_map<char, int> mp; 

inline void init() { 
    mp['B']=8; 
    mp['W']=-5; 
    mp['L']=0; 
    mp['M']=3; 
} 

inline void solve() { 
    char s[10], c; int n, m; 
    
    scanf("%d:%d %s", &n, &m, s); 
    if(n==12) n=0; 
    if(s[0]=='P') n+=12; 
    
    scanf("%s", s); n-=mp[s[0]]; 
    scanf("%s", s); n+=mp[s[0]]; 
    
    if(n<0) n+=24, printf("Yesterday "); 
    else if(n>=24) n-=24, printf("Tomorrow "); 
    else printf("Today "); 
    
    c= n>=12? 'P' : 'A'; 
    printf("%d:%02d %cM\n", (n+11)%12+1, m, c); 
} 

int main() { 
    //ios::sync_with_stdio(false); 
    //cin.tie(0); 
    
    init(); 
    
    int Cases=1; 
    cin>>Cases; 
    
    for(int Case=1; Case<=Cases; Case++) { 
        printf("Case %d: ", Case); 
        solve(); 
        //putchar('\n'); 
    } 
    
    return 0; 
} 

