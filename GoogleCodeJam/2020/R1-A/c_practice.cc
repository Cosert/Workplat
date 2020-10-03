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
const int maxn=1e5; 

int n, m; 

struct ifo { int k, u, d, l, r; }; 

ifo li[maxn<<1|1]; 


inline void init() { 
    memset(li, 0, sizeof(li)); 
    
    ri(n), ri(m); 
    
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) { 
        int a=i*m+j; 
        ri(li[a].k); 
        
        li[a].u=i>1 ? (i-1)*m+j : 0; 
        li[a].d=i<n ? (i+1)*m+j : 0; 
        li[a].l=j>1 ? i*m+j-1 : 0; 
        li[a].r=j<m ? i*m+j+1 : 0; 
    } 
} 

inline void solve() { 
    if(n==1 && m==1) { 
        wo(li[2].k); 
        return; 
    } 

    stack<int> q1, q2; 
    ll sum=0, tem=0; 
     
    for(int a=m+1; a<=(n+1)*m; a++) { 
        sum+=li[a].k; 

        ld avg=0; int c=0; 
        if(li[a].u) avg+=li[li[a].u].k, c++; 
        if(li[a].d) avg+=li[li[a].d].k, c++; 
        if(li[a].l) avg+=li[li[a].l].k, c++; 
        if(li[a].r) avg+=li[li[a].r].k, c++; 
        if(c && li[a].k<avg/c) q2.push(a); 
    } 
    tem=sum; 

    while(1) { 
        if(q1.empty()) { 
            if(q2.empty()) { 
                wo(sum); 
                return; 
            } 
            while(!q2.empty()) { 
                int b=q2.top(); q2.pop(); 
                //wo(li[b].k); 
                if(li[b].u) li[li[b].u].d=li[b].d, q1.push(li[b].u); 
                if(li[b].d) li[li[b].d].u=li[b].u, q1.push(li[b].d); 
                if(li[b].l) li[li[b].l].r=li[b].r, q1.push(li[b].l); 
                if(li[b].r) li[li[b].r].l=li[b].l, q1.push(li[b].r); 
                tem-=li[b].k; 
            } 
            sum+=tem; 
        } 
        
        int a=q1.top(); q1.pop(); 

        ld avg=0; int c=0; 
        if(li[a].u) avg+=li[li[a].u].k, c++; 
        if(li[a].d) avg+=li[li[a].d].k, c++; 
        if(li[a].l) avg+=li[li[a].l].k, c++; 
        if(li[a].r) avg+=li[li[a].r].k, c++; 
        if(c && li[a].k<avg/c) q2.push(a); 
    } 
} 

inline void printcases(int tifo, bool _nl=0) { 
    pstr("Case #", 0), wo(tifo, 0), pstr(":", _nl?1:2); 
} 

int main() { 
    int Samples=    1    ; 
#ifdef LOCAL_TEST
    freopen("c.in", "r", stdin); 
    ri(Samples); 
#endif
    int Cases= 1; 
    ri(Cases); 

    

    //init(); 

    while(Samples--) 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        printcases(tcs, 0); // printcases(tcs, 1); 
        init(); 
        solve(); 
    } 

    return 0; 
} 

