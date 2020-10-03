#include<cstdio>

ll getgcd(ll a, ll b, ll &x, ll &y) { 
    if(!b) { 
        x=1, y=0; 
        return a; 
    } 
    ll ans=getgcd(b, a%b, y, x); 
    y-=(a/b)*x; 
    return ans; 
} 
ll exgcd(ll a, ll b, ll M) { 
    ll x, y, gcd=getgcd(a, b, x, y); 
    return ((x%M)+M)%M;  // process x with module the problem gives, to avoid negative x.
} 

ll qpow(ll a, ll t, ll M) { 
    ll qsum=1; 
    while(t>0) { 
        if(t&1) qsum=(qsum*a)%M;  // module M the problem gives to ensure it won't exceed the range of long long.
        a=(a*a)%M; 
        t>>=1; 
    } 
    return qsum; 
} 

int main() { 
    ll a, b, mod;  // (a * x) % M = b % M = 1 . x is the inv of a.

    // input a, b 

    ll inv1=exgcd(a, b, mod);  // Extend Euclid Theory.
    ll inv2=qpow(a, b-2, mod);  // quick power . Valid only if a and b satisfy Fermat's Little Theorem (a^(b-1) % b = 1) .
    
    return 0; 
} 
