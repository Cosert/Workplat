#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;scanf("%d",&T);
    int n,a,b;

    while(T--) {
        scanf("%d%d%d",&n,&a,&b);

        int p1[a+1];
        int p2[b+1];
        
        int x=1,y=1;
        for(int i=1;i<=a;i++) {
            scanf("%d",&p1[i]);
            x=max(x,p1[i]);
        }
        for(int i=1;i<=b;i++) {
            scanf("%d",&p2[i]);
            y=max(y,p2[i]);
        }

        if(x<y) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}
