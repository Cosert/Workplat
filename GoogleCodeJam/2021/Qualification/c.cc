#include<bits/stdc++.h>
using namespace std; std::string rla; 
bool CASE=1, ITAC=0; 

template<typename _tp> bool wi(_tp &_va){ _va=0; long double va=0.0, vd=0.1; bool _neg=0; auto _rd=getchar(); while(_rd<'0' || _rd>'9') { if(_rd=='-'){_neg=1; }else if(_rd==-1){return 0; } _rd=getchar(); } { while(_rd>='0' && _rd<='9') _va=_va*10 + (_tp)_rd-48, _rd=getchar(); } { if(_rd=='.') while(_rd=getchar(), '0'<=_rd && _rd<='9') va=va+((_tp)_rd-48)*vd, vd/=10; } _va=(1-_neg*2)*(_va+(_tp)va); return 1; } 
template<typename _tp> void wo(_tp _var, int _nline=0){ static char _wri[64]; int _tpi=0; { if(_var<0)putchar('-'), _var*=-1; } do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; } while(_var); { while(_tpi) putchar(_wri[--_tpi]); } if(_nline) putchar(_nline==1?'\n':' '); } 
#define wln(_var) wo(_var, 1)
#define wsp(_var) wo(_var, 2)
bool rstr(std::string &_var, bool _ed=0){ std::string _tmp; auto _ch=getchar(); { while(_ch<=32) if(_ch==-1){return 0; }else{_ch=getchar(); } } { while(((_ch!=' ')|_ed)&&_ch!='\n'&&_ch>=0) _tmp+=(char)_ch, _ch=getchar(); } _var=_tmp; return 1; } 
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

int n, m; 

int li[101]; 

void print(int *a, int len) { 
    rep(i, len) wo(a[i], 1+(i!=len)); 
} 

bool rev(const int &a, const int &b) { return a>b; } 

inline void solve(/*rla*/) { 
    wi(n), wi(m); 
    if(m<n-1 || m>n*(n+1)/2-1) psln("IMPOSSIBLE"); 
    else { 
        rep(i, n) li[i]=i; 
         
        int l=1, r=0, k=n; bool rv=1; 
        m-=n-1; 
        while(m) { 
            if(m<=k-1) { 
                if(rv) { 
                    sort(li+n-r-m, li+n-r+1, rev); 
                    r++; 
                    rv=0; 
                } 
                else { 
                    sort(li+l, li+l+m+1); 
                    l++; 
                    rv=1; 
                } 
                m=0; 
            } 
            else { 
                if(rv) { 
                    sort(li+n-r-k+1, li+n-r+1, rev); 
                    r++; 
                    rv=0; 
                } 
                else { 
                    sort(li+l, li+l+k); 
                    l++; 
                    rv=1; 
                }  
                m-=k-1; 
            } 
            k--; 
        } 
        
        print(li, n); 
    } 
} 

inline void printcases(int casnum, char eol='\n') { pstr("Case #", 0), wo(casnum), putchar(':'); putchar(eol); } 

int main() { 
    
    while(rstr(rla)) { 
        int cases= CASE? (std::stoi(rla)) : 1; 
        for(int cas=1; cas<=cases; cas++) { if(!ITAC) printcases(cas, ' '); 
            
            solve(); 
            
        } 
        
    } 
    
    return 0; 
} 

