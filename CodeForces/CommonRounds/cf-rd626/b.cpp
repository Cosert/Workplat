#pragma GCC optimize("O2")
#include<bits/stdc++.h>

int absi(int _temp) { return (_temp ^ (_temp>>31)) - (_temp>>31); } 
long long absl(long long _temp) { return (_temp ^ (_temp>>63)) - (_temp>>63); } 
int maxi(int _temp1_, int _temp2_) { return (_temp2_ & ((_temp1_ - _temp2_) >> 31)) | (_temp1_ & (~(_temp1_ - _temp2_) >> 31)); }  
int mini(int _temp1_, int _temp2_) { return (_temp1_ & ((_temp1_ - _temp2_) >> 31)) | (_temp2_ & (~(_temp1_ - _temp2_) >> 31)); } 
void swpi(int &_temp1_, int &_temp2_) { _temp1_ ^= _temp2_ ^= _temp1_ ^= _temp2_; } 
int intbit(int _temp_, int _iter_) { return (_temp_ >> _iter_) & 1; } 

template<typename _tp> inline _tp sti(_tp &_var) { _var=0; bool _neg=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd == '-') {_neg=1; } _rd=(char)getchar(); } 
    while(_rd>='0' && _rd<='9') _var=_var*10 + (_tp)_rd-48, _rd=(char)getchar(); 
    if(_neg) {_var*=-1; } return _var; } 
template<typename _tp> inline void sto(_tp _var, int _nline=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0) { putchar('-'), _var*=-1; } 
    do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nline) {if(_nline==2) {putchar(' '); }else putchar('\n'); } } 
#define scd(_temp_) scanf("%lf", &_temp_)
#define mcases() for(int Case=sti(Case), tcs=1; tcs<=Case; tcs++)
#define eofi(_temp_) while(scanf("%d", &_temp_)!=EOF)
#define eofl(_temp_) while(scanf("%lld", &_temp_)!=EOF)
#define eofd(_temp_) while(scanf("%lf", &_temp_)!=EOF)

using namespace std; 

#define doub double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>

#define lc(_temp_) _temp_<<1
#define rc(_temp_) _temp_<<1|1

#define inf 0x3f3f3f3f
const int mod=1e9+7; 
#define maxn 40000

ll n, m, k; 
ll a[maxn|10], b[maxn|10], ca=0, cb=0, as[maxn|10], bs[maxn|10]; 

struct que{ll l, w, s; }; 
//queue<que> q; que t; 

int main() {
    sti(n), sti(m), sti(k); 

    a[0]=0; b[0]=0; as[0]=0, bs[0]=0; 

    for(ll i=1; i<=n; i++) { 
        sti(a[i]); 
        if(a[i]!=1) { 
            ca++; 
            as[ca]=i; 
        } 
    } 
    ca++; as[ca]=n+1; 

    for(ll i=1; i<=m; i++) { 
        sti(b[i]); 
        if(b[i]!=1) { 
            cb++; 
            bs[cb]=i; 
        } 
    } 
    cb++; bs[cb]=m+1; 

    /*for(int i=0; i<=ca; i++) sto(as[i], 2); 
    putchar('\n'); 
    for(int j=0; j<=cb; j++) sto(bs[j], 2); 
    putchar('\n'); */

    ll ans=0; 

    for(ll i=1; i<=ca; i++) { 
        for(ll j=1; j<=cb; j++) { 
            ll w=as[i]-as[i-1]-1, l=bs[j]-bs[j-1]-1; 
            if(l*w>=k) { 
                for(ll t=1; t<=w && t<=k; t++) if(k%t==0 && k/t<=l) { 
                    ll z=k/t; 
                    ans+=(l-z+1)*(w-t+1); 
                } 
            } 
        } 
    } 

    sto(ans); 

    return 0;
}

