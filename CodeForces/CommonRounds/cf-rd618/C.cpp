#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f
#define maxn 100000

int n,a[maxn+1],dig[33]={0},cnt=0;

int main() {
    //for(int i=1;i<=32;i++) printf("%d",dig[i]);
    //printf("\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        scanf("%d",a+i);

        for(int j=1;j<=32;j++) { 
            if((a[i]>>(j-1))&1) dig[j]++;
        }
    }
    
    int t;
    for(t=32;t>=1;t--) {
        if(dig[t]==1) break;
    }
    
    if(!t) printf("%d",a[n]);
    else {
        for(int i=1;i<=n;i++) {
            if((a[i]>>(t-1))&1) {
                if(i!=n) swap(a[i],a[n]);

                printf("%d",a[n]);
                break;
            }
        }
    }

    for(int i=1;i<=n-1;i++) printf(" %d",a[i]);

    return 0;
}

