
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std; 
#define pii pair<int, int>
const int inf=0x3f3f3f3f; 
const int maxn=1000000; 


int n, m; // suppose n is the number of nodes

struct edg{ 
    int to, nx; int v; /* v can be the type you want */
    friend bool operator<(const edg& a,const edg& b) {return a.v>b.v; } // change the condition for the different requirements
} eli[maxn<<3|15]; 
int eh[maxn|1], ecnt; 
inline void eadd(int b, int a, int c) { eli[ecnt]=(edg){a, eh[b], c}; eh[b]=ecnt++; } // c=value, b=terminate point, a=start point

int d[maxn|1]; // d should be the same type as edg.v
priority_queue<edg> dkq; 
void dijkstra(int st, int ed) { 
    memset(d, -1, sizeof(d)); d[st]=0; // start point
    dkq.push((edg){st, 0, 0}); 
    edg p; int &a=p.to; 
    
    while(!dkq.empty()) { 
        p=dkq.top(); dkq.pop(); 
        
        // here can be added with special judges
        
        for(int i=eh[a]; i!=-1; i=eli[i].nx) if(d[eli[i].to]==-1 || d[eli[i].to]>d[a]+eli[i].v) { 
            d[eli[i].to]=d[a]+eli[i].v; 
            dkq.push(eli[i]); 
        } 
    } 

    if(d[ed]==-1) { // there's no anyone path to the target. 
        // No solution
        
        return; 
    } 
    // Answer
    
} 

inline void init() { 
    memset(eh, -1, sizeof(eh)); 
    ecnt=0; 
} 

inline void solve() { 
    
    // build the graph
    
    int st, ed; 
    
    dijkstra(st, ed); 
    
} 

