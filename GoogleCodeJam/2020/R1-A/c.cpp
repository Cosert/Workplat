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

const int maxn=1e5; 
const int na=1e5+9; 

int n, m; 

struct nd { int v, u, d, l, r; bool que; } li[maxn+10]; 

inline void init() { 
    memset(li, 0, sizeof(li)); 
    
    ri(n), ri(m); 
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) { 
        int a=i*m+j; 
        ri(li[a].v); 
        
        li[a].u=i-1>=0 ? (i-1)*m+j : na; 
        li[a].d=i+1<n ? (i+1)*m+j : na; 
        li[a].l=j-1>=0 ? i*m+j-1 : na; 
        li[a].r=j+1<m ? i*m+j+1 : na; 
    } 
} 

inline void solve() { 
    queue<int> q; 
    ll ans=0, res=0; 
    for(int i=0; i<n*m; i++) q.emplace(i), li[i].que=1, res+=li[i].v; 
    
    bool flag; 
    do{ 
        flag=0, ans+=res; 
        
        int siz=(int)q.size(); 
        while(siz--) { 
            if(!li[q.front()].v) continue; 
            int i=q.front(); q.pop(); 
            nd &a=li[i]; a.que=0; 
            
            ld sum=0; int num=0; 
            if(a.u!=na) num++, sum+=li[a.u].v; 
            if(a.d!=na) num++, sum+=li[a.d].v; 
            if(a.l!=na) num++, sum+=li[a.l].v; 
            if(a.r!=na) num++, sum+=li[a.r].v; 
            if(num && sum/num>a.v) flag=1, q.emplace(i), a.que=1; 
        } 
        siz=(int)q.size(); 
        while(siz--) { 
            int i=q.front(); q.pop(); 
            nd &a=li[i]; res-=a.v, a.que=0; 
            while(a.u!=na && li[a.u].que) a.u=li[a.u].u; 
            while(a.d!=na && li[a.d].que) a.d=li[a.d].d; 
            while(a.l!=na && li[a.l].que) a.l=li[a.l].l; 
            while(a.r!=na && li[a.r].que) a.r=li[a.r].r; 
            
            if(a.u!=na && !li[a.u].que) li[a.u].d=a.d, q.emplace(a.u), li[a.u].que=1; 
            if(a.d!=na && !li[a.d].que) li[a.d].u=a.u, q.emplace(a.d), li[a.d].que=1; 
            if(a.l!=na && !li[a.l].que) li[a.l].r=a.r, q.emplace(a.l), li[a.l].que=1; 
            if(a.r!=na && !li[a.r].que) li[a.r].l=a.l, q.emplace(a.r), li[a.r].que=1;  
        } 
    } while(flag); 
    
    wo(ans); 
} 

inline void printcases(int tifo, bool _nl=0) { 
    pstr("Case #", 0), wo(tifo, 0), pstr(":", _nl?1:2); 
} 

int main() { 
    li[na].que=true; 
    
    int Cases= 1; 
    ri(Cases); 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        printcases(tcs, 0); // printcases(tcs, 1); 
        init(); 
        solve(); 
    } 

    return 0; 
} 

