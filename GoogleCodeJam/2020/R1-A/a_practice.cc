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
    string s, mid[51]; 
    string lans, rans; 
    int l=0, r=0, m=0; 

    for(int num=1; num<=n; num++) { 
        rstr(s); 
        int a=0, b=(int)s.length()-1; 
        if(s[0]!='*') for(a=0; a<=b; a++) { 
            if(s[a]=='*') { 
                if(a>l) l=a; 
                break; 
            } 
            if(a<l) { 
                if(s[a]!=lans[a]) { 
                    pstr("*"); 
                    return; 
                } 
            } 
            else lans.push_back(s[a]); 
        } 
        if(s[b]!='*') for(int i=0; b>=a; b--, i++) { 
            if(s[b]=='*') { 
                if(i>r) r=i; 
                break; 
            } 
            if(i<r) { 
                if(s[b]!=rans[i]) { 
                    pstr("*"); 
                    return; 
                } 
            } 
            else rans.push_back(s[b]); 
        } 

        if(b-a>1) { 
            m++; 
            for(int i=a+1; i<b; i++) if(s[i]!='*') mid[m].push_back(s[i]); 
        } 
    } 

    reverse(all(rans)); 
    pstr(lans, 0); 
    for(int i=1; i<=m; i++) pstr(mid[i], 0); 
    pstr(rans); 
} 

inline void printcases(int tifo, bool _nl=0) { 
    pstr("Case #", 0), wo(tifo, 0), pstr(":", 2); 

    if(_nl) putchar('\n'); 
} 

int main() { 
    int Samples=    1    ; 
#ifdef LOCAL_TEST
    Samples=    1   ; 
    freopen("a.in", "r", stdin); 
#endif
    int Cases= 1; 
    ri(Cases); 

    //init(); 
    
    

    while(Samples--) 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        printcases(tcs); // printcases(tcs, 1); 
        init(); 
        solve(); 
    } 

    return 0; 
} 

