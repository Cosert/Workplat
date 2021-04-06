#include<bits/stdc++.h>
using namespace std;


int main() {
    int number;scanf("%d",&number);
    char a[1000];

    while(number--) {
        scanf("%s",&a);
        int n=strlen(a)-1;

        if(a[n]=='o' && a[n-1]=='p') printf("FILIPINO\n");
        else if (a[n]=='u' && a[n-1]=='s' && ((a[n-2]=='e' && a[n-3]=='d')||(a[n-2]=='a' && a[n-3]=='m'))) printf("JAPANESE\n");
        else if (a[n]=='a' && a[n-1]=='d' && a[n-2]=='i' && a[n-3]=='n'  && a[n-4]=='m') printf("KOREAN\n");
    }

    return 0;
}
