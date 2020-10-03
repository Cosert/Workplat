#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;scanf("%d",&T);
    int r,g,b;

    while(T--) {
        scanf("%d%d%d",&r,&g,&b);
        
        int mx=min(r,min(g,b));
        if(r && r==g && g==b) printf("Yes\n");
        else if(!r && !g && !b) printf("No\n");
        else {
            int a,c,x[3],R=r,G=g,B=b;
            r-=mx;
            g-=mx;
            b-=mx;

            x[0]=r,x[1]=g,x[2]=b;
            if((r && g && !b) || (!r && g && b) || (r && !g && b)) {
                sort(x,x+3);
                a=x[2];c=x[1];
            }
            else if(r || g || b) {
                a=max(r,max(g,b));
                c=0;
            }

            if(a && c) {
                if(a<=1 && c<=1) printf("Yes\n");
                else if((a<=2 && c<=1) || (a<=1 && c<=2)) printf("Yes\n");
                else if(a==2 && c==2 && min(R,min(G,B))) printf("Yes\n");
                else printf("No\n");
            }
            else if(a && !c) {
                if(a>=2) printf("No\n");
                else printf("Yes\n");
            }
        }
    }
    return 0;
}
