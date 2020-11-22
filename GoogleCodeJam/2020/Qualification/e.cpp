#pragma GCC optimize("O2")
#include<bits/stdc++.h>

template<typename _tp> inline _tp ri(_tp &_var) { _var=0; bool _ng=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd=='-'){_ng=1; } _rd=(char)getchar(); }
    while('0'<=_rd && _rd<='9') _var=_var*10+(_tp)_rd-48, _rd=(char)getchar(); 
    if(_ng){_var*=-1; } return _var; } 
template<typename _tp> inline bool wo(_tp _var, int _nli=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0){putchar('-'), _var*=-1; } do{_wri[_tpi++]=(char)((_var%10)+48), _var/=10; }while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nli){_nli==2 ? putchar(' ') : putchar('\n'); } return 1; } 
#define mcs() for(int Case=ri(Case), tcs=1; tcs<=Case; tcs++)

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
const int maxn=100000; 

int n, m; 
int a[1919][810]; 

int main() { 
    int Case; 
#ifndef ONLINE_JUDGE
    freopen("e.in", "r", stdin); 
#endif
    Case=ri(Case); 
    for(int tcs=1; tcs<=Case; tcs++) { 
        printf("Case #%d: ", tcs); 
        ri(n), ri(m); 
        //printf("Input n=%d, m=%d\n", n, m); 
        int flag=0, k; 
        
        if(m%n==0) flag=1, k=m/n; 
        else if(n&1){ 
            if(n*(n+1)/2==m) flag=2; 
        } 
        else if(n>=4){ 
            //wo((n*n)/2, 1); 
            if(n*n/2==m) flag=3, k=0; 
            else if(m>=(n*n)/2) { 
                if(m%2==0 && m-(n*n)/2<=n) 
                    flag=3, k=(m-(n*n)/2)/2;  
            } 
        } 
        
        if(!flag) { 
            printf("IMPOSSIBLE\n"); 
            continue; 
        } 

        printf("POSSIBLE\n"); 
            
        if(flag==1) { 
            for(int i=1; i<=n; i++) { 
            a[i][i]=k; 
            for(int j=i+1, t=1; j<=n; j++, t++) { 
                if(t==k) t++; 
                a[i][j]=t; 
            } 
            for(int j=i-1, t=n; j>=1; j--, t--) { 
                if(t==k) t--; 
                a[i][j]=t; 
            } 
        }} 
        else if(flag==2) for(int i=1; i<=n; i++) { 
            a[i][i]=i; 
            for(int j=i+1, k=1; j<=n; j++, k++) { 
                if(k==i) k++; 
                a[i][j]=k; 
            } 
            for(int j=i-1, k=n; j>=1; j--, k--) { 
                if(k==i) k--; 
                a[i][j]=k; 
            } 
        } 
        else { 
            stack<int> s; 
            for(int i=1; i<=n/2; i++) s.push(2*i-1); 

            if(!k) a[1][n]=n; 
            else { 
                while(--k) s.pop(); 
                a[1][n]=s.top(); 
            } 

            for(int i=1, j=1; i<=n-1; i++, j++) { 
                if(j==a[1][n]) j++; 
                a[1][i]=j; 
            } 
            int p=n; 
            for(int i=2; i<=n; i++) { 
                a[i][p-1]=a[i-1][p]; 
                p--; 
                for(int j=p+1, k=1; j<=n; j++, k++) { 
                    if(k==a[i][p]) k++; 
                    a[i][j]=k; 
                } 
                for(int j=p-1, k=n; j>=1; j--, k--) { 
                    if(k==a[i][p]) k--; 
                    a[i][j]=k; 
                } 
            } 
        } 

        for(int i=1; i<=n; i++) { 
            wo(a[i][1]); 
            for(int j=2; j<=n; j++) putchar(' '), wo(a[i][j]); 
            putchar('\n'); 
        } 
        
    } 
    return 0; 
} 
