#include<cstdio>
#include<cstring>
#include<algorithm>

#define ll long long
const int maxn=1000000; 

int n; 
int li[maxn|1];  // we use it to sort the elements for example. 

const ll tainf=9223372036854775807; 
ll trea[maxn|1]; 
int lowb(int a) {return a&(-1*a); } 

void taupd(int x, /*double/long long*/int a[]) while(x<=n) { 
    trea[x]=a[x]; 
    int lx=lowb(x); 
    for(int i=1; i<lx; i<<=1) if(trea[x-i]>trea[x]) trea[x]=trea[x-i]; // if(trea[x-i]<trea[x]) trea[x]=trea[x-i]; 
    x+=lowb(x); 
} 

ll taqry(int l, int r, /*double/long long*/int a[]) { 
    ll ans=-1*tainf;  // for comparing maxium number
    //ll ans=tainf;  // for comparing minium number
    
    while(r>=l) { 
        if(a[r]>ans) ans=a[r]; 
        //if(a[r]<ans) ans=a[r];  
        r--; 
        for(; r-lowb(r)>=l; r-=lowb(r)) if(trea[r]>ans) ans=trea[r]; // if(trea[r]<ans) ans=trea[r]; 
    } 

    return ans; 
} 

void tabuild(int r, /*double/long long*/int a* ) { 
    memset(trea, 0, sizeof(trea)); 
    for(int i=1; i<=r; i++) taupd(i, a); 
} 

int main() { 
    // input n
    // input li[1] ... li[n]
    
    tabuild(n, li); 

    taqry(1, 3); 

    taupd(2, 3); 
    
    return 0; 
} 
