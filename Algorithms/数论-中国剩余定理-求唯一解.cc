// 中国剩余定理 (CRT) -- One exactly answer
// The formula: ans = (a[i] * m[i] * inv(m[i]))(i from 1 to n) % M . 

#include<cstdio>

#define ll long long

const ll maxn=1000; 

int n, m; 
ll crtni[maxn|1], cres[maxn|1], ctot, nc; 
void exgcd(ll a, ll b, ll &x, ll &y) { 
    if(!b) { 
        x=1, y=0; return; 
    } 
    exgcd(b, a%b, y, x); 
    y-=a/b*x; 
} 
ll inv(ll a, ll b, ll mo) { 
    ll x, y; exgcd(a, b, x, y); 
    return ((x%mo)+mo)%mo; 
} 

inline void precrt() { 
    ctot=1; 
    for(int i=1; i<=nc; i++) ctot*=crtni[i]; 
    for(int i=1; i<=nc; i++) crtni[i]=((ctot/crtni[i]) * inv(ctot/crtni[i], crtni[i], ctot)) % ctot; 
} 

ll crt() { 
    ll ans=0; 
    for(int i=1; i<=nc; i++) ans=(ans + (cres[i]*crtni[i])%ctot) % ctot; 
    return ans; 
} 

int main() { 
    // Firstly you need to get n results the question number moudules n elements that the greatest common divisor of any two of the elements is 1.
    // Secondly, of course, you must know values of the n elements.
    
    // input cres[nc], crtni[nc]

    preprocess(); 
    ll ans=crt(); 

    // use answer to do anything you want
    
    return 0; 
} 
