#pragma GCC optimize("O2")
#include<bits/stdc++.h>

int absi(int _var) { return (_var ^ (_var>>31)) - (_var>>31); } 
long long absl(long long _var) { return (_var ^ (_var>>63)) - (_var>>63); } 
int maxi(int _var1, int _var2) { return (_var2 & ((_var1 - _var2) >> 31)) | (_var1 & (~(_var1 - _var2) >> 31)); }  
int mini(int _var1, int _var2) { return (_var1 & ((_var1 - _var2) >> 31)) | (_var2 & (~(_var1 - _var2) >> 31)); } 
void swpi(int &_var1, int &_var2) { _var1 ^= _var2 ^= _var1 ^= _var2; } 
int intbit(int _var, int _iter_) { return (_var >> _iter_) & 1; } 

template<typename _tp> inline _tp ri(_tp &_var) { _var=0; bool _neg=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd == '-') {_neg=1; } _rd=(char)getchar(); } 
    while(_rd>='0' && _rd<='9') _var=_var*10 + (_tp)_rd-48, _rd=(char)getchar(); 
    if(_neg) {_var*=-1; } return _var; } 
template<typename _tp> inline void wo(_tp _var, int _nline=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0) { putchar('-'), _var*=-1; } 
    do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nline) {if(_nline==2) {putchar(' '); }else putchar('\n'); } } 

#define mcs() for(int Case=ri(Case), tcs=1; tcs<=Case; tcs++)
#define eofi(_tmp) while(scanf("%d", &_tmp)!=EOF)
#define eofl(_tmp) while(scanf("%lld", &_tmp)!=EOF)
#define eofd(_tmp) while(scanf("%lf", &_tmp)!=EOF)

using namespace std; 

#define ld long double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>

#define lc(_tmp) _tmp<<1
#define rc(_tmp) _tmp<<1|1

const int inf=0x3f3f3f3f; 
const int mod=1e9+7; 
const int maxn=200; 

int n, m, k; 
struct path{int sx, sy, tx, ty; } g[maxn|1]; 
char op[maxn*maxn+25]; int cnt=0; 

int main() { 
    ri(n), ri(m); ri(k); 
    int a, b; 
    bool flag=1; 
    for(int i=1; i<=k; i++) { 
        a=ri(a), b=ri(b); 
        g[i].sx=a, g[i].sy=b; 
    } 
    for(int i=1; i<=k; i++) { 
        a=ri(a), b=ri(b); 
        g[i].tx=a, g[i].ty=b; 
        if(absi(g[i].tx-g[i].sx)+absi(g[i].ty-g[i].sy) > n*m*2) flag=0; 
    } 

    for(int i=1; i<=n; i++)

    return 0; 
} 

