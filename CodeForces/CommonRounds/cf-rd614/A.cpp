#include<bits/stdc++.h>
using namespace std;



int main() {
    int T;scanf("%d",&T);
    int n,loc,k;
    while(T--) {
        //init();
        scanf("%d%d%d",&n,&loc,&k);
        int left=loc-1,right=loc+1;
        int ok=1,oo;vector<int> noo;
        for(int i=1;i<=k;i++) {
            scanf("%d",&oo);
            noo.push_back(oo);
            if(oo==loc) ok=0;
            while(count(noo.begin(),noo.end(),left)) left--;
            while(count(noo.begin(),noo.end(),right)) right++;
        }
        if(ok) printf("0\n");
        else {
            if(loc-left<right-loc) {
                if(left<1) printf("%d\n",right-loc);
                else printf("%d\n",loc-left);
            }
            else {
                if(right>n) printf("%d\n",loc-left);
                else printf("%d\n",right-loc);
            }
        }
    }
    return 0;
}
