const int TYP=
1
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

const int maxn=4e5; 

int li[maxn|1]; 

inline bool solve() { 
    int n;  wi(n); 
    rep(i, n) wi(li[i]); 
    
    ll ans=0; 
    
    if(n==1) { 
        wln(li[1]); 
        return 1; 
    } 
    
    rep(i, n) { 
        int t=0; 
        if(i==1 || (i>1 && li[i]>li[i-1])) t++; 
        if(i==n || (i<n && li[i]>li[i+1])) t++; 
        if(t==2) { 
            //cout<<"t "<<i<<endl; 
            
            if(i==1) t=li[2]; 
            else if(i==n) t=li[n-1]; 
            else t=max(li[i-1], li[i+1]); 
            ans+=abs(li[i]-t); 
            li[i]=t; 
        } 
    } 
    
    ans+=li[1]; 
    for(int i=2; i<=n; i++) ans+=abs(li[i]-li[i-1]); 
    ans+=li[n]; 
    
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

