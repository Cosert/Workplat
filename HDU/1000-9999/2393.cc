#include<iostream>
#include<cmath>
using namespace std; 

int main() { 
    ios::sync_with_stdio(false); cin.tie(0); 
    
    int cases; cin>>cases; 
    for(int cas=1; cas<=cases; cas++) { 
        int a, b, c; cin>>a>>b>>c; 
        cout<<"Scenario #"<<cas<<":\n"<<((a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)? "yes" : "no")<<endl<<endl; 
        
    } 
    
    return 0; 
} 

