#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

inline void wri(int integar) {  
    int numlen = 0; char charcter[15];
    while(integar) charcter[++numlen] = (integar%10)+48, integar/= 10;
    while(numlen) putchar(charcter[numlen--]);
    putchar('\n'); 
}

#define sc(temp) scanf("%d",&temp); 
#define scl(temp) scanf("%lld",&temp);
#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1

#define inf 0x3f3f3f3f

int n,m;

int main() {
    freopen("b_c1.in","r",stdin);
    int T; sc(T); while(T--) {
        
    }
    return 0;
}
