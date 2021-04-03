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

const int inf=0x3f3f3f3f; 
const long long mod=1e9+7; 

int n, m; 

vector<int> q, siz; 

inline int solve(/*rla*/) { 
    q.clear(); siz=0; 
    psln("1 2 3"); fflush(stdout); 
    int a, d; wi(a); 
    int x=2, y, i; 
    if(a==1) i=n, d=-1, q.emplace_back(2), q.emplace_back(1), y=1; 
    else i=4, d=1, q.emplace_back(2), q.emplace_back(3), y=3; 
    siz=2; 
    
    for(int j=1; j<=n-2; j++, i+=d) { 
        wsp(x), wsp(y), wln(i); 
        fflush(stdout); 
        
        wi(a); 
        if(a==-1) return -1; 
        
        q.emplace_back(i); 
        
        int p=siz-1; 
        if(a==x) while(!(p && p<siz-1 && q[p+1]==x)) swap(q[p], q[p-1]); 
        else if(a==y) while(!(p && q[p-1]==y)) swap(q[p], q[p-1]); 
        else 
        
    } 
} 

inline void printcases(int casnum, char eol='\n') { pstr("Case #", 0), wo(casnum), putchar(':'); putchar(eol); } 

int main() { 
    
    while(rstr(rla)) { 
        int cases= CASE? (std::stoi(rla)) : 1; 
        wi(n), wi(m); 
        for(int cas=1; cas<=cases; cas++) { if(!ITAC) printcases(cas, ' '); 
            
            if(solve()!=1) return 0; 
            
        } 
        
    } 
    
    return 0; 
} 

