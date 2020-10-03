#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define sc(temp) scanf("%d",&temp);
#define scl(temp) scanf("%lld",&temp);

#define ll long long
#define pib pair<int,bool>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1

#define inf 0x3f3f3f3f
#define maxn 200000
int n,m,k,d[maxn+1],dl[maxn+1]={0},que[maxn+1]={0},cnt=0,tot=0;

struct edge{
    int t;
    bool sp;
    int nxt;
} e[maxn<<1|2];int h[maxn|2],ecnt=0;
bool sp[maxn+1],vis[maxn+1];

inline void eadd(int a,int b,bool c) {
    e[ecnt].t=b;
    e[ecnt].sp=c;
    e[ecnt].nxt=h[a];
    h[a]=ecnt++;
}

queue<pib> q;pib p;
void bfs() {
    int &a=p.first;bool &b=p.second;
    while(!q.empty()) {
        p=q.front();q.pop();
        if(b) {
			cnt++;
			que[cnt]=a;
		}

        if(a==n) return;
        
        for(int i=h[a];i!=-1;i=e[i].nxt) {
            if(d[e[i].t]>d[a]+1) {
                q.push({e[i].t,e[i].sp});
                d[e[i].t]=d[a]+1;
                //printf("%d\n",d[e[i].t]);
            }
        }
    }
}

void dfs(int a) {
	vis[a]=1;
	if(sp[a]) {
		cnt++;
		que[cnt]=a;
	}
	if(a==n) {
		tot=cnt;
		vis[a]=0;
		if(sp[a]) cnt--;
		return;
	}
	
	for(int i=h[a];i!=-1;i=e[i].nxt) {
		if(d[e[i].t]>d[a]+1) {
			d[e[i].t]=d[a]+1;
			dfs(e[i].t);
		}
	}
	
	vis[a]=0;
	if(sp[a]) cnt--;
	return;
}

int main() {
    //freopen("d_d1.in","r",stdin);
    memset(d,inf,sizeof(d));
    memset(sp,0,sizeof(sp));
    memset(h,-1,sizeof(h));
    memset(vis,0,sizeof(vis));
    sc(n);sc(m);sc(k);

    int a;
    for(int i=1;i<=k;i++) {
        sc(a);
        sp[a]=true;
    }

    int b;
    for(int i=1;i<=m;i++) {
        sc(a);sc(b);
        eadd(a,b,sp[b]);
        eadd(b,a,sp[a]);
    }

    d[1]=0;
    //q.push({1,sp[1]});
    dfs(1);

    int mi=inf;
    for(int i=1;i<=tot-1;i++) {
    	k=que[i],m=que[i+1];
    	mi=min(mi,abs(d[m]-d[k]));
	}
	if(tot<k) mi=1;
    //for(int i=1;i<=cnt;i++) printf("%d ",que[i]);
    //puts("\n");

    //for(int i=1;i<=n;i++) printf("%d ",d[i]);
    printf("%d",d[n]-mi+1);

    return 0;
}
