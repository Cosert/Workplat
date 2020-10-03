#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

int n,a[150];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%d",&n);
        int down=0,up=0,c0=0,op=0;
        for(int i=1;i<=n;i++) {
            scanf("%d",a+i);
            if(a[i]<0) down+=a[i];
            if(a[i]>0) up+=a[i];
            if(!a[i]) {
                c0++;
                i--;n--;
            }
        }

        if(up==down*-1 || c0>0) {
            if(c0>0) {
                down+=c0;
                op+=c0;
            }

            if(up+down==0) op++;
        }

        printf("%d\n",op);
    }
    return 0;
}
