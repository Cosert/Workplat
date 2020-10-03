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

int n, m, ans; 

int trie[maxn|1][26], tc, exs[maxn|1]; 
void tadd(char *s, int len) { 
    int p=0; 
    for (int i=0; i<=len-1; i++) { 
        int c=s[i]-'A'; 
        if(trie[p][c]==-1) trie[p][c]=++tc; 
        p=trie[p][c]; 
    } 
    exs[p]++; 
} 
bool tfind(char *s, int len) { 
    int p=0; 
    for (int i=0; i<=len-1; i++) { 
        int c=s[i]-'A'; 
        if (!trie[p][c]) return 0; 
        p=trie[p][c]; 
    } 
    return exs[p]; 
} 
void dfs(int p) { 
    for(int i=0; i<=25; i++) if(trie[p][i]!=-1) { 
        dfs(trie[p][i]); 
        exs[p]+=exs[trie[p][i]]; 
    } 
    if(exs[p]>=2 && p>0) { 
        exs[p]-=2; 
        ans+=2; 
    } 
} 
inline void init() { 
    memset(trie, -1, sizeof(trie)); 
    memset(exs, 0, sizeof(exs)); 
    tc=0; 
    ans=0; 
} 

int main() { 
    for(int Cases= ri(Cases) , tcs=1; tcs<=Cases; tcs++) { 
        printf("Case #"); wo(tcs); putchar(':'); putchar(' '); 
        init(); 
        ri(n); 
        for(int i=1; i<=n; i++) { 
            char rs[50], s[50]; 
            scanf("%s", s); 
            int len=(int)strlen(s); for(int i=0; i<=len-1; i++) rs[i]=s[len-1-i]; 
            tadd(rs, len); 
        } 

        dfs(0); 
        wo(ans, 1); 
    } 
    return 0; 
} 
