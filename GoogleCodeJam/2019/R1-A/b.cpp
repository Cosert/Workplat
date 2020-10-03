#include<bits/stdc++.h>

template<typename _tp> inline _tp ri(_tp &_var) { _var=0; bool _ng=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd=='-'){_ng=1; } _rd=(char)getchar(); }
    while('0'<=_rd && _rd<='9') _var=_var*10+(_tp)_rd-48, _rd=(char)getchar(); 
    if(_ng){_var*=-1; } return _var; } 
template<typename _tp> inline bool wo(_tp _var, int _nli=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0){putchar('-'), _var*=-1; } do{_wri[_tpi++]=(char)((_var%10)+48), _var/=10; }while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nli){_nli==2 ? putchar(' ') : putchar('\n'); } return 1; } 

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
//const ll mod=998244353; 
const int maxn=1000000; 

int n, m; 
ll mod[8]={4084080, 3, 5, 7, 11, 13, 16, 17}; 
ll minv[8]; 

/*inline ll qpow(ll a, ll t) { 
    ll sum=1; 
    while(t>0) { 
        if(t&1) sum=(sum*a)%mod[0]; 
        a=(a*a)%mod[0]; 
        t>>=1; 
    } 
    return sum; 
} */

inline ll exgcd(ll a, ll b, ll &x, ll &y) { 
    if(!b) { 
        x=1, y=0; 
        return a; 
    } 
    ll ans=exgcd(b, a%b, y, x); 
    y-=(a/b)*x; 
    return ans; 
} 

inline void init() { 
    for(int i=1; i<=7; i++) { 
        ll x=mod[0]/mod[i]; 
        ll inv, ib, gcd=exgcd(x, mod[i], inv, ib); 
        inv=((inv%mod[0])+mod[0])%mod[0]; 
        minv[i]=(x*inv)%mod[0]; 
    } 
} 

int main() { 
    init(); 
    int Cases=ri(Cases); 
    ri(n), ri(m); 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        //printf("Case #"); wo(tcs); putchar(':'); putchar(' '); 
        ll mo[8]={0, 0, 0, 0, 0, 0, 0, 0}; 
        
        for(int i=1; i<=7; i++) { 
            wo(mod[i]); for(int j=1; j<=17; j++) putchar(' '), wo(mod[i]); 
            putchar('\n'); fflush(stdout); 
            int a; 
            for(int j=1; j<=18; j++) mo[i]+=ri(a); 
            mo[i]%=mod[i]; 
        } 

        ll md[8], ans=0; //, sum=mo[1]*mo[2]*mo[3]*mo[4]*mo[5]*mo[6]*mo[7]; 
        for(int i=1; i<=7; i++) { 
            ans+=(mo[i]*minv[i])%mod[0]; 
            ans%=mod[0]; 
        } 
        ans%=mod[0]; 
        wo(ans, 1); fflush(stdout); 
        int a=ri(a); if(a!=1) break; 
    } 
    return 0; 
} 
