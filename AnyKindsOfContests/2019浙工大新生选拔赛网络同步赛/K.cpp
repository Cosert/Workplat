#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;scanf("%d",&T);
    int n;

    while(T--) {
        queue<int> kl;int h,t=0;
        scanf("%d",&n);
        char a[n];scanf("%s",&a);

        for(int i=0;i<=n-1;i++) {
            if(a[i]=='b' && a[i-1]=='b') {
                kl.push(i);
                t++;
                a[i]='{';
            }
        }

        if(t<=1) for(int i=0;i<=n-1;i++) {
            if(a[i]=='{') printf("{b}");
            else printf("%c",a[i]);
        }
        else {
            if(t%2==1) {
                h=(t+1)/2;
                for(int i=0;i<=n-1;i++) {
                    if(a[i]=='{') {
                        if(i<h) printf("{b{");
                        else if(i==h) printf("{b}");
                        else printf("}b}");
                    }
                    else printf("%c",a[i]);
                }
            }
            else {
                for(int i=0;i<=n-1;i++) {
                    if(a[i]=='{') {
                        if(i<=t/2) printf("{b{");
                        else printf("}b}");
                    }
                    else printf("%c",a[i]);
                }
            }

        }

        printf("\n");
    }
    return 0;
}
