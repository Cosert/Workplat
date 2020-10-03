#include<bits/stdc++.h>
using namespace std;



int main() {
    int number;scanf("%d",&number);
    char a[5001],b[5001];
    int z,c,x;
    int ju=-1;

    while(number--) {
        scanf("%s",&a);
        scanf("%s",&b);
        z=strlen(a)-1;c=strlen(b)-1;

        for(int i=0;i<=min(z,c);i++) {
            if(a[i]<b[i]) {
                ju=1;
                break;
            }
            else if(a[i]>b[i] || (a[i]==b[i] && i==min(z,c))) {
                x=i;
                ju=0;
                break;
            }
        }

        if(!ju) for(int i=x;i<=z;i++) {
            if(a[i]<b[x] || (a[x+1]<b[x+1] && a[i]==b[x])) {
                swap(a[i],a[x]);
                ju=1;
                break;
            }
        }

        if(!ju) for(int i=0;i<=x-1;i++) {
            if(((a[i]==b[x] && a[x+1]<b[x+1]) || a[i]<b[x]) && (a[x]<b[i] || (a[x]==b[i] && a[i+1]<b[i+1]))) {
                swap(a[x],a[i]);
                ju=1;
                break;
            }
        }

        if(ju) printf("%s\n",a);
        else if(!ju) printf("---\n");

    }

    return 0;
}
