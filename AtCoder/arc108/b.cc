#include<bits/stdc++.h>
using namespace std; 

int n, c, ans=0; 

bool jg() { 
    short int m=0; 
    while(1) { 
        c=getchar(); 
        if(c=='\n') return 0; 
        else if(c=='f') { 
            if(!m) m=1; 
            else if(!jg()) return 0; 
        } 
        else if(c=='o' && m==1) m=2; 
        else if(c=='x' && m==2) { 
            ans+=3; 
            return 1; 
        } 
        else break; 
    } 
    return 1; 
} 

int main() { 
    cin>>n; 
    while(jg()); 
    cout<<n-ans; 
    return 0; 
} 
