#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1
#define hst(temp1,temp2) temp1 < temp2 ? temp1:temp2
#define lst(temp1,temp2) temp1 > temp2 ? temp1:temp2
#define inf 0x3f3f3f3f

#define maxn 100000

int n,m,x,y,s,t,k;

vector<int> e[maxn|2];
int cnt;bool vis[maxn|2],v2[maxn|2];

bool dfs2(int a) {
    v2[a]=true;m++;
    if(m==k-cnt) {
        if(a==t) return true;
        v2[a]=false;m--;
        return false;
    }
    else if(a==s) {
        if(!(k-cnt-m)) {
            v2[a]=false;m--;
            return false;
        }
        else if(!((k-cnt)%(m+cnt))) {
            printf("dfs2\n");
            return true;
        }
        else return false;
    }

    ll len=e[a].size()-1;
    for(ll i=0;i<=len;i++) {
        if(!v2[e[a][i]]) {
            if(dfs2(e[a][i])) return true;
        }
    }

    m--;v2[a]=false;
    return false;
}

bool dfs(int a) {
    //printf("%d ",a);
    vis[a]=1;cnt++;
    //printf("%d\n",cnt);
    if(cnt==k) {
        if(a==t) {
            //printf("just\n");
            return true;
        }
        else {
            cnt--;
            vis[a]=0;
            return false;
        }
    }
    else if(cnt<k && a==t) {
        if((k-cnt)%2==0) {
            //printf("fine\n");
            return true;
        }
        else if(k-cnt==1) {
            cnt--;
            vis[a]=0;
            return false;
        }
        else{
            ll len=e[a].size()-1;m=0;memset(v2,0,sizeof(v2));
            for(ll i=0;i<=len;i++) {
                if(dfs2(e[a][i])) return true;
            }
            cnt--;
            vis[a]=0;
            return false;
        }
    }

    ll len=e[a].size()-1;
    for(ll i=0;i<=len;i++) {
        if(!vis[e[a][i]]) {
            if(dfs(e[a][i])) return true;
        }
    }

    cnt--;vis[a]=0;
    return false;
}

int main() {
    scanf("%d",&n);

    for(int i=1;i<=n-1;i++) {
        int a,b;
        scanf("%d%d",&a,&b);
        e[a].push_back(b);
        e[b].push_back(a);
    }

    scanf("%d",&n);

    while(n--) {
        scanf("%d%d",&x,&y);
        if(x>y) swap(x,y);
        e[x].push_back(y);
        e[y].push_back(x);

        scanf("%d%d%d",&s,&t,&k);
        cnt=0;m=0;
        if(k==1 && s==t) printf("NO\n");
        else if(k>=2 && !(k&1) && s==t) {
            if(!e[s].size()) printf("NO\n");
            else printf("YES\n");
        }
        else {
            memset(vis,0,sizeof(vis));
            ll len=e[s].size()-1;
            bool ans=false;
            for(ll i=len;i>=1;i--) {
                //printf("%d ",e[s][i]);
                if(dfs(e[s][i])) {
                    ans=true;
                    break;
                }
            }
            //printf("\n");
            if(ans) printf("YES\n");
            else printf("NO\n");
        }

        e[x].pop_back();
        e[y].pop_back();
    }
    return 0;
}
