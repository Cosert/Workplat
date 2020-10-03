#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;scanf("%d",&T);
    int n,c;
    int br,sp,h;

    while(T--) {
        scanf("%d",&n);
        if(n>=18 && n<41) {
            printf("18\n");
            printf("  *\n");
            printf(" * *\n");
            printf("*****\n");
            printf("  *\n");
            printf(" * *\n");
            printf("*****\n");
            printf("  *\n");
            printf("  *\n");
        }
        else {
            for(int i=3;i*i*2+9*i-4<=n;i++) c=i;

            printf("%d\n",c*c*2+9*c-4);

            for(int i=1;i<=c;i++) printf(" ");
            printf("*\n");

            int p1=c-1,p2=1;
            for(int i=1;i<=c-3;i++) {
                for(int i=1;i<=p1;i++) printf(" ");
                printf("*");
                for(int i=1;i<=p2;i++) printf(" ");
                printf("*");
                printf("\n");
                p1--;p2+=2;
            }

            for(int i=1;i<=c;i++) {
                int f=p1,g=p2;
                for(int i=1;i<=2;i++) {
                    for(int i=1;i<=f;i++) printf(" ");
                    printf("*");
                    for(int i=1;i<=g;i++) printf(" ");
                    printf("*");
                    printf("\n");
                    f--;g+=2;
                }

                for(int i=1;i<=2*c+1;i++) printf("*");
                printf("\n");
            }

            for(int i=1;i<=c-1;i++) {
                for(int i=1;i<=c-1;i++) printf(" ");
                printf("* *\n");
            }

            for(int i=1;i<=c-1;i++) printf(" ");
            printf("***\n");
        }
    }
    return 0;
}
