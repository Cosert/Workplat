#include<cstdio>
#include<cstring>
using namespace std; 

const int maxn=1000000; 

int tr[maxn][26], exs[maxn|1], tc, mrk='a';  // switch the mrk to satisfy your request
void tadd(const char *s, int len) {  // use strlen or some method to calculate the length of string first.
    int p=0; 
    for(int i=0; i<=len-1; i++) { 
        int c=s[i]-mrk; 
        if(tr[p][c]==-1) tr[p][c]=++tc;  // you need to initialize tc to 0 and all the elements of tr to -1.
        p=tr[p][c];  // transport to the place which the char last exists.
    } 
    exs[p]++; 
}  /*
void tadd(string s) {  // if you use std::string, you can merely change the structre of the insertion function. 
    int p=0, len=(int)s.length(); 
    // same as the upward.
}  */ 

void tfind(char *s, int len) {  // if you use std::string, you can change the structre which is like tadd.
    int p=0; 
    for (int i=0; i<=len-1; i++) { 
        int c=s[i]-mrk; 
        if (tr[p][c]==-1) return 0; 
        p=tr[p][c]; 
    } 
    return exs[p]; 
} 
int prfmatch(int p) {  // an apply to finding the same-suffix string pairs. Initialize p as 0
    int ans=0; 
    for(int i=0; i<=25; i++) if(tr[p][i]!=-1) { 
        prfmatch(tr[p][i]); 
        exs[p]+=exs[tr[p][i]]; 
    } 
    if(exs[p]>=2 && p>0) { 
        exs[p]-=2; 
        ans+=2; 
    } 
    return ans; 
} 

int main() { 
    int n; 
    char s[maxn]; 
    string str; 

    // input n, s(str)

    for(int i=1; i<=n; i++) { 
        
        int len=(int)strlen(s); 
        tadd(s, len);  // tadd(str); 
        
    } 

    // your operations
    
    return 0; 
} 

//  Here is a trie that is packed as a structre. The maxium numbers it can carry is 10^5 with locally and Google's server's test.

struct trie{ 
    int nx[maxn|1][26], exs[maxn|1], lz[maxn|1]={0}, sum=0, tc=0, mrk='a'; 
    
    void reset(int _mrk='a') { 
        memset(nx, -1, sizeof(nx)); 
        memset(exs, 0, sizeof(exs)); 
        tc=0; 
        mrk=_mrk; 
    } 
    void insert(string s) { 
        int p=0, len=(int)s.length(); 
        for(int i=0; i<=len-1; i++) { 
            int c=s[i]-mrk; 
            if(nx[p][c]==-1) nx[p][c]=++tc; 
            p=nx[p][c]; 
        } 
        exs[p]++; 
    } 
    bool find(string s) { 
        int p=0, len=(int)s.length(); 
        for(int i=0; i<=len-1; i++) { 
            int c=s[i]-mrk; 
            if(nx[p][c]==-1) return 0; 
            p=nx[p][c]; 
        } 
        return exs[p]; 
    } 
    
    void dfs(int p) { 
        for(int i=0; i<=25; i++) if(nx[p][i]!=-1) { 
            dfs(nx[p][i]); 
            lz[p]+=lz[nx[p][i]]; 
        } 
        lz[p]+=exs[p]; 
        if(lz[p]>=2 && p>0) { 
            lz[p]-=2; 
            sum+=2; 
        } 
    } 
    int prfmatch() { 
        memset(lz, 0, sizeof(lz)); 
        sum=0; 
        dfs(0); 
        return sum; 
    } 
}; 
