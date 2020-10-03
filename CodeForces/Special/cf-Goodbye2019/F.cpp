#include<bits/stdc++.h>
using namespace std;

int main() {
    const int length=200000;
    char a[length];scanf("%s",&a);

    int sum=0;

    if(!count(a,a+strlen(a),'0')==strlen(a)) printf("0");
    else {
        int one=count(a,a+strlen(a),'1');

        sum+=one;

        
    }
    return 0;
}
