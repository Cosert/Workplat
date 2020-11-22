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
const int maxn=1000000; 

int n, m; 

struct li{int s, ed, num; } q[maxn+1]; 
int a[maxn|1]; 

bool cmp(li x, li y) { 
    return x.s<y.s; 
} 

int main() { 
#ifndef ONLINE_JUDGE
    freopen("c.in", "r", stdin); 
#endif
    int Case=ri(Case); 
    for(int tcs=1; tcs<=Case; tcs++) { 
        printf("Case #%d: ", tcs); 
        ri(n); 
        memset(a, 0, sizeof(a)); 
        memset(q, 0, sizeof(q)); 
        for(int i=1; i<=n; i++) { 
            ri(q[i].s); 
            ri(q[i].ed); 
            q[i].num=i; 
        } 
        sort(q+1, q+n+1, cmp); 

        int x=-1, y=-1; 
        a[q[1].num]=1; 
        bool flag=1; 
        for(int i=1; i<=n; i++) { 
            if(x<=q[i].s) { 
                a[q[i].num]=1; 
                x=q[i].ed; 
            } 
            else if(y<=q[i].s) { 
                a[q[i].num]=2; 
                y=q[i].ed; 
            } 
            else { 
                flag=0; 
                break; 
            } 
        } 
        if(flag) { 
            for(int i=1; i<=n; i++) { 
                if(a[i]==1) putchar('C'); 
                else putchar('J'); 
            } 
            putchar('\n'); 
        } 
        else printf("IMPOSSIBLE\n"); 
    } 
    return 0; 
} 

