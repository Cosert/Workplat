#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

#define ti(x) x-('a'-1)

bool que[27];
char a[100],b[100],c[100];
bool ok[100];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        memset(ok,0,sizeof(ok));
        memset(que,0,sizeof(que));

        scanf("%s",a);
        scanf("%s",b);
        scanf("%s",c);

        ll len=strlen(a)-1;
        for(ll i=0;i<=len;i++) {
            int k=ti(a[i]);
            if(!que[k]) que[k]=1;
            k=ti(b[i]);
            if(!que[k]) que[k]=1;
            k=ti(c[i]);

            if(que[k]) ok[i]=1;
            else que[k]=1;

            memset(que,0,sizeof(que));
        }

        for(int i=0;i<=len;i++) {
            if(!ok[i]) {
                printf("NO\n");
                break;
            }
            else if(i==len) printf("YES\n");
        }
    }
    return 0;
}

