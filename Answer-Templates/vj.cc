#pragma GCC optimize("O2")

#include<cstdio>
#include<cctype>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<iostream>
#include<iterator>
#include<algorithm>
#include<string>
#include<bitset>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<fstream>
int absi(int _var) { return (_var ^ (_var>>31)) - (_var>>31); } 
long long absl(long long _var) { return (_var ^ (_var>>63)) - (_var>>63); } 
int maxi(int _var1, int _var2) { return (_var2 & ((_var1 - _var2) >> 31)) | (_var1 & (~(_var1 - _var2) >> 31)); }  
int mini(int _var1, int _var2) { return (_var1 & ((_var1 - _var2) >> 31)) | (_var2 & (~(_var1 - _var2) >> 31)); } 
void swpi(int &_var1, int &_var2) { _var1 ^= _var2 ^= _var1 ^= _var2; } 
int intbit(int _var, int _iter_) { return (_var >> _iter_) & 1; } 

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
const ll mod=1e9+7; 


int n, m; 



inline void init() { 
    
} 

inline void solve() { 
    
} 



int main() { 
    int Samples=    1   ; 
#ifdef LOCAL_TEST
    freopen("vj.in", "r", stdin); 
     ri(Samples);  // Write the number of samples at line 1 of input file.
#endif

    //init(); 
    
    int Cases= 1; 
    //ri(Cases); 
    
    while(Samples--) 
    for(int tcs=1; tcs<=Cases; tcs++) 
    //while(ri(n))
    { 
        init(); 
        solve(); 
    } 

    return 0; 
} 

