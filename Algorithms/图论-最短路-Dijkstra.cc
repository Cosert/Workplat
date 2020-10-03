#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>

#define pii pair<int, int>
const int inf=0x3f3f3f3f; 
const int maxn=1000000; 

int n, m; 

struct edg{int v, to, nx; } e[maxn<<3|15]; int hp[maxn|1], ec; 
inline void eadd(int a, int b, int c) { 
    e[ec].to=b; 
    e[ec].v=c; 
    e[ec].nx=hp[a]; 
    hp[a]=ec++; 
} 

priority_queue<pii, vector<pii>, greater<pii> > q; 
int d[maxn|1]; 
bool dijkstra(int s, int ed) { 
    memset(d, -1, sizeof(d)); 
    d[s]=0;  // start point
    q.push((pii){0, s}); 
    pii p; int &a=p.second; 

    while(!q.empty()) { 
        p=q.top(); q.pop(); 
        
        // here can be added with special judges

        for(int i=hp[a]; i!=-1; i=e[i].nx) if(d[e[i].to]==-1 || d[e[i].to]>d[a]+e[i].v) { 
            d[e[i].to]=d[a]+e[i].v; 
            q.push((pii){e[i].v, e[i].to}); 
        } 
    } 

    if(d[ed]==-1) return 0;  // there's no anyone path to the target. 
    return 1; 
} 

inline void init() { 
    memset(hp, -1, sizeof(hp)); 
    ec=0; 
} 



int main() { 
    int a, b, c; 

    // input n, m

    for(int i=1; i<=m; i++) { 
        // input a, b, c
        eadd(a, b, c); 
        eadd(b, a, c);  // if solving bidirectional graph. 
    } 

    int s, ed; 
    if(dijkstra(s)) { 

        // print d[ed] as the shortest path. 

    } 
    else { 

        // No Solution. 

    } 

    return 0; 
} 
