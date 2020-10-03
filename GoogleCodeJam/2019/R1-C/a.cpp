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

int main() { 
    for(int Cases= ri(Cases) , tcs=1; tcs<=Cases; tcs++) { 
        printf("Case #"); wo(tcs); putchar(':'); putchar(' '); 
        
        ri(n); 

        string g[256]; int len[256]; bitset<256> vis; vis.set(); 
        for(int i=1; i<=n; i++) { 
            char c; 
            while((c=getchar()) && c!='\n') g[i].push_back(c); 
            len[i]=g[i].length(); 
        } 

        bool flag=1; char s[600]; 
        for(int j=0; j<=599; j++) { 
            int t=0; 
            for(int i=1; i<=n; i++) if(vis[i]) { 
                if(g[i][j%len[i]]=='R') t|=1; 
                else if(g[i][j%len[i]]=='S') t|=2; 
                else if(g[i][j%len[i]]=='P') t|=4; 
            } 
            if(t==7) { 
                flag=0; 
                break; 
            } 
            if(t==1 || t==2 || t==4) { 
                if(t==1) s[j]='P'; 
                else if(t==2) s[j]='R'; 
                else s[j]='S'; 
                m=j; 
                break; 
            } 
            
            if(t==3) s[j]='R'; 
            else if(t==5) s[j]='P'; 
            else if(t==6) s[j]='S'; 

            for(int i=1; i<=n; i++) if(g[i][j%len[i]]!=s[j]) vis[i]=0; 
        } 

        if(flag) { 
            for(int i=0; i<=m; i++) putchar(s[i]); 
            putchar('\n'); 
        } 
        else printf("IMPOSSIBLE\n"); 
    } 
    return 0; 
} 
