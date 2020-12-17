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
const int maxn=1000; 

int n; 

int li[4]={0, 3, 5, 7}; 
int ans[]={0, 0, 0, 0}; 

inline void init() { 
    ri(n); 
    rep(i, 3) ans[i]=0; 
} 

bool dfs(int i, int m) { 
    ans[i]++; 
    if(!(m-li[i])) return 1; 
    if(m-li[i]<0) { 
        ans[i]--; 
        return 0; 
    } 
    m-=li[i]; 
    rep(j, 3) if(dfs(j, m)) return 1; 
    
    ans[i]--; 
    return 0; 
} 

inline void solve() { 
    if(dfs(0, n)) rep(i, 3) wo(ans[i], 1+(i<3)); 
    else wo(-1); 
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

