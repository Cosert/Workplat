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
const ll mod=998244353; 
const int maxn=100000; 

int n, m; 
int a[maxn|1], b[maxn|1]; 
int va[maxn|1], vb[maxn|1]; 

inline void init() { 
    memset(va, 0, sizeof(va)); 
    memset(vb, 0, sizeof(vb)); 
} 

int main() { 
    for(int Cases= ri(Cases) , tcs=1; tcs<=Cases; tcs++) { 
        printf("Case #"); wo(tcs); putchar(':'); putchar(' '); 
        init(); 
        ri(n), ri(m); 
        
        for(int i=1; i<=n; i++) ri(a[i]); 
        for(int i=1; i<=n; i++) ri(b[i]); 

        int l=a[1], r=b[1]; ll ans=0; 
        vector<pii> li; 
        if(-1*m <= l-r <= m) 
        for(int i=1; i<=n; i++) { 
            bool flag=0; 
            if(a[i]>l) { 
                
            } 
        } 
    } 
    return 0; 
} 
