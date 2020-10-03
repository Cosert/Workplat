#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c;scanf("%d",&n);
    while(n--) {
        scanf("%d%d%d",&a,&b,&c);

        int temp1=a,temp2=b,temp3=c;
        if(temp1>temp2) swap(temp1,temp2);
        if(temp2>temp3) swap(temp2,temp3);
        if(temp1>temp2) swap(temp1,temp2);

        a=temp1;b=temp2;c=temp3;

        if(a==b && b==c) printf("0\n");
        else if(a==b && b!=c) {
            if(c-b>=2) printf("%d\n",abs(c-b-2)+abs(c-a-2));
            else printf("%d\n",abs(c-b-1)+abs(c-a-1));
        }
        else if(b==c && a!=b) {
            if(b-a>=2) printf("%d\n",abs(b-a-2)+abs(c-a-2));
            else printf("%d\n",abs(b-a-1)+abs(c-a-1));
        }
        else printf("%d\n",abs(b-a-1)+abs(c-2-a)+abs(c-1-b));
    }

    return 0;
}
