#include<bits/stdc++.h>
using namespace std;

int main() {
    int number;scanf("%d",&number);
    char a[100],b[100];

    while(number--) {
        scanf("%s",&a);
        scanf("%s",&b);
        char c[strlen(a)];

        sort(a,a+strlen(a));

        if(strlen(b)<strlen(a)) printf("NO\n");
        else {
            for(int i=0;i<=strlen(b)-strlen(a);i++) {
                for(int j=0;j<=strlen(a)-1;j++) c[j]=b[j+i];
                sort(c,c+strlen(c));

                if(!strcmp(c,a)) {
                    printf("YES\n");
                    break;
                }
                else if(i==strlen(b)-strlen(a)) printf("NO\n");
            }
        }
    }
    return 0;
}
