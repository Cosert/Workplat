#pragma GCC optimize("O2")
#include<bits/stdc++.h>
int absi(int _temp_) { return (_temp_ ^ (_temp_>>31)) - (_temp_>>31); } 
int maxi(int _temp1_, int _temp2_) { return (_temp2_ & ((_temp1_ - _temp2_) >> 31)) | (_temp1_ & (~(_temp1_ - _temp2_) >> 31)); }  
int mini(int _temp1_, int _temp2_) { return (_temp1_ & ((_temp1_ - _temp2_) >> 31)) | (_temp2_ & (~(_temp1_ - _temp2_) >> 31)); } 
void swpi(int &_temp1_, int &_temp2_) { _temp1_ ^= _temp2_ ^= _temp1_ ^= _temp2_; } 
int intbit(int _temp_, int _iter_) { return (_temp_ >> _iter_) & 1; } 

inline int inpi() { int _i32_=0, _neg_=1; char _rd_=(char)getchar(); 
    while(_rd_<'0' || _rd_>'9') { if(_rd_ == '-') _neg_=-1; 
        _rd_=(char)getchar(); } 
    while(_rd_>='0' && _rd_<='9') _i32_=_i32_*10 + (int)_rd_-48, _rd_=(char)getchar(); 
    return _i32_ * _neg_; } 
inline void oupi(int _i32_) { static int _wri_[32]; int _top_=0; 
    if(_i32_<0) { putchar('-'), _i32_*=-1; } 
    do{ _wri_[_top_++] = _i32_ %10, _i32_/=10; } while(_i32_); 
    while(_top_) putchar(_wri_[--_top_]+48); } 

using namespace std;

#define doub double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>

#define inf 0x3f3f3f3f
#define lc(_temp_) _temp_<<1
#define rc(_temp_) _temp_<<1|1
const int mod=1e9+7; 
#define maxn 1000

int n, m; 

int par[maxn|1], dep[maxn|1]; 

inline void init() { 
    for(int i=1; i<=1000; i++) par[i]=i, dep[i]=0; 
} 
int root(int a) { 
    int i=a; 
    while(par[i]!=i) i=par[i]; 
    return par[i]; 
} 
inline void unite(int a, int b) { 
    int x=root(a), y=root(b); 

    if(x!=y) { 
        if(dep[x]<dep[y]) par[x]=y; 
        else if(dep[x]>dep[y]) par[y]=x; 
        else { 
            if(x<=y) { 
                par[y]=x; 
                dep[x]++; 
            } 
            else { 
                par[x]=y; 
                dep[y]++; 
            } 
        } 
    } 
} 

int main() {
    scanf("%d", &n); 
    for(int i=1; i<=n-1; i++) { 
        int a=inpi(), b=inpi(); 
        unite(a, b); 
    } 

    int qr=n>>1, r=root(n); 
    for(int i=1; i<=n; i++) { 
        int a, b; 
        int c=getchar(); 
        if(c=='!') { 
            a=inpi(); 
            break; 
        } 
        else { 
            scanf("%d %d", &a, &b); 
            if(i>qr) { 
                printf("-1"); 
                break; 
            } 
        } 
        stack<int> s1, s2; 
        int x=par[a]; s1.push(x); 
        while(1) { 
            if(x!=par[x]) x=par[x]; 
            else break; 
            s1.push(x); 
        } 
        x=par[b]; s2.push(x); 
        while(1) { 
            if(x!=par[x]) x=par[x]; 
            else break; 
            s2.push(x); 
        } 
        int v; 
        while(!s1.empty() && !s2.empty()) { 
            //printf("%d\n", s1.size()); 
            if(s1.top()==s2.top()) v=s1.top(); 
            s1.pop(); s2.pop(); 
        } 
        cout<<v<<endl; 
    } 
    return 0;
}


