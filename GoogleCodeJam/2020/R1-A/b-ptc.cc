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

#define mcs() for(int Case=ri(Case), tcs=1; tcs<=Case; tcs++)
#define eofi(_tmp) while(scanf("%d", &_tmp)!=EOF)
#define eofl(_tmp) while(scanf("%lld", &_tmp)!=EOF)

using namespace std; 

#define ld long double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<long long, int>
#define pil pair<int, long long>
#define pll pair<long long, long long>

#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.begin(),_tmp.end()
#define lowb(_tmp) _tmp&(-1*_tmp)
#define lc(_tmp) _tmp<<1
#define rc(_tmp) _tmp<<1|1

const int inf=0x3f3f3f3f; 
const ll mod=1e9+7; 

int n; 

inline void init() { 
    ri(n); 
} 

inline void solve() { 
    
    if(n<=32) { 
        for(int i=1; i<=n; i++) wo(i, 2), wo(1); 
        return; 
    } 
    
    n-=32; int ex=32, i; 
    bitset<32> q(n); 
    
    bool lf=1; 

    for(i=1; i<=32; i++) { 
        if(q[i-1]) { 
            if(lf) for(int j=1; j<=i; j++) wo(i, 2), wo(j), lf=0; 
            else for(int j=i; j>=1; j--) wo(i, 2), wo(j), lf=1; 
        } 
        else wo(i, 2), wo(lf? 1 : i), ex--; 
    } 
    
    for(i=1; i<=ex; i++) wo(i+32, 2), wo(lf? 1 : i+32); 
} 

inline void printcases(int tifo, bool _nl=0) { 
    pstr("Case #", 0), wo(tifo, 0), pstr(":", _nl?1:2); 
} 

int main() { 
    int Samples=    1    ; 
#ifdef LOCAL_TEST
    freopen("b.in", "r", stdin); 
    ri(Samples); 
#endif
    int Cases= 1; 
    ri(Cases); 

    //init(); 
    
    

    while(Samples--) 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        printcases(tcs, 1); // printcases(tcs, 1); 
        init(); 
        solve(); 
    } 

    return 0; 
} 

