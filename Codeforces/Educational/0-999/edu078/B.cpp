#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c;scanf("%d",&n);

    while(n--) {
        scanf("%d%d",&a,&b);
        c=abs(a-b);
        if(!c) printf("0\n");
        else {
            int t=0;
            while(((t*t+t)/2)<c) t++;
            while((((t*t+t)/2)+c)%2!=0) t++;

            printf("%d\n",t);
        }
    }
    return 0;
}
