#include<iostream>

using namespace std; 

int gcd(int a, int b) { 
    return a%b==0? b : gcd(b, a%b); 
} 

int main() { 
    ios::sync_with_stdio(false); cin.tie(0); 
    
    int n, m; 
    while(cin>>n>>m && n>-1) { 
        cout<<(gcd(n, m)==1? "YES" : "POOR Haha")<<endl; 
    } 
    
    return 0; 
} 

