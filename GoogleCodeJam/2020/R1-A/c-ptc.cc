#include<bits/stdc++.h>
bool CASE=
1
, ITAC=
0
; 
template<typename _tp> inline bool wi(_tp &_va){ _va=0; long double va=0.0, vd=0.1; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while(_rd=getchar(), '0'<=_rd && _rd<='9') va=va+((_tp)_rd-48)*vd, vd/=10; } _va=(1-_neg*2)*(_va+(_tp)va); return 1; } 
template<typename _tp> inline void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline==1?'\n':' '); } 
#define wln(_var) wo(_var, 1)
#define wsp(_var) wo(_var, 2)
inline bool wstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32-_ed) if(_ch==-1){return 0; }else{_ch=getchar(); } } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp+=(char)_ch, _ch=getchar(); } _var=_tmp; return 1; } 
#define wsln(_var) wstr(_var, 1)
inline void pstr(std::string _var, int _eol=0){ for(auto &_it: _var) { putchar(_it); } if(_eol) putchar(_eol<2?'\n':' '); } 
#define psln(_var) pstr(_var, 1)
#define pssp(_var) pstr(_var, 2)

using ld=long double; using ll=long long; using ull=unsigned long long; using pii=std::pair<int, int>; 

#define rep(_tmp, _ti) for(int _tmp=1; _tmp<=(int)_ti; _tmp++)
#define all(_tmp) _tmp.begin(),_tmp.end()
#define rvall(_tmp) _tmp.rbegin(),_tmp.rend()

using namespace std; 

struct nd{ 
    int v=0; 
    int l=-1, r=-1, u=-1, d=-1; 
    bool w=0; 
}; 

ld avg(vector<nd> a, nd x) { 
    ld va=0.0; int vb=0; 
    if(x.l!=-1) va+=a[x.l].v, vb++; 
    if(x.r!=-1) va+=a[x.r].v, vb++; 
    if(x.u!=-1) va+=a[x.u].v, vb++; 
    if(x.d!=-1) va+=a[x.d].v, vb++; 
    
    return vb? va/vb : 0; 
} 

void show(int t, int i) { pssp(t?"pop" : "add"); wln(i); } 

const int maxn=1e5; 

vector<nd> li(maxn); 
stack<int> pass, wait; 
bitset<maxn> vis; 

inline bool solve(/*rla*/) { 
    vis.reset(); 
    int n, m; wi(n), wi(m); 
    ll res=0, ans=0; 
    
    rep(i, n*m) wi(li[i-1].v), li[i-1].w=1, res+=li[i-1].v; 
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) { 
        nd &x=li[i*m+j]; 
        x.l=j-1>=0? i*m+j-1 : -1; 
        x.r=j+1<m? i*m+j+1 : -1; 
        x.u=i-1>=0? (i-1)*m+j : -1; 
        x.d=i+1<n? (i+1)*m+j : -1; 
        
        if(avg(li, x)>x.v) x.w=0, pass.emplace(i*m+j); //, show(1, i*m+j); 
    } 
    
    while(1) { 
        ans+=res; 
        //psln("Round"); 
        while(!wait.empty()) { 
            int i=wait.top(); wait.pop(); 
            vis[i]=0; 
            nd &x=li[i]; 
            if(!x.w) continue; 
            
            if(avg(li, x)>x.v) x.w=0, pass.emplace(i); //, show(1, i); 
        } 
        
        if(pass.empty()) break; 
        
        while(!pass.empty()) { 
            int i=pass.top(); pass.pop(); 
            nd &x=li[i]; 
            res-=x.v; 
            
            bool l=(x.l>-1), r=(x.r>-1), u=(x.u>-1), d=(x.d>-1); 
            /*if(l && !li[x.l].w) { 
                l=0; x.l=li[x.l].l; while(x.l!=-1) { 
                    if(li[x.l].w) break; 
                    else x.l=li[x.l].l; 
                } 
            } 
            if(r && !li[x.r].w) { 
                r=0; x.r=li[x.r].r; while(x.r!=-1) { 
                    if(li[x.r].w) break; 
                    else x.r=li[x.r].r; 
                } 
            } 
            if(u && !li[x.u].w) { 
                u=0; x.u=li[x.u].u; while(x.u!=-1) { 
                    if(li[x.u].w) break; 
                    else x.u=li[x.u].u; 
                } 
            } 
            if(d && !li[x.d].w) { 
                d=0; x.d=li[x.d].d; while(x.d!=-1) { 
                    if(li[x.d].w) break; 
                    else x.d=li[x.d].d; 
                } 
            } */
            
            if(l && !vis[x.l]) li[x.l].r=x.r, wait.emplace(x.l), vis[x.l]=1; //, show(0, x.l); 
            if(r && !vis[x.r]) li[x.r].l=x.l, wait.emplace(x.r), vis[x.r]=1; //, show(0, x.r); 
            if(u && !vis[x.u]) li[x.u].d=x.d, wait.emplace(x.u), vis[x.u]=1; //, show(0, x.u); 
            if(d && !vis[x.d]) li[x.d].u=x.u, wait.emplace(x.d), vis[x.d]=1; //, show(0, x.d); 
        } 

    } 
    
    wln(ans); 
    
    return 0; 
} 

inline void putcas(int casnum, char eol='\n') { pstr("Case #", 0), wo(casnum), putchar(':'); putchar(eol); } 

int main() { int cas=0, cases=1; 
    
    if(CASE) wi(cases); 
    
    while(1) { 
        if(CASE && !ITAC) 
            putcas(++cas, ' '); 
        
        
        
        if(solve()) break; 
        
        if(CASE && cas>=cases) break; 
    } 
    
    return 0; 
} 

