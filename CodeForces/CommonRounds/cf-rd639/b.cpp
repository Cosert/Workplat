#pragma GCC optimize("O2")
#include<bits/stdc++.h>

template<typename _tp> inline _tp ri(_tp &_var) { _var=0; bool _ng=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd=='-'){_ng=1; } _rd=(char)getchar(); }
    while('0'<=_rd && _rd<='9') _var=_var*10+(_tp)_rd-48, _rd=(char)getchar(); 
    if(_ng){_var*=-1; } return _var; } 
template<typename _tp> inline bool wo(_tp _var, int _nli=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0){putchar('-'), _var*=-1; } do{_wri[_tpi++]=(char)((_var%10)+48), _var/=10; }while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nli){_nli==2 ? putchar(' ') : putchar('\n'); } return 1; } 
#define mcs() for(int Case=ri(Case), tcs=1; tcs<=Case; tcs++)

using namespace std; 
#define ld long double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<long long, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>

const int inf=2114514810; 
const ll mod=998244353; 
const int maxn=100000; 

ll n, m; 
ll a[37]; 

inline void init() { 
    for(ll i=1; i<=36; i++) a[i]= i*(i+1) + i*(i-1)/2; 
    //for(ll i=1; i<=36; i++) wo(a[i], 1); 
} 

int main() { 
    init(); 
#ifndef ONLINE_JUDGE
    freopen("b.in", "r", stdin); 
#endif
    int Case=ri(Case); 
    for(int tcs=1; tcs<=Case; tcs++) { 
        ri(n); ll ans=0; 
        /*if(n<=1) { 
            wo(0, 1); 
            continue; 
        } 

        ll ans=0; 
        while(n>=2) { 
            for(ll i=2; i<=36; i++) if(a[i]>n) { 
                ans++, n-=a[i-1]; 
                break; 
            } 
        } */

        for(int i=36; i>=1; i--) while(n>=a[i]) { 
            n-=a[i]; 
            ans++; 
        } 

        wo(ans, 1); 
    } 
    return 0; 
} 
