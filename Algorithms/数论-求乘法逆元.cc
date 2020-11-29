#include<cstdio>
#define ll long long

long long getgcd(long long a, long long b, long long &x, long long &y) { 
    if(!b) { 
        x=1, y=0; 
        return a; 
    } 
    ll ans=getgcd(b, a%b, y, x); 
    y-=(a/b)*x; 
    return ans; 
} 
long long exgcd(long long a, long long b, long long M) { 
    long long x, y, gcd=getgcd(a, b, x, y); 
    return ((x%M)+M)%M;  // process x with module the problem gives, to avoid negative x.
} 

long long qpow(long long a, long long t, long long M) { 
    long long qsum=1; 
    while(t>0) { 
        if(t&1) qsum=(qsum*a)%M;  // module M the problem gives to ensure it won't exceed the range of long long.
        a=(a*a)%M; 
        t>>=1; 
    } 
    return qsum; 
} 

int main() { 
    long long a, b, mod;  // (a * x) % M = b % M = 1 . x is the inv of a.

    // input a, b 

    long long inv1=exgcd(a, b, mod);  // Extend Euclid Theory.
    long long inv2=qpow(a, b-2, mod);  // quick power . Valid only if a and b satisfy Fermat's Little Theorem (a^(b-1) % b = 1) .
    
    return 0; 
} 
