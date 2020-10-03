#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;scanf("%d",&T);
    int n,qu,qd,ma,ma2,mn,mk;

    while(T--) {
        qu=0;qd=0;mn=0;mk=0;ma=0,ma2=0;

        scanf("%d",&n);
        int a[n+1],b[n+1];

        scanf("%d",a+1);
        b[1]=0;
        for(int i=2;i<=n;i++) {
            scanf("%d",a+i);
            b[i]=a[i]-a[i-1];

            if(!b[i]) mn=i-1;

            if(b[i]<0 && b[i-1]>=0) {
                qd++;
                ma=a[i-1];
                if(!mn) mn=i-1;
            }
            else if(b[i-1]<=0 && b[i]>0) {
                qu++;
                if(a[i]>=ma) ma2=a[i];
            }
        }

    }
    return 0;
}
