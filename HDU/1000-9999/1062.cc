#include<cstdio>
#include<cstring>
#include<string>
using namespace std; 

bool wstr(string& var) { var=""; 
    int c; while(c=getchar(), c>32) var+=(char)c; 
    return c==32; 
} 

int main() { 
    int cases; scanf("%d", &cases); getchar(); 
    while(cases--) { 
        int n=0, cnt=0, c; 
        
        string s; 
        while(wstr(s)) { 
            for(int i=(int)s.length()-1; i>=0; i--) putchar(s[i]); 
            putchar(' '); 
        } 
        for(int i=(int)s.length()-1; i>=0; i--) putchar(s[i]); 
        putchar('\n'); 
    } 
    
    return 0; 
} 

