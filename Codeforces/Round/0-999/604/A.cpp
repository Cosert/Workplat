#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int number;scanf("%d",&number);
    getchar();
    int k,fal;
    string a;
    while(number--) {
        fal=0;
        getline(cin,a);

        if(a.size()==1 && a[0]!='?') cout<<a<<endl;
        else if(count(a.begin(),a.end(),'?')==a.size()) {
            if(a.size()%2!=0) {
                k=a.size();
                k--;
                k/=2;
                for(int i=1;i<=k;i++) {
                    printf("ab");
                }
                printf("a");
                printf("\n");
            }
            else if(a.size()%2==0) {
                k=a.size();
                k/=2;

                for(int i=1;i<=k;i++) {
                    printf("ab");
                }
                printf("\n");
            }
        }
        else {
            if(a[0]=='?') {
                if(a[1]=='a') a[0]='b';
                else if(a[1]=='b') a[0]='a';
                else if(a[1]=='c') a[0]='a';
                else a[0]='a';
            }
            else if(a[0]!='?' && a[0]==a[1]) {
                    printf("-1\n");
                    fal=1;
            }

            for(int i=1;i<=a.size()-2;i++) {
                if(a[i]!='?' && a[i]==a[i+1]) {
                    printf("-1\n");
                    fal=1;
                    break;
                }
                else if(a[i]=='?'){
                    if(a[i+1]=='?') {
                        if(a[i-1]=='a') a[i]='b';
                        else if(a[i-1]=='b') a[i]='a';
                        else if(a[i-1]=='c') a[i]='a';
                    }
                    else {
                        if(a[i+1]=='a') {
                            if(a[i-1]=='b') a[i]='c';
                            else if(a[i-1]=='c') a[i]='b';
                            else if(a[i-1]=='a') a[i]='b';
                        }
                        else if(a[i+1]=='b') {
                            if(a[i-1]=='b') a[i]='a';
                            else if(a[i-1]=='c') a[i]='a';
                            else if(a[i-1]=='a') a[i]='c';
                        }
                        else if(a[i+1]=='c') {
                            if(a[i-1]=='a') a[i]='b';
                            else if(a[i-1]=='b') a[i]='a';
                            else if(a[i-1]=='c') a[i]='a';
                        }
                    }
                }
            }
            if(a[a.size()-1]=='?') {
                if(a[a.size()-2]=='a') a[a.size()-1]='b';
                else if(a[a.size()-2]=='b') a[a.size()-1]='a';
                else if(a[a.size()-2]=='c') a[a.size()-1]='a';
            }

            if(!fal) cout<<a<<endl;
        }
    }

    return 0;
}
