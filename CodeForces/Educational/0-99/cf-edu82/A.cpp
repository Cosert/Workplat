#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

int n,s,t,cnt,c;
int len;char str[100];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        s=-1,t=-1,cnt=0,c=0;
        scanf("%s",str);
        len=strlen(str);

        for(int i=1;i<=len;i++) {
            if(str[i-1]=='1') {
                s=i,t=i;
                n=i;
                break;
            }
        }

        for(int i=n;i<=len;i++) {
            if(str[i-1]=='0') c++;
            if(str[i-1]=='1') {
                cnt+=c;c=0;
                t=i;
            }
        }

        int ans;
        if(s==-1) printf("0\n");
        else if(!cnt) printf("0\n");
        else printf("%d\n",cnt);
    }
    return 0;
}


