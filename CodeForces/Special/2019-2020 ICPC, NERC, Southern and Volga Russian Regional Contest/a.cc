#include<iostream>

int main() { 
    int n, m=0; std::cin>>n; 
    for(int i=1; i*i<=n; i++) if(n%i==0) m=i; 
    std::cout<<2*m+2*(n/m)<<'\n'; 
    return 0; 
} 

