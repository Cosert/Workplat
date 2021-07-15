#pragma GCC optimize("O2")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define lc(temp) temp<<1
#define rc(temp) (temp<<1)|1

#define inf 0x3f3f3f3f 
#define maxn 100000

int n, li[maxn|2], l2[maxn|2]; int cnt, a, b, m; 
char s[maxn]; 

int cos(char x) { 
    if(x=='A') return a; 
    if(x=='B') return b; 
} 

int main() {
    int T;scanf("%d",&T); 
    while(T--) {
        cnt=0; 
        scanf("%d%d%d", &a, &b, &m); 
        memset(li, 0, sizeof(li)); 
        
        scanf("%s", s); 
        n=(int)strlen(s); 
        char c=s[0], x; int ci=1, v=cos(s[0]); li[1]=v; 
        for(int i=2; i<=n; i++) { 
            if(s[i-1]!=c || i==n) { 
                cnt++; 
                li[cnt]=v; 
                l2[cnt]=i; 
                c=s[i-1]; 
                ci=i; 
                v=cos(c); 
            } 
        } 
        l2[cnt+1]=n; 

        for(int i=cnt; i>=1; i--) { 
            if(m>=li[i]) { 
                m-=li[i]; 
                if(i==1) { 
                    printf("1\n"); 
                    break; 
                } 
            } 
            else { 
                printf("%d\n", l2[i+1]); 
            } 
        } 
    }
    return 0;
}
