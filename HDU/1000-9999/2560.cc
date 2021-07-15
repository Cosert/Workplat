#include<iostream>
using namespace std; 

int main() { 
    ios::sync_with_stdio(false); cin.tie(0); 
    
    int cases; cin>>cases; 
    while(cases--) { 
        int n, m; cin>>n>>m; 
        int ans=0; 
        for(int i=1, a; i<=n; i++) for(int j=1; j<=m; j++) cin>>a, ans+=a; 
        
        cout<<ans<<endl; 
    } 
    
    return 0; 
} 

