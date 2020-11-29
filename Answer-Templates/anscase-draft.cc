#pragma GCC optimize("O2")// #pragma GCC optimize("O3") // Activite it if OJ supports O3(HDU doesn't)
//#include<bits/stdc++.h>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<iterator>
std::string rda; 
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
#include<cassert>
#include<fstream>

/*int absi(int _var) { return (_var ^ (_var>>31)) - (_var>>31); } 
long long absl(long long _var) { return (_var ^ (_var>>63)) - (_var>>63); } 
int maxi(int _var1, int _var2) { return (_var2 & ((_var1 - _var2) >> 31)) | (_var1 & (~(_var1 - _var2) >> 31)); }  
int mini(int _var1, int _var2) { return (_var1 & ((_var1 - _var2) >> 31)) | (_var2 & (~(_var1 - _var2) >> 31)); } 
void swpi(int &_var1, int &_var2) { _var1 ^= _var2 ^= _var1 ^= _var2; } 
int intbit(int _var, int _iter_) { return (_var >> _iter_) & 1; }  */

template<typename _tp> bool wi(_tp &_va){ _va=0; _tp va=0.0; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while((_rd=getchar()) && '0'<=_rd && _rd<='9') va=va/10 + (_tp)_rd-48; } _va=(1-_neg*2)*(_va+va); return 1; } 
//template<typename _tp> _tp
auto rdn(){ long long va=0; long double va1=0.0; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){exit(0); } _rd=getchar(); } { while('0'<=_rd && _rd<='9') va=va*10 + (long long)_rd-48, _rd=getchar(); } { if(_rd=='.') while((_rd=getchar()) && '0'<=_rd && _rd<='9') va1=va1/10 + (long double)_rd-48; } return (va+va1)*(1-_neg*2); } 
template<typename _tp> void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline==1?'\n':' '); } 
#define wln(_var) wo(_var, 1)
#define ws(_var) wo(_var, 2)
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


const bool TESTYPE=0, FILEIN=0, INTAC=0; 
const int inf=0x3f3f3f3f; 
const long long mod=1e9+7; 


int n, m; 



inline void init() { 
    
} 

inline void solve() { 
    int a; 
    a=rdn(); 
    wln(a); 
} 

int main() { 
    if(FILEIN && !INTAC) { 
#ifdef LOCAL_TEST
        char _tes[]=__FILE__; int _tl=(int)strlen(_tes); _tes[_tl-2]='i', _tes[_tl-1]='n'; (void)!freopen(_tes, "r", stdin); 
#endif
    } 
    //init(); 
    
    if(INTAC) init(), solve(); 
    else while(rstr(rard)) { 
        int TCS= TESTYPE?std::stoi(rda):1; 
        for(int tcsn=1; tcsn<=TCS; tcsn++) { 
            
            init(); 
            solve(); 
            
        } 
        
    } 
    
    return 0; 
} 

