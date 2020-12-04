#pragma GCC optimize("O3")
#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std; 

#define ld long double
#define ll long long

ll a, b; 

inline void solve() { 
    cin>>a>>b; 
    cout<<(ll)(sqrt((ld)a*b))*2<<' '<<a+b<<endl; 
} 

int main() { 
    ios::sync_with_stdio(false); 
    int CASES; cin>>CASES; 
    for(int cas=1; cas<=CASES; cas++) solve(); 
    
    return 0; 
} 
