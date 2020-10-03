#include<bits/stdc++.h>

template<typename _tp> _tp ri(_tp &_var){ _var=0; bool _neg=0; char _rd=(char)getchar(); while(_rd<'0' || _rd>'9') { if(_rd == '-') {_neg=1; } _rd=(char)getchar(); } 
    while(_rd>='0' && _rd<='9') _var=_var*10 + (_tp)_rd-48, _rd=(char)getchar(); 
    if(_neg) {_var*=-1; } return _var; } 
template<typename _tp> void wo(_tp _var, int _nline=1){ static char _wri[36]; int _tpi=0; if(_var<0) { putchar('-'), _var*=-1; } 
    do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nline) {if(_nline==2) {putchar(' '); }else putchar('\n'); } } 
void rstr(std::string &_var, bool _ed=0){ char _ch; while((_ch=(char)getchar())&&((_ch!=' ')|_ed)&&_ch!='\n') _var.push_back(_ch); } 
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
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()
#define lowb(_tmp) _tmp&(-1*_tmp)
#define lc(_tmp) _tmp<<1
#define rc(_tmp) _tmp<<1|1

const int inf=0x3f3f3f3f; 
const ll mod=1e9+7; 



inline void init() { 
    
} 

inline void solve() { 
    
} 

inline void printcases(int tifo, bool _nl=0) { 
    pstr("Case #", 0), wo(tifo, 0), pstr(":", 2); 

    if(_nl) putchar('\n'); 
} 

int main() { 
    //init(); 
    
    int Samples=    1    ; 
    int Cases= ri(Cases); 
    //int Cases= 1; 

    

    while(Samples--) 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        printcases(tcs); // printcases(tcs, 1); 
        init(); 
        solve(); 
    } 

    return 0; 
} 

