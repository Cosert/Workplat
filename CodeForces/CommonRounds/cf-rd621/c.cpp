#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

inline void wri(int integar) {  
    int numlen = 0; char charcter[15];
    while(integar) charcter[++numlen] = (integar%10)+48, integar/= 10;
    while(numlen) putchar(charcter[numlen--]);
    putchar('\n'); 
}
#define sc(temp) scanf("%d",&temp); 
#define scl(temp) scanf("%lld",&temp);

#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1
#define ti(temp) temp-'a'+1
#define inf 0x3f3f3f3f
#define maxn 100000

int cnt[27];
char c[maxn];

int main() {
    memset(cnt,0,sizeof(cnt));
    //freopen("c_c1.in","r",stdin);
    scanf("%s",c);

    ll len=strlen(c)-1;
    int n=len+1;
    for(int i=0;i<=n-1;i++) cnt[ti(c[i])]++;

    sort(cnt+1,cnt+27);

    printf("%d",cnt[26]*cnt[25]);
    return 0;
}
