#include<bits/stdc++.h>
using namespace std; std::string rla; 
bool CASE=0; 

template<typename _tp> bool wi(_tp &_va){ _va=0; long double va=0.0, vd=0.1; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while(_rd=getchar(), '0'<=_rd && _rd<='9') va=va+((_tp)_rd-48)*vd, vd/=10; } _va=(1-_neg*2)*(_va+(_tp)va); return 1; } 
template<typename _tp> void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline==1?'\n':' '); } 
#define wln(_var) wo(_var, 1)
#define wsp(_var) wo(_var, 2)
bool rstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32) if(_ch==-1){return 0; }else{_ch=getchar(); } } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp.push_back((char)_ch), _ch=getchar(); } _var=_tmp; return 1; } 
void pstr(std::string _var, int _nline=0){ unsigned long long _len=_var.length(), _it=0; { while(++_it<=_len) putchar(_var[_it-1]); } if(_nline) putchar(_nline<2?'\n':' '); } 
#define psln(_var) pstr(_var, 1)
#define pssp(_var) pstr(_var, 2)

#define ld long double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>

#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=(int)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()
#define lc(_tp) _tp<<1
#define rc(_tp) _tp<<1|1
const int inf=0x3f3f3f3f; 
const long long mod=998244353; 
const int maxn=300000; 

int n, m; 
int li[maxn|1];  // we use it to sort the elements for example. 

struct segn { 
    int l, r; 
    int v; 
} tli[maxn<<2|1]; 
void tpushup(int i) { tli[i].v=tli[lc(i)].v^tli[rc(i)].v; } 
void tbuild(int l=1, int r=n, int i=1, int a[]=li) { 
    tli[i].l=l, tli[i].r=r; 
    if(tli[i].l==tli[i].r) { 
        tli[i].v=li[l]; 
        return; 
    } 
    int mid=(l+r)>>1; 
    tbuild(l, mid, lc(i), a), tbuild(mid+1, r, rc(i), a), tpushup(i); 
} 
void tadd(int p, int i=1, int a[]=li) { 
    if(tli[i].l==tli[i].r && tli[i].l==p) { 
        tli[i].v^=li[p]; 
        return; 
    } 
    p<=((tli[i].l+tli[i].r)>>1)? tadd(p, lc(i), a) : tadd(p, rc(i), a); 
    tpushup(i); 
} 
int tqry(int l, int r, int i=1, int a[]=li) { 
    if(l<=tli[i].l && tli[i].r<=r) return tli[i].v; 
    int mid=(tli[i].l+tli[i].r)>>1; 
    if(r<=mid) return tqry(l, r, lc(i), a); 
    else if(l>mid) return tqry(l, r, rc(i), a); 
    return tqry(l, mid, lc(i), a)^tqry(mid+1, r, rc(i), a); 
} 

inline void solve(/*rla*/) { 
    n=stoi(rla); 
    wi(m); 
    rep(i, n) wi(li[i]); 
    tbuild(); 
    
    rep(i, m) { 
        int c, a, b; wi(c); 
        if(c==1) { 
            wi(a), wi(li[a]); 
            tadd(a); 
        } 
        else { 
            wi(a), wi(b); 
            wln(tqry(a, b)); 
        } 
    } 
} 

int main() { 
    
    while(rstr(rla)) { 
        int cases= CASE? (std::stoi(rla)) : 1; 
        for(int cas=1; cas<=cases; cas++) { 
            
            solve(); 
            
        } 
        
    } 
    
    return 0; 
} 

