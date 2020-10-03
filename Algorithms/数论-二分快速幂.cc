#include<cstdio>
using namespace std; 

#define ll long long
const ll mod=1; 

inline ll fpow(ll a, ll t) { 
    ll sum=1; 
    while(t>0) { 
        if(t&1) t=(t*a)%mod; 
        a=(a*a)%mod; 
        t>>=1; 
    } 
    return sum; 
} 

int main() { 
    // Input variables.

    // Output fpow(var, p); 

    return 0; 
} 
