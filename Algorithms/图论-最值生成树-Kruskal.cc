/*
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std; 

const int inf=0x3f3f3f3f; 
const int maxn=1000000; 
*/

int n, m; // suppose n is the number of nodes

int ecnt; 
int par[maxn|1]; 
struct edg{int ia, ib; int v; /* v can be the type you want */} eli[maxn<<3|15]; 

void eadd(int a, int b, int c/* c should be the same type as v */) { eli[++ecnt]=(edg){a, b, c}; } 
bool ecmp(edg a, edg b) { 
    return a.v<b.v; 
    //return a.v>b.v // if you want to solve the maxium spanning tree (or you can start from e[n] to e[1])
} 

int root(int a) { 
    int i=a; 
    while(i!=par[i]) { 
        if(par[i]==-1) { par[i]=i; break; } 
        i=par[i]; 
    } 
    if(par[a]!=i) while(par[a]!=i) { 
        int j=par[a]; 
        par[a]=i, a=j; 
    } 
    return i; 
} 
bool unite(int a, int b) { 
    int x=root(a), y=root(b); if(x==y) return 0; 
    par[y]=x; 
    return 1; 
} 

void kruskal(int knd=n) { 
    sort(eli+1, eli+ecnt+1, ecmp); 
    
    int res=1; 
    int ans=0; // ans should be the same type as edg.v
    for(int i=1; i<=n; i++) if(unite(eli[i].ia, eli[i].ib)) { 
        ans+=eli[i].v; 
        res++; 
    } 
    
    if(res<knd) { // No solution
        
        return; 
    } 
    
} 

inline void init() { 
    ecnt=0; 
    memset(par, -1, sizeof(par)); 
} 

inline void solve() { 
    
    // build the graph
    
    kruskal(); 
    
    
} 

