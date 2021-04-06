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
struct nd{ 
    int a, b, c, d, e, f; 
}; 
queue<nd> q; 

const bool TEST=1, FILEIN=1; 
inline bool carry(int& TCS) { 
    return TEST ? ri(TCS) : ri(n); 
} 

inline void init() { 
    ri(n), ri(m); 
    for(int i=1; i<=n; i++) { 
        for (int j=1; j<=m; j++) g[i][j]=getchar(); 
        getchar(); 
    } 
    while(!q.empty()) q.pop(); 
} 



inline void solve() { 
    for(int i=1; i<=n-1; i++) for(int j=1; j<=m-1; j++) { 
        int f=0; 
        if(g[i][j]=='1') f|=1; 
        if(g[i+1][j]=='1') f|=2; 
        if(g[i][j+1]=='1') f|=4; 
        if(g[i+1][j+1]=='1') f|=8; 
        switch(f) { 
            case 0:
                break; 
            case 1:
                q.push((nd){i, j, i+1, j, i, j+1}); 
                q.push((nd){i, j, i+1, j, i+1, j+1}); 
                q.push((nd){i, j, i, j+1, i+1, j+1}); 
                break; 
            case 2:
                q.push((nd){i+1, j, i, j, i+1, j+1}); 
                q.push((nd){i+1, j, i, j, i, j+1}); 
                q.push((nd){i+1, j, i+1, j+1, i, j+1}); 
                break; 
            case 3:
                q.push((nd){i, j, i, j+1, i+1, j+1}); 
                q.push((nd){i, j+1, i+1, j+1, i+1, j}); 
                break; 
            case 4:
                q.push((nd){i, j+1, i, j, i+1, j+1}); 
                q.push((nd){i, j+1, i, j, i+1, j}); 
                q.push((nd){i, j+1, i+1, j+1, i+1, j}); 
                break; 
            case 5:
                q.push((nd){i, j, i+1, j, i+1, j+1}); 
                q.push((nd){i+1, j, i+1, j+1, i, j+1}); 
                break; 
            case 6:
                q.push((nd){i, j, i, j+1, i+1, j+1}); 
                q.push((nd){i, j, i+1, j+1, i+1, j}); 
                break; 
            case 7:
                q.push((nd){i, j, i+1, j, i, j+1}); 
                break; 
            case 8:
                q.push((nd){i+1, j+1, i+1, j, i, j+1}); 
                q.push((nd){i+1, j+1, i+1, j, i, j}); 
                q.push((nd){i+1, j+1, i, j+1, i, j}); 
                break; 
            case 9:
                q.push((nd){i, j+1, i+1, j+1, i+1, j}); 
                q.push((nd){i, j, i, j+1, i+1, j}); 
                break; 
            case 10:
                q.push((nd){i, j, i, j+1, i+1, j+1}); 
                q.push((nd){i, j+1, i, j, i+1, j}); 
                break; 
            case 11:
                q.push((nd){i, j, i+1, j, i+1, j+1}); 
                break; 
            case 12:
                q.push((nd){i, j, i+1, j, i+1, j+1}); 
                q.push((nd){i, j, i, j+1, i+1, j}); 
                break; 
            case 13:
                q.push((nd){i, j, i, j+1, i+1, j+1}); 
                break; 
            case 14:
                q.push((nd){i+1, j+1, i+1, j, i, j+1}); 
                break; 
            case 15:
                q.push((nd){i+1, j+1, i+1, j, i, j+1}); 
                q.push((nd){i, j, i+1, j, i, j+1}); 
                q.push((nd){i, j, i+1, j, i+1, j+1}); 
                q.push((nd){i, j, i, j+1, i+1, j+1}); 
                break; 
        } 
    } 
    
    wln(q.size()); 
    while(!q.empty()) { 
        nd t=q.front(); q.pop(); 
        wo(t.a, 2), wo(t.b, 2), wo(t.c, 2), wo(t.d, 2), wo(t.e, 2), wln(t.f); 
    } 
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

