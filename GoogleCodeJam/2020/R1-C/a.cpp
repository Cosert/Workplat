#include<bits/stdc++.h>

template<typename _tp> inline _tp ri(_tp &_var) { _var=0; bool _ng=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd=='-'){_ng=1; } _rd=(char)getchar(); }
    while('0'<=_rd && _rd<='9') _var=_var*10+(_tp)_rd-48, _rd=(char)getchar(); 
    if(_ng){_var*=-1; } return _var; } 
template<typename _tp> inline bool wo(_tp _var, int _nli=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0){putchar('-'), _var*=-1; } do{_wri[_tpi++]=(char)((_var%10)+48), _var/=10; }while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nli){_nli==2 ? putchar(' ') : putchar('\n'); } return 1; } 

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

const int inf=2114514810; 
const ll mod=998244353; 
const int maxn=1000000; 

int n, m, x, y; 

struct cod{ 
    int t, x, y; 
    /*bool operator<(const& cod _tmp) { 
        //if(x+y != _tmp.x+_tmp.y) return x+y<_tmp.x+_tmp.y; 
        return t<_tmp.t; 
    } 
    bool operator>(const& cod _tmp) { 
        //if(x+y != _tmp.x+_tmp.y) return x+y>_tmp.x+_tmp.y; 
        return t>_tmp.t; 
    } */
};  

bool cmp(cod a, cod b) { 
    return a.t<b.t; 
} 

inline void init() { 
    ri(n), ri(m); 
} 

inline void solve() { 
    int a=n, b=m; 
    priority_queue<int, vector<int>, greater<int> > li; 
    vector<cod> q; 
    int c, len=0; 
    while((c=getchar())) { 
        if(c=='\n') break; 
        len++; 
        if(c=='N') b++; 
        else if(c=='S') b--; 
        else if(c=='E') a++; 
        else if(c=='W') a--; 

        q.push_back((cod){len, a, b}); 
    } 

    //sort(q.begin(), q.end(), cmp); 

    for(int i=0; i<=len-1; i++) if(abs(q[i].x)+abs(q[i].y)<=q[i].t) { 
        li.push(q[i].t); 
    } 

    if(li.empty()) { 
        printf("IMPOSSIBLE\n"); 
        return; 
    } 

    int t=inf; 
    wo(li.top(), 1); 
} 

int main() { 
    //int Cases= ri(Cases); 
    //ri(n); //ri(m); 
    for(int Cases= ri(Cases) , tcs=1; tcs<=Cases; tcs++) { 
        printf("Case #"); wo(tcs); putchar(':'); putchar(' '); //putchar('\n'); 
        init(); 
        solve(); 
    } 
    return 0; 
} 

