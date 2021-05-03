#include<bits/stdc++.h>
using namespace std;



int main() {
    int number;scanf("%d",&number);
    int n,o,k,ju;

    while(number--) {
        o=0;k=0;ju=1;
        scanf("%d",&n);

        int a,b[n+1];
        for(int i=1;i<=n;i++) {
            scanf("%d",&a);
            if(!(a%2)) {
                for(int j=1;j<=k;j++) {
                    if(a==b[j]) {
                        ju=0;
                        break;
                    }
                }
                if(ju) {
                    b[k+1]=a;
                    k++;
                    while(!(a%2)) {
                        a/=2;
                        o++;
                    }
                }


            }
        }

        printf("%d\n",o);
    }

    return 0;
}
