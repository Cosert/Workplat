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
int cnt;int vis[maxn|2];
queue<pii> q;pii p;int &a=p.first,&b=p.second;

bool bfs(int g) {
    memset(vis,0,sizeof(vis));
    q.push({0,g});

    while(!q.empty()) {
        p=q.front();q.pop();
        vis[b]++;

        if(b==t) {
            if(a<=k) {
                if(a==k) return true;
                else {
                    m=k-a;
                    if(!(m&1)) return true;
                }
            }
        }
        
        if(a>=k) continue;

        ll len=e[b].size()-1;
        for(int i=0;i<=len;i++) {
            if(vis[e[b][i]]<min(abs(t-s+1),k)) 
                q.push({a+1,e[b][i]});
        }
    }

    return false;
}

bool dfs(int g) {
    cnt++;  //printf("%d %d\n",cnt,g);

    if(g==s) {
        if(k==cnt) return true;
        else {
            m=k-cnt;
            if(m%2) ;
            else return true;
        }
    }
    if(cnt==k) {
        cnt--;
        return false;
    }

    vis[g]++;

    ll len=e[g].size()-1;
    for(ll i=0;i<=len;i++) {
        if(!vis[e[g][i]] || (vis[e[g][i]] && e[g][i]==s && s==t)) {
            if(dfs(e[g][i])) return true;
        }
    }

    vis[g]--;cnt--;
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
        e[x].push_back(y);
        e[y].push_back(x);

        scanf("%d%d%d",&s,&t,&k);
        bool ans=0;cnt=0;
        memset(vis,0,sizeof(vis));

        ll len=e[t].size()-1;
        for(ll i=0;i<=len;i++) {
            if(dfs(e[t][i])) {
                ans=true;
                break;
            }
        }

        if(ans) printf("YES\n");
        else printf("NO\n");

        e[x].pop_back();
        e[y].pop_back();
    }
    return 0;
}

