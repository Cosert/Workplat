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
#define pil pair<int, long long>
#define pll pair<long long, long long>

const int inf=2114514810; 
const ll mod=998244353; 
const int maxn=10000; 

int n, m; 
map<ll, int> mp; 

struct nd{ 
    ll s; 
    int p; 
} l1[maxn|1], l2[maxn|1]; 

bool cmp1(nd a, nd b) { 
    if(a.p!=b.p) return a.p<b.p; 
    return a.s>b.s; 
} 

bool cmp2(nd a, nd b) { 
    return a.s<b.s; 
} 

inline void init() { 
    ri(n), ri(m); 
    mp.clear(); 
} 

inline void solve() { 
    if(n==1) { 
        if(m&1) wo(m-1, 1); 
        else wo(m/2, 1); 
        return; 
    } 

    int cnt=0, ans=((m&1) ? m-1 : m/2); 
    priority_queue<ll, vector<ll>, greater<ll> > q; 
    for(int i=1; i<=n; i++) { 
        ll a=ri(a); 
        int b=mp[a]; 
        if(!b) { 
            b=mp[a]=++cnt; 
            l1[cnt]=(nd){a, 0}; 
            l2[cnt]=(nd){a, 0}; 
        } 

        l1[b].p++; 
        l2[b].p++; 

        if(l1[b].p>=m) { 
            wo(0, 1); 
            return; 
        } 
    } 

    sort(l1+1, l1+cnt+1, cmp1); 
    sort(l2+1, l2+cnt+1, cmp2); 

    for(int i=1; i<=cnt; i++) { 
        ll a=l1[i].s; int b=l1[i].p, d=m-b, t=0; 
        for(int j=1; j<=cnt; j++) if(l2[j].s!=a) { 
            ll p=l2[j].s/a; 
            if(p*l2[j].p<d) continue; 
            
            if(d<p) { 
                t=d; 
                ans=min(ans, t); 
                continue; 
            } 

            while(d>0) { 
                if(l2[j].s%a==0 && p%2==0) t+=d/2, d-=p; 
                else if(l2[j].s%a==0) t+=d-1; 
                else t+=d; 
            } 
            
        } 
    } 

    wo(ans, 1); 
} 

int main() { 
    //int Cases= ri(Cases); 
    //ri(n); //ri(m); 
    for(int Cases= ri(Cases) , tcs=1; tcs<=Cases; tcs++) { 
        printf("Case #"); wo(tcs); putchar(':'); putchar(' '); //putchar('\n'); 
        init(); 
        solve(); 
    } 
    return 0; 
} 

