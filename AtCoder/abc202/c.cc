const int TYP=
0
; inline void solvetp(int typ, int T=-1); 
#include<bits/stdc++.h>

template<typename _tp> bool wi(_tp &_va){ _va=0; long double va=0.0, vd=0.1; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while(_rd=getchar(), '0'<=_rd && _rd<='9') va=va+((_tp)_rd-48)*vd, vd/=10; } _va=(1-_neg*2)*(_va+(_tp)va); return 1; } 
template<typename _tp> void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline-1?' ':'\n'); } 
#define wln(_var) wo(_var, 1)
#define wsp(_var) wo(_var, 2)
inline bool wstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32-_ed) if(_ch==-1){return 0; }else{_ch=getchar(); } } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp+=(char)_ch, _ch=getchar(); } _var=_tmp; return 1; } 
#define wsln(_var) wstr(_var, 1)
void pstr(std::string _var, int _nline=0){ for(auto &i: _var) { putchar(i); } if(_nline) putchar(_nline-1?' ':'\n'); } 
#define psln(_var) pstr(_var, 1)
#define pssp(_var) pstr(_var, 2)

using namespace std; using ld=long double; using ll=long long; using ull=unsigned long long; using pii=std::pair<int, int>; using pil=std::pair<int, long long>; using pli=std::pair<long long, int>; using pll=std::pair<long long, long long>; 

#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=(int)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()

const int maxn=1e5; 

pii la[maxn|1], lb[maxn|1]; 
int mp[maxn|1]; 

inline bool solve() { 
    memset(mp, 0, sizeof(mp)); 
    
    int n, na=0; wi(n); 
    rep(i, n) { 
        int a; wi(a); 
        if(!na || la[na].first!=a) la[++na]=(pii){a, 1}; 
        else la[na].second++; 
    } 
    rep(i, n) wi(lb[i].first), lb[i].second=i; 
    rep(i, n) { 
        int c; wi(c); 
        mp[c]++; 
    } 
    
    sort(la+1, la+na+1); sort(lb+1, lb+n+1); 
    
    ll ans=0; 
    for(int i=1, j=1; i<=na; i++) { 
        for(; j<=n; j++) { 
            if(la[i].first<lb[j].first) break; 
            if(la[i].first==lb[j].first) ans+=la[i].second*mp[lb[j].second]; 
            if(j==n) break; 
        } 
    } 
    
    wln(ans); 
    
    return 1; 
} 

int main() { 
    
    solvetp(TYP); 
    
    return 0; 
} 

inline void solvetp(int typ, int T) { int cases=T; 
    switch(typ) { 
        case 1: 
            if(cases==-1) wi(cases); 
            for(int cas=1; cas<=cases; cas++) { 
                
                solve(); 
            } break; 
        case 2: 
            while(solve()); 
            break; 
        default: 
            solve(); 
    } 
} 

