#include<bits/stdc++.h>
bool CASE=
1
, ITAC=
0
; 
template<typename _tp> inline bool wi(_tp &_va){ _va=0; long double va=0.0, vd=0.1; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while(_rd=getchar(), '0'<=_rd && _rd<='9') va=va+((_tp)_rd-48)*vd, vd/=10; } _va=(1-_neg*2)*(_va+(_tp)va); return 1; } 
template<typename _tp> inline void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline==1?'\n':' '); } 
#define wln(_var) wo(_var, 1)
#define wsp(_var) wo(_var, 2)
inline bool wstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32-_ed) if(_ch==-1){return 0; }else{_ch=getchar(); } } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp+=(char)_ch, _ch=getchar(); } _var=_tmp; return 1; } 
#define wsln(_var) wstr(_var, 1)
inline void pstr(std::string _var, int _eol=0){ for(auto &_it: _var) { putchar(_it); } if(_eol) putchar(_eol<2?'\n':' '); } 
#define psln(_var) pstr(_var, 1)
#define pssp(_var) pstr(_var, 2)

using namespace std; 
using ld=long double; using ll=long long; using ull=unsigned long long; using pii=std::pair<int, int>; 

#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=(int)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()

string li[101]; 

inline bool solve(/*rla*/) { 
    int n; wi(n); 
    
    rep(i, n) wstr(li[i]); 
    
    ll ans=0; 
    for(int i=2; i<=n; i++) { 
        int l=(int)li[i-1].length(), r=(int)li[i].length(); 
        if(l<r) continue; 
        if(li[i]==li[i-1]) li[i]+='0', ans++; 
        else { 
            if(l==r && li[i]>li[i-1]) continue; 
            if(l>r) { 
                rep(j, l-r) li[i]+='0', ans++; 
                int f=0; 
                for(int j=0; j<r; j++) { 
                    if(li[i-1][j]>li[i][j]) { 
                        f=-1; 
                        break; 
                    } 
                    else if(li[i-1][j]<li[i][j]) break; 
                    else f++; 
                } 
                
                if(f>-1 && f<r) continue; 
                if(f==r) { 
                    int p=-1; 
                    string s; 
                    for(int j=r; j<l; j++) { 
                        s+=li[i-1][j]; 
                        if(li[i-1][j]<'9') p=j; 
                    } 
                    if(p>-1) { 
                        for(int j=r, t=0; j<p; j++, t++) li[i][j]=s[t]; 
                        li[i][p]=(char)(li[i-1][p]+1); 
                        continue; 
                    } 
                } 
            } 
            li[i]+='0', ans++; 
        } 
    } 
    
    wln(ans); 
    
    return !CASE; 
} 

inline void putcas(int casnum, char eol='\n') { pstr("Case #", 0), wo(casnum), putchar(':'); putchar(eol); } 

int main() { int cas=0, cases=1; 
    
    if(CASE) wi(cases); 
    
    while(1) { 
        if(CASE && !ITAC) 
            putcas(++cas, ' '); 
        
        
        
        if(solve()) break; 
        
        if(CASE && cas>=cases) break; 
    } 
    
    return 0; 
} 

