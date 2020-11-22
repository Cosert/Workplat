#pragma GCC optimize("O2")
#include<bits/stdc++.h>

template<typename _tp> inline _tp ri(_tp &_var) { _var=0; bool _ng=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { if(_rd=='-'){_ng=1; } _rd=(char)getchar(); }
    while('0'<=_rd && _rd<='9') _var=_var*10+(_tp)_rd-48, _rd=(char)getchar(); 
    if(_ng){_var*=-1; } return _var; } 
template<typename _tp> inline bool wo(_tp _var, int _nli=0) { static char _wri[36]; int _tpi=0; 
    if(_var<0){putchar('-'), _var*=-1; } do{_wri[_tpi++]=(char)((_var%10)+48), _var/=10; }while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nli){_nli==2 ? putchar(' ') : putchar('\n'); } return 1; } 
#define mcs() for(int Case=ri(Case), tcs=1; tcs<=Case; tcs++)

using namespace std; 

const int inf=2114514810; 

const int maxn=100000; 

int main() { 
    int Case; 
#ifndef ONLINE_JUDGE
    freopen("b.in", "r", stdin); 
#endif
    Case=ri(Case); 
    for(int tcs=1; tcs<=Case; tcs++) { 
        printf("Case #%d: ", tcs); 
        char c=(char)getchar(); 
        if(c>'0') { 
            for(int i=1; i<=(int)(c-'0'); i++) putchar('('); 
        } 
        putchar(c); 
        int cur=c-'0'; 
        while(c=(char)getchar()) { 
            if(c<'0' || c>'9') { 
                if(cur>0) for(int i=1; i<=cur; i++) putchar(')'); 
                break; 
            } 
            else if(cur<(int)(c-'0')) { 
                int dlt=(int)(c-'0')-cur; 
                cur=(int)(c-'0'); 
                for(int i=1; i<=dlt; i++) putchar('('); 
                wo(cur); 
            } 
            else if(cur>(int)(c-'0')) { 
                int dlt=cur-(int)(c-'0'); 
                cur=(int)(c-'0'); 
                for(int i=1; i<=dlt; i++) putchar(')'); 
                wo(cur); 
            } 
            else wo(cur); 
        } 
        putchar('\n'); 
    } 
    return 0; 
} 
