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
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

int n,m,a[101],b[101];

int main() {
    int T;sc(T);while(T--) {
        sc(n);sc(m);
        int cnt=0;

        sc(a[1]);
        for(int i=2;i<=n;i++) {
            sc(a[i]);
            b[i]=i-1;
            if(m>=a[i]*b[i]) {
                m-=a[i]*b[i];
                cnt+=a[i];
            }
            else {
                cnt+=m/b[i];
                m=0;
            }
        }

        printf("%d\n",cnt+a[1]);
    }
    return 0;
}

