#pragma GCC optimize("O3")
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
const ll mod=998244353; 


int li[5], n; 



inline void init() { 
    n=0; 
    
    rep(i, 4) ri(li[i]), n+=li[i]; 
} 



inline void solve() { 
    if(n==1) { 
        rep(i, 4) { 
            if(li[i]) pstr("Ya", 1+(i<4)); 
            else pstr("Tidak", 1+(i<4)); 
        } 
        return; 
    } 

    string a, b, c, d; 
    if(li[4]) { 
        if(!li[1] && !li[2]) { 
            pstr("Tidak Tidak "); 
            li[3] ? pstr("Ya ") : pstr("Tidak "); 
            pstr("Tidak", 1); 
        } 
        else if(li[1] && !li[2]) { 
            b="Tidak", c="Tidak"; 
            (li[1]&1) ? a="Ya", d="Tidak" : a="Tidak", d="Ya"; 
            if(li[3]) (li[1]&1) ? b="Ya", c="Tidak" : b="Tidak", c="Ya"; 
            
            pstr(a, 2), pstr(b, 2), pstr(c, 2), pstr(d, 1); 
        } 
        else { 
            
        } 
    } 

} 



int main() { 
    int Samples=    1   ; 
#ifndef ONLINE_JUDGE
    freopen("h.in", "r", stdin); 
     ri(Samples); 
#endif
    
    //init(); 
    

    while(Samples--) { 
        int Cases= 1; 
         ri(Cases); 

        for(int tcs=1; tcs<=Cases; tcs++) { 
        
            init(); 
            solve(); 
        } 
    } 
    

    return 0; 
} 

