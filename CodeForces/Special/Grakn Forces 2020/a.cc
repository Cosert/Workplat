#pragma GCC optimize("O3")
#include<bits/stdc++.h>

template<typename _tp> bool ri(_tp &_var){ _var=0; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') {if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } 
    while(_rd>='0' && _rd<='9') _var=_var*10 + (_tp)_rd-48, _rd=getchar(); 
    if(_neg) {_var*=-1; } return 1; } 
template<typename _tp> void wo(_tp _var, int _nline=1){ static char _wri[64]; int _tpi=0; if(_var<0)putchar('-'), _var*=-1; 
    do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nline) putchar(_nline==1?'\n':' '); } 
bool rstr(std::string &_var, bool _ed=0){ _var.clear(); auto _ch=getchar(); while(_ch<=32) {if(_ch==-1){return 0; }_ch=getchar(); } 
    while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _var.push_back((char)_ch), _ch=getchar(); 
    return 1; } 
void pstr(std::string _var, int _nline=1){ unsigned long long _len=_var.length(), _it=0; while(++_it<=_len) putchar(_var[_it-1]); 
    if(_nline) putchar(_nline==1?'\n':' '); } 

#define eofi(_tmp) while(scanf("%d", &_tmp)!=EOF)
#define eofl(_tmp) while(scanf("%lld", &_tmp)!=EOF)

using namespace std; 

#define Ld long double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<long long, int>
#define pil pair<int, long long>
#define pll pair<long long, long long>

#define rng(_tmp, _st, _ed) for(int _tmp=_st; _tmp<=_ed; _tmp++)
#define rvrng(_tmp, _st, _ed) for(int _tmp=_st; _tmp>=_ed; _tmp--)
#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()
#define lc(_tmp) _tmp<<1
#define rc(_tmp) _tmp<<1|1

const int inf=0x3f3f3f3f; 
const ll mod=998244353; 
const int maxn=100; 

int n, m; 

int l1[maxn|1], l2[maxn|1], l3[maxn|1], ans[maxn|1]; 

inline void init() { 
    ri(n); 
    ans[0]=0; 
    rep(i, n) ri(l1[i]); 
    rep(i, n) ri(l2[i]); 
    rep(i, n) ri(l3[i]); 
} 



inline void solve() { 
    rep(i, n-1) { 
        int sel[3]={l1[i], l2[i], l3[i]}; 
        rng(j, 0, 2) if(sel[j]!=ans[i-1]) ans[i]=sel[j]; 
    } 

    int sel[3]={l1[n], l2[n], l3[n]}; 
    rng(i, 0, 2) if(sel[i]!=ans[1] && sel[i]!=ans[n-1]) ans[n]=sel[i]; 
    rep(i, n) wo(ans[i], 1+(i!=n)); 
} 



int main() { 
    int Samples=    1   ; 
#ifndef ONLINE_JUDGE
    freopen("a.in", "r", stdin); 
     ri(Samples); 
#endif
    
    //init(); 
    

    while(Samples--) { 
        int Cases= 1; 
         ri(Cases); 

        for(int tcs=1; tcs<=Cases; tcs++) { 
            
            init(); 
            solve(); 
        }
        if(Samples) putchar('\n'); 
    } 
    

    return 0; 
} 

