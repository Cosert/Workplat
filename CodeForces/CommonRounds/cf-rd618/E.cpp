#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define pdi pair<double,int>
#define inf 0x3f3f3f3f

const int maxn=1000000;

int n,a;
pdi s[maxn+1];

int main() {
    scanf("%d",&n);

    scanf("%lf",&s[1].first);
    s[1].second=1;

    for(int i=2;i<=n;i++) {
        scanf("%d",&a);
        s[i].first=a;s[i].second=1;

        for(int j=i;j>=2;j--) {
            if(s[j-1].first<s[j].first) break;
            else {
                int l1=s[j-1].second,l2=s[j].second;
                s[j-1].second=l1+l2;
                s[j-1].first=((s[j-1].first*l1)+(s[j].first*l2))/(l1+l2);
                i--;n--;
            }
        }
    }

    for(int i=1;i<=n;i++) {
        double k=s[i].first;int len=s[i].second;
        for(int j=1;j<=len;j++) printf("%.9f\n",k);
    }
    return 0;
}

