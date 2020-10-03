#include<bits/stdc++.h>
using namespace std;

int digit(int n) {
    int i=0;
    while(n) {
        n/=10;
        i++;
    }

    return i;
}

int judge(int n,int i,int q) {
    int j=0;
    while(q) {
        if((n/q)%10<i) return 0;
        q/=10;
    }
    return 1;
}

int main() {
    int number;scanf("%d",&number);
    int n,i,q;

    while(number--) {
        scanf("%d",&n);
        switch(digit(n)) {
        case 1:
            printf("%d\n",n);
            break;
        case 2:
            i=n/10;
            q=10;
            if(!judge(n,i,q)) printf("%d\n",8+i);
            else printf("%d\n",9+i);
            break;
        case 3:
            i=n/100;
            q=100;
            if(!judge(n,i,q)) printf("%d\n",17+i);
            else printf("%d\n",18+i);
            break;
        case 4:
            i=n/1000;
            q=1000;
            if(!judge(n,i,q)) printf("%d\n",26+i);
            else printf("%d\n",27+i);
            break;
        case 5:
            i=n/10000;
            q=10000;
            if(!judge(n,i,q)) printf("%d\n",35+i);
            else printf("%d\n",36+i);
            break;
        case 6:
            i=n/100000;
            q=100000;
            if(!judge(n,i,q)) printf("%d\n",44+i);
            else printf("%d\n",45+i);
            break;
        case 7:
            i=n/1000000;
            q=1000000;
            if(!judge(n,i,q)) printf("%d\n",53+i);
            else printf("%d\n",54+i);
            break;
        case 8:
            i=n/10000000;
            q=10000000;
            if(!judge(n,i,q)) printf("%d\n",62+i);
            else printf("%d\n",63+i);
            break;
        case 9:
            i=n/100000000;
            q=100000000;
            if(!judge(n,i,q)) printf("%d\n",71+i);
            else printf("%d\n",72+i);
            break;
        case 10:
            printf("81\n");
            break;
        }
    }

    return 0;
}
