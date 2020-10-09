#include<cstdio>
#include<cstring>
#include<algorithm>

const int inf=0x3f3f3f3f; 
const int maxn=1000000; 

int n, m, ec; 

struct edg{int fr, to, v; } e[maxn<<3|15]; 
void eadd(int a, int b, int c) { 
    e[++ec].fr=a; 
    e[ec].to=b; 
    e[ec].v=c; 
} 

bool kcmp(edg a, edg b) { 
    return a.v<b.v; 
    //return a.v>b.v // if you want to solve the maxium spanning tree (or you can start from e[n] to e[1])
} 

int par[maxn|1]; 
int root(int a) { 
    int i=a; 
    while(i!=par[i]) { 
        if(par[i]==-1) { 
            par[i]=i; 
            break; 
        } 
        i=par[i]; 
    } 
    if(par[a]!=i) while(par[a]!=i) { 
        int j=par[a]; 
        par[a]=i, a=j; 
    } 

    return i; 
} 
bool unite(int a, int b) { 
    int x=root(a), y=root(b); 
    if(x==y) return 0; 
    
    par[y]=x; 
    return 1; 
} 

int res=0; 
inline bool kruskal() { 
    res=0; 
    sort(e+1, e+n+1, kcmp); 

    int nd=0; 
    for(int i=1; i<=n; i++) if(unite(e[i].fr, e[i].to)) { 
        res+=e[i].v; 
        nd++; 
    } 

    if(nd<n-1) return 0;  // num of edges is at least n-1
    return 1; 
} 

inline void init() { 
    ec=0; 
    memset(par, -1, sizeof(par)); 
} 

int main() { 
    int a, b, c; 

    // input n, m

    for(int i=1; i<=m; i++) { 
        // input a, b, c
        eadd(a, b, c); 
        eadd(b, a, c);  // if solving bidirectional graph. 
    } 

    if(kruskal()) { 

        // print res as MST. 

    } 
    else { 

        // No Solution. 

    } 

    return 0; 
} 
