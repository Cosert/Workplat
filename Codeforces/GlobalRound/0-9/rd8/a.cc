#include<bits/stdc++.h>
using namespace std; 

int main() { 
    ios::sync_with_stdio(false); 
    int cas; cin>>cas; 
    while(cas--) { 
        int n, fib[101]; 
        cin>>fib[0]>>fib[1]>>n; 
        if(fib[0]>fib[1]) swap(fib[0], fib[1]); 
        for(int i=2; i<=100; i++) { 
            fib[i]=fib[i-2]+fib[i-1]; 
            if(fib[i]>n) { 
                cout<<i-1<<endl; 
                break; 
            } 
        } 
    } 
    
    return 0; 
} 
