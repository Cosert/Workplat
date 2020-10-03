#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;scanf("%d%d",&n,&m);

    char a[n+1][11],b[m+1][11];

    for(int i=1;i<=n;i++) scanf("%s",&a[i]);
    for(int i=1;i<=m;i++) scanf("%s",&b[i]);

    char wkc[n*m+1][11],csl[n*m+1][11];

    int T=0,temp=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            T++;
            //temp=j+i-1;
            //while(temp>n) temp-=n;
            //if(!temp) temp=n;
            temp++;
            if(temp>n) temp-=n;
            strcpy(wkc[T],a[temp]);
            strcpy(csl[T],b[j]);
        }
    }

    int cases;scanf("%d",&cases);int c;

    for(int i=1;i<=cases;i++) {
        scanf("%d",&c);

        temp=c%(n*m);
        if(!temp) {
            printf("%s",a[n]);
            printf("%s",b[m]);
            printf("\n");
        }
        else {
            printf("%s",wkc[temp]);
            printf("%s",csl[temp]);
            printf("\n");
        }
    }
    return 0;
}
