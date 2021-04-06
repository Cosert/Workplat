#pragma GCC optimize("O3")
#include<bits/stdc++.h>
template<typename _tp> bool ri(_tp &_var){ _var=0; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _var=_var*10 + (_tp)_rd-48, _rd=getchar(); } if(_neg) {_var*=-1; } return 1; } 
template<typename _tp> void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline==1?'\n':' '); } 
#define wln(_var) wo(_var, 1)
bool rstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32) if(_ch==-1){return 0; }_ch=getchar(); } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp.push_back((char)_ch), _ch=getchar(); } _var=_tmp; return 1; } 
void pstr(std::string _var, int _nline=0){ unsigned long long _len=_var.length(), _it=0; { while(++_it<=_len) putchar(_var[_it-1]); } if(_nline) putchar(_nline<2?'\n':' '); } 
#define psln(_var) pstr(_var, 1)

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

#define forto(_tmp, _st, _ed) for(long long _tmp=_st; _tmp<=(long long)_ed; _tmp++)
#define fordn(_tmp, _st, _ed) for(long long _tmp=_st; _tmp>=(long long)_ed; _tmp--)
#define rep(_tmp, _ti) for(long long _tmp=1; _tmp<=(long long)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()
#define lc(_tmp) _tmp<<1
#define rc(_tmp) _tmp<<1|1

const int inf=0x3f3f3f3f; 
const ll mod=998244353; 


int n, m; 

int g[101][101]; 
struct nd{int a, b, c, d, e, f; }; 
queue<nd> q; 

const bool TEST=1, FILEIN=0; 
inline bool carry(int& TCS) { 
    return TEST ? ri(TCS) : ri(n); 
} 

inline void init() { 
    ri(n), ri(m); 
    for(int i=1; i<=n; i++) { 
        for(int j=1; j<=m; j++) g[i][j]=getchar(); 
        getchar(); 
    } 
} 



inline void solve() { 
    if(n==2 && m==2) { 
        stack<pii> t, k; 
        int i=1, j=1; 
        g[i][j]=='1'? t.push(g[i][j]) : k.push(g[i][j]); 
        g[i+1][j]=='1'? t.push(g[i+1][j]) : k.push(g[i+1][j]); 
        g[i][j+1]=='1'? t.push(g[i][j+1]) : k.push(g[i][j+1]); 
        g[i+1][j+1]=='1'? t.push(g[i+1][j+1]) : k.push(g[i+1][j+1]); 
        
        if(t.empty()) { 
            wln(0); 
            return; 
        } 
        else { 
            pii a, b, c, d; 
            if(t.size()==1) { 
                a=k.top(); k.pop(); b=k.top(); k.pop(); c=k.top(); k.pop(); d=t.top(); t.pop(); 
                q.push((nd){})
            } 
        } 
    } 
    for(int i=1; i<=n-1; i++) 
} 



int main() { 
#ifdef LOCAL_TEST
    if(FILEIN) { char _tes[]=__FILE__; int _tl=(int)strlen(_tes); _tes[_tl-2]='i', _tes[_tl-1]='n'; (void)!freopen(_tes, "r", stdin); } 
#endif
    
    //init(); 
    
    
    int TCS=(!TEST); 
    while(carry(TCS)) for(int tcsn=1; tcsn<=TCS; tcsn++) { 
            
        init(); 
        solve(); 
    } 
    
    return 0; 
} 

// For interactive problem
 #define main fakemain

int main() { 
    
    
    
    init(); 
    solve(); 
    
    
    
    return 0; 
} 

