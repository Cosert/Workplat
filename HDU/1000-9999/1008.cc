#include<iostream>
using namespace std; 

int main() { 
    ios::sync_with_stdio(false); cin.tie(0); 
    
    int n; 
    while(cin>>n && n) { 
        int ans=0; 
        for(int i=1, a, m=0; i<=n; i++) { 
            cin>>a; 
            ans+=abs(a-m)*(a>m? 6 : 4)+5; 
            m=a; 
        } 
        
        cout<<ans<<endl; 
    } 
    
    return 0; 
} 

