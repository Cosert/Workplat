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
const int maxn=1e5; 

int n, m; 

int la[maxn|1], ca=0; 

inline void init() { 
    ri(n), ri(m); 
    ca=0; 
} 



inline void solve() { 
    if(n==1) { 
        string c; rstr(c); 
        if(c=="W") wo(1); 
        else if(m) wo(1); 
        else wo(0); 
        return; 
    } 
    int comb=0, coml=0, sng=0, lb[2]={0}; 
    bool flag=0, wyes=0; 
    
    for(int c, i=1; i<=n; i++) { 
        c=getchar(); 
        if(c=='W') { 
            if(!flag) { 
                wyes ? la[++ca]=coml : lb[1]=coml; 
                coml=0; 
                sng++, flag=1; 
            } 
            else comb++; 
            wyes=1; 
        } 
        else { 
            flag=0; 
            coml++; 
        } 
    } 
    getchar(); 
    wyes ? lb[0]=coml : lb[1]=coml; 

    sort(la+1, la+ca+1); 

    ll ans=sng+2*comb; 
    rep(i, ca) { 
        if(m>=la[i]) { 
            m-=la[i]; 
            ans+=la[i]*2+1; 
        } 
        else ans+=m*2, m=0; 
    } 
    if(m && lb[0]) { 
        if(m>=lb[0]) { 
            ans+=lb[0]*2; 
            m-=lb[0]; 
        } 
        else ans+=m*2, m=0; 
    } 
    if(m && lb[1]) ans+=2*min(m, lb[1])-1+wyes; 

    wo(ans); 
} 



int main() { 
    int Samples=    1   ; 
#ifndef ONLINE_JUDGE
    freopen("b.in", "r", stdin); 
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
        if(Samples) putchar('\n'); 
    } 
    

    return 0; 
} 

