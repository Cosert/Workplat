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

int n, m; 


inline void solve() { 
    char s[51][200]; 
    int len[51], mxl=0; 
    for(int i=1; i<=n; i++) { 
        char str[200]; char c; 
        scanf("%s", str); 

        printf("%s\n", str); 

        len[i]=(int)strlen(str)-1; if(len[i]>mxl) mxl=len[i]; 
        for(int j=len[i]-1, t=0; j>=0; j--, t++) s[i][t]=str[j]; 
        printf("%s\n", s[i]); 
    } 

    string ans; bool flag=1; 
    for(int j=0; j<=mxl-1; j++) { 
        int p=n+1; 
        for(int i=1; i<=n; i++) if(len[i]>j) { 
            if(p==n+1) p=i; 
            if(s[i][j]!=s[p][j]) { 
                flag=0; 
                break; 
            } 
        } 
        ans.push_back(s[p][j]); 
    } 

    if(flag) { 
        ans.push_back('A'); 
        for(int i=(int)ans.length()-1; i>=0; i--) putchar(ans[i]); 
    } 
    else putchar('*'); 
    putchar('\n'); 
} 

inline void init() { 
    
    ri(n); 
    
} 

int main() { 
    for(int Cases= ri(Cases) , tcs=1; tcs<=Cases; tcs++) { 
        printf("Case #"); wo(tcs); putchar(':'); putchar(' '); 
        init(); 
        solve(); 
    } 
    return 0; 
} 
