#include<bits/stdc++.h>
using namespace std; 

int main() { 
    ios::sync_with_stdio(false); 
    int cas; cin>>cas; 
    while(cas--) { 
        int a, b, n; cin>>a>>b>>n; 
        int t=2*(n-max(a, b))/(a+b); 
        cout<<t+1<<endl; 
    } 
    
    return 0; 
} 
