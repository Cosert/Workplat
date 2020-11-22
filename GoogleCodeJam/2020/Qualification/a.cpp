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

int n, m; 
int a[114][514]; 

int main() { 
    int Case; 
#ifndef ONLINE_JUDGE
    freopen("a.in", "r", stdin); 
#endif
    Case=ri(Case); 
    for(int tcs=1; tcs<=Case; tcs++) { 
        printf("Case #%d: ", tcs); 
        ri(n); 
        int ans1=0, ans2=0, sum=0; 
        for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) { 
            ri(a[i][j]); 
            if(i==j) sum+=a[i][j]; 
        } 
        for(int i=1; i<=n; i++) { 
            vector<int> q1, q2; 
            
            for(int j=1; j<=n; j++) { 
                q1.push_back(a[i][j]); 
                q2.push_back(a[j][i]); 
            } 
            sort(q1.begin(), q1.end()); 
            sort(q2.begin(), q2.end()); 
            bool f1=1, f2=1; 
            for(int j=2; j<=n; j++) { 
                if(f1 && q1[j-1]==q1[j-2]) { 
                    ans1++; 
                    f1=0; 
                } 
                if(f2 && q2[j-1]==q2[j-2]) { 
                    ans2++; 
                    f2=0; 
                } 
                if(!f1 && !f2) break; 
            } 
        } 
        wo(sum, 2), wo(ans1, 2), wo(ans2, 1); 
    } 
    return 0; 
} 
