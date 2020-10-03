#include<bits/stdc++.h>
using namespace std;

#define maxn 1000000000

int main() {
    int T;scanf("%d",&T);
    int n;

    while(T--) {
        scanf("%d",&n);

        if(n==2) {
            for(int lll=1,i,j;lll==1;lll++) {
                scanf("%d%d",&i,&j);
                if(abs(i-j)>=2) printf("YES\n");
                else printf("NO\n");
            }
        }
        else {
            int a[n+1];int mx=0,mi=maxn+1,ba=0,bb=0;

            for(int i=1;i<=n;i++) {
                scanf("%d",&a[i]);
                if(a[i]>mx) {
                    mx=a[i];
                    ba=i;
                }
                if(a[i]<mi) {
                    mi=a[i];
                    bb=i;
                }
                
                if(mx-mi>=n) {
                    printf("YES\n");
                    printf("%d %d\n",min(ba,bb),max(ba,bb));
                    break;
                }
                else if(i==n) {
                    if(mx-mi>=abs(bb-ba+1)) {
                        printf("YES\n");
                        printf("%d %d\n",min(ba,bb),max(ba,bb));
                    }
                    else printf("NO\n");
                }
            }
        }

    }
    return 0;
}
