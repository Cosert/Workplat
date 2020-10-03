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
const ull mod=9223372036854775807; 
const int maxn=1000000; 

int n, m; 


int main() { 
    ull a, b, c, d, e, f; 
    printf("config it: "); scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f); 

    for(int i=1; i<=20; i++) { 
        a=(a<<1)%mod; 
        if(i%2==0) b=(b<<1)%mod; 
        if(i%3==0) c=(c<<1)%mod; 
        if(i%4==0) d=(d<<1)%mod; 
        if(i%5==0) e=(c<<1)%mod; 
        if(i%6==0) f=(f<<1)%mod; 
        printf("Day %d: %lld %lld %lld %lld %lld %lld\n", i, a, b, c, d, e, f); 
        printf("Total: %lld\n", (a+b+c+d+e+f)%mod); 
    } 

    return 0; 
} 
