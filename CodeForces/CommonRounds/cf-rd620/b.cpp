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

#define maxn 100
#define maxm 50

int n,m;
char s[101][51],rs[101][51],c[101],lic[101];
int lis[101],mid[101],cnt=0,mcnt=0;

int main() {
    mid[0]=-1;
    scanf("%d%d",&n,&m);
    
    //if(m!=1) {
    scanf("%s",s[1]);
    for(int j=0;j<=m-1;j++) rs[1][m-j-1]=s[1][j];
    if(!strcmp(s[1],rs[1])) {
        //printf("1\n");
        mcnt++;
        mid[mcnt]=1;
    }

    for(int i=2;i<=n;i++) {
        scanf("%s",s[i]);
        for(int j=0;j<=m-1;j++) rs[i][m-j-1]=s[i][j];
        
        bool mys=1;        
        for(int j=1;j<=i-1;j++) {
            if(!strcmp(s[i],rs[j])) {
                //printf("%d %d match\n",j,i);
                cnt++;lis[cnt]=j;
                i--;
                n--;
                rs[j][0]='0';
                mys=0;
                break;
            }
        }

        if(mys) {
            if(!strcmp(s[i],rs[i])) {
                //printf("%d\n",i);
                mcnt++;
                mid[mcnt]=i;
            }
        }
    }
    
    int sum=cnt*m*2;
    //printf("c %d\n",cnt);
    //printf("mc %d\n",mcnt);
    for(int i=1;i<=mcnt;i++) {
        if(rs[mid[i]][0]=='0') continue;
        else {
            mid[0]=mid[i];
            //printf("cho %d\n",mid[0]);
            sum+=m;
            break;
        }
    }

    printf("%d\n",sum);

    for(int i=1;i<=cnt;i++) printf("%s",s[lis[i]]);
    
    if(mid[0]!=-1) printf("%s",s[mid[0]]);

    //printf("%d",cnt);
    for(int i=cnt;i>=1;i--) {
        rs[lis[i]][0]=s[lis[i]][m-1];
        printf("%s",rs[lis[i]]);
    }

    return 0;
}
    //}
    /*else {
        int last=-1;
        scanf("%c",&c[1]);
        last=1;
        for(int i=2;i<=n;i++) {
            scanf("%c",&c[i]);
            for(int j=1;j<=n-1;j++) {
                if(c[j]==c[i]) {
                    lic[++cnt]=c[j];
                    c[j]='0';
                    if(last==j) {
                        last++;
                        for(int k=last;k<=n-1;k++) {
                            if(c[k]>='a' && c[k]<='z') {
                                last=k;
                                break;
                            }
                            else if(k==n-1) last=-1;
                        }
                    }

                    i--;
                    n--;
                    break;
                }
            }
        }

        int sum=0;
        for(int i=1;i<=cnt;i++) {
            printf("%c",c[i]);
            sum++;
        }
        if(last!=-1) {
            sum++;
            printf("%c",c[last]);
        }
        for(int i=cnt;i>=1;i--) {
            printf("%c",c[i]);
            sum++;
        }
    }

    return 0;
}*/
