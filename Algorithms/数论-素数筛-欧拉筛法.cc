#include<algorithm>
#include<bitset>

const int maxn=4000000; 

bitset<maxn|1> phi; int pri[maxn|1], pc=0; 
void prin() { 
    phi.set(); 
    phi[1]=0; 
    for(int i=2; i<=maxn; i++) { 
        if(phi[i]) pri[++pc]=i; 
        for(int j=1; j<=pc && pri[j]*i<=maxn; j++) { 
            phi[pri[j]*i]=0; 
            if(!(i%pri[j])) break; 
        } 
    } 
} 

int main() { 
    prin();  // it's needed to process only once. 

    return 0; 
} 
