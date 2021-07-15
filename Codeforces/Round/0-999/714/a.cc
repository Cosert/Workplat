const bool TYP=
1
; 
#include<bits/stdc++.h>

template<typename _tp> bool wi(_tp &_va){ _va=0; long double va=0.0, vd=0.1; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while(_rd=getchar(), '0'<=_rd && _rd<='9') va=va+((_tp)_rd-48)*vd, vd/=10; } _va=(1-_neg*2)*(_va+(_tp)va); return 1; } 
template<typename _tp> void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline-1?' ':'\n'); } 
#define wln(_var) wo(_var, 1)
#define wsp(_var) wo(_var, 2)
bool wstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32) if(_ch==-1){return 0; }else{_ch=getchar(); } } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp+=(char)_ch, _ch=getchar(); } _var=_tmp; return 1; } 
void pstr(std::string _var, int _nline=0){ for(auto &i: _var) { putchar(i); } if(_nline) putchar(_nline-1?' ':'\n'); } 
#define psln(_var) pstr(_var, 1)
#define pssp(_var) pstr(_var, 2)

using namespace std; using ld=long double; using ll=long long; using ull=unsigned long long; using pii=std::pair<int, int>; using pil=std::pair<int, long long>; using pli=std::pair<long long, int>; using pll=std::pair<long long, long long>; 

#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=(int)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()



inline bool solve() { 
    int n, m, ans[101]={0}; 
    wi(n), wi(m); 
    
    int cnt=n; 
    for(int i=2; i<n; i+=2) { 
        if(!m) break; 
        ans[i]=cnt--, m--; 
    } 
    if(m) { 
        psln("-1"); 
        return 0; 
    } 
    
    for(int i=1, j=1; i<=n; i++) if(!ans[i]) ans[i]=j++; 
    
    rep(i, n) wo(ans[i], 1+(i!=n)); 
    
    return 0; 
} 

inline void solvetp(int typ, int T=-1) { int cases=T; 
    switch(typ) { 
        case 1: 
            if(cases==-1) wi(cases); 
            for(int cas=1; cas<=cases; cas++) { 
                
                solve(); 
            } break; 
        case 2: 
            while(solve()==0); 
            break; 
        default: 
            solve(); 
    } 
} 

int main() { 
    
    solvetp(TYP); 
    
    return 0; 
} 

