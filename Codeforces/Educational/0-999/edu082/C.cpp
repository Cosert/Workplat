#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(n) n<<1
#define rc(n) (n<<1)|1
#define inf 0x3f3f3f3f

const int tis=1-'a';
#define ti(x) x+tis
#define tc(x) x-tis

char s[200];
int n,l[27],r[27],gph[55],lm,rm;
bool v[27];

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        memset(v,0,sizeof(a));
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));
        memset(gph,0,sizeof(gph));

        scanf("%s",s);ll len=strlen(s)-1;
        gph[27]=ti(s[0]);v[gph[27]]=true;
        l[ti(s[0])]=27;

        for(ll i=1;i<=len;i++) {
            int a=ti(s[i]),b=ti(s[i-1]);
            if(!v[b])
        }
    }
    return 0;
}


