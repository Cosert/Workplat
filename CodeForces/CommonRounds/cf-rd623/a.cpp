#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1

#define inf 0x3f3f3f3f

int imax(int a, int b) { 
    if(a<b) return b; 
    else return a; 
} 

int a, b, x, y;

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%d%d%d%d", &a, &b, &x, &y); 
        x++, y++; 
        int z[4]; 
        z[0]=a*(y-1); 
        if(y==1) z[0]=0; 
        z[1]=a*(b-y); 
        if(y==b) z[1]=0; 
        z[2]=b*(x-1); 
        if(x==1) z[2]=0; 
        z[3]=b*(a-x); 
        if(x==a) z[3]=0; 
        sort(z, z+4); 
        printf("%d\n", z[3]); 
    }
    return 0;
}

