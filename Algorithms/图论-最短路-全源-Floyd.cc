#include<cstdio>
#include<cstring>

using namespace std; 

#define ll long long

const int inf=0x3f3f3f3f; 
const int maxn=1000; 

int n, m; 

int g[maxn|1][maxn|1]; 

inline void floyd() { 
    for(int p=1; p<=n; p++) for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) if(g[i][j]>g[i][p]+g[p][j]) g[i][j]=g[i][p]+g[p][j]; 
} 

inline void init() { 
    memset(g, inf, sizeof(g)); 
    for(int i=1; i<=n; i++) g[i][i]=0; 
} 

int main() { 
    // input n
    
    floyd(); 
        
    // input serveral edges. Make g[from][to]=value(g[from][to]=g[to][from]=value if it is bi-directional)
    
    floyd(); 

    // process g[n][n]; 
    
    return 0; 
} 
