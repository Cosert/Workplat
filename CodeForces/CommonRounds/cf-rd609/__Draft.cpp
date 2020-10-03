#include<bits/stdc++.h>
using namespace std;

int prime(int a,int b) {
    if(b>a) swap(a,b);

    if(a<=3 ||b<=3) return 0;
    else {
            int z=0,x=0;
        for(int i=2;i<=a/2;i++) {
            if(!z) if(a%i==0) z++;
            if(!x) if(x%i==0) x++;
            if(z && x) return 1;
        }
    }
}

int main() {
    int n;scanf("%d",&n);

    if(n==1) printf("9 8");
    else if(n==2) printf("6 4");
    else if(n==3) printf("9 6");
    else if(n==4) printf("8 4");
    else if(n==5) printf("15 10");
    else if(n==6) printf("10 4");
    else if(n==7) printf("15 8");
    else if(n==8) printf("12 4");
    else if(n==9) printf("15 6");
    else if(n==10) printf("14 4");
    else {
        int i=n+4,j=4;
        while(!prime(i,j)) {
            i++;
            j++;
        }

        printf("%d %d",i,j);
    }
    return 0;
}
