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
#define pil pair<int, ll>
#define pll pair<ll, ll>

const int inf=2114514810; 
const ll mod=998244353; 
const int maxn=1000000; 

int n, m; 

vector<int> r1[6], r2[6], r3[6]; 
char r4; 

inline void init() { 
    memset(r1, 0, sizeof(r1)); 
    memset(r2, 0, sizeof(r2)); 
    memset(r3, 0, sizeof(r3)); 
} 

int main() { 
    int Cases= ri(Cases) ; 
    ri(n); 
    for(int tcs=1; tcs<=Cases; tcs++) { 
        //printf("Case #"); wo(tcs); putchar(':'); putchar(' '); 
        init(); 
        char s[5]; bitset<5> chr(0); 

        for(int i=1; i<=119; i++) { 
            wo(i*5-4, 1); fflush(stdout); 
            char c=(char)getchar(); getchar(); 
            if(c=='A') r1[1].push_back(i*5-3); 
            else if(c=='B') r1[2].push_back(i*5-3); 
            else if(c=='C') r1[3].push_back(i*5-3); 
            else if(c=='D') r1[4].push_back(i*5-3); 
            else if(c=='E') r1[5].push_back(i*5-3); 
        } 

        int p; 
        for(int i=1; i<=5; i++) if((int)r1[i].size()==23) { 
            p=i; 
            s[0]=i-1+'A', chr[i-1]=1; 
            break; 
        } 

        for(int i=0; i<=22; i++) { 
            wo(r1[p][i], 1); fflush(stdout); 
            char c=(char)getchar(); getchar(); 
            if(c=='A') r2[1].push_back(r1[p][i]+1); 
            else if(c=='B') r2[2].push_back(r1[p][i]+1); 
            else if(c=='C') r2[3].push_back(r1[p][i]+1); 
            else if(c=='D') r2[4].push_back(r1[p][i]+1); 
            else if(c=='E') r2[5].push_back(r1[p][i]+1); 
        } 

        for(int i=1; i<=5; i++) if((int)r2[i].size()==5) { 
            p=i; 
            s[1]=i-1+'A', chr[i-1]=1; 
            break; 
        } 

        for(int i=0; i<=4; i++) { 
            wo(r2[p][i], 1); fflush(stdout); 
            char c=(char)getchar(); getchar(); 
            if(c=='A') r3[1].push_back(r2[p][i]+1); 
            else if(c=='B') r3[2].push_back(r2[p][i]+1); 
            else if(c=='C') r3[3].push_back(r2[p][i]+1); 
            else if(c=='D') r3[4].push_back(r2[p][i]+1); 
            else if(c=='E') r3[5].push_back(r2[p][i]+1); 
        } 

        for(int i=1; i<=5; i++) if((int)r3[i].size()==1) { 
            s[2]=i-1+'A', chr[i-1]=1; 
            wo(r3[i][0], 1); fflush(stdout); 
            s[4]=getchar(); getchar(); chr[s[4]-'A']=1; 
            for(int i=0; i<=4; i++) if(!chr[i]) { 
                s[3]=i+'A'; 
                break; 
            } 
            break; 
        } 
        for(int i=0; i<=4; i++) putchar(s[i]); 
        putchar('\n'); fflush(stdout); 

        char c=(char)getchar(); getchar(); 
        if(c=='N') break; 
    } 
    return 0; 
} 
