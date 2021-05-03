#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int number;scanf("%d",&number);
    int n,maxn,g,s,b,k;
    while(number--) {
        g=0;s=0;b=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);

        if(n%2==0) maxn=n/2;
        else if(n%2!=0) maxn=(n-1)/2;

        if(maxn<=3) printf("0 0 0\n");
        else {
            g++;
            for(int i=1;i<=n;i++,g++) {
                if(i>=maxn) {
                            printf("0 0 0\n");
                            k=n+2;
                            break;
                }

                if(a[i]!=a[i+1]) {
                    k=i;
                    break;
                }
            }

            s++;
            for(int i=k+1;i<=n;i++,s++) {
                if(i>=maxn) {
                    printf("0 0 0\n");
                    k=n+2;
                    break;
                }

                if(s>g && a[i]!=a[i+1]) {
                    k=i;
                    break;
                }

            }

            b++;
            for(int i=k+1;i<=n;i++,b++) {
                if(i>maxn) {
                    printf("0 0 0\n");
                    k=n+2;
                    break;
                }

                if(b>g && a[i]!=a[i+1]) {
                    if(a[i+1]==a[maxn+1]) {
                        break;
                    }
                }
            }

            if(k!=n+2) printf("%d %d %d\n",g,s,b);
        }
    }

    return 0;
}
