#include<bits/stdc++.h>
using namespace std;

#define maxn 1000000000

vector<int> cmp(vector<int> a,vector<int> b) {
    double asum=accumulate(begin(a),end(a),0.0);
    double amean =  asum / a.size();
    double accuma  = 0.0;
    for_each(begin(a),end(a),[&](const double d) {		accuma  += (d-amean)*(d-amean);	});
    double astdev = sqrt(accuma/(a.size()-1));

    double bsum=accumulate(begin(b),end(b),0.0);
    double bmean =  sum / b.size();
    double accumb  = 0.0;
    for_each(begin(b),end(b),[&](const double d) {		accumb  += (d-bmean)*(d-bmean);	});
    double bstdev = sqrt(accumb/(b.size()-1));
	
    if(amean!=bmean) {
        if(amean<bmean) return a;
        else return b;
    }
    else {
        if(astdev!=bstdev) {
            if(astdev<bstdev) return a;
            else return b;
        }
        else {
            if(a.size()>=b.size()) return a;
            else return b;
        }
    }
}

int main() {
    int N;scanf("%d",&N);
    vector<int> se[N+1];int e,q,n=0;
    for(int i=1;i<=N;i++) {
        scanf("%d",&q);n+=q;

        for(int j=1;j<=q;i++) {
            scanf("%d",e);
            se[i].push_back(e);
        }
    }
    
    sort(se+1,se+N+1,cmp);

    int a[n+1];int qqq=0;
    for(int j=1;i<=N;j++) {
        while(se[j].size()) {
            qqq++;
            a[qqq]=se[j].begin();
            vector<int>::iterator vv;vv=se[j].begin();
            se[j].erase(vv);
        }
    }

    
    return 0;
}
