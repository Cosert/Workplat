#include<cstdio>
#include<cstring>

using namespace std; 

char s[1000001]; 

int main() { 
    int cases; scanf("%d", &cases); 
    for(int cas=1; cas<=cases; cas++) { 
        scanf("%s", s); 
        printf("String #%d\n", cas); 
        for(int i=0, n=(int)strlen(s); i<n; i++) putchar('A'+(s[i]-'A'+1)%26); 
        puts("\n"); 
    } 
    
    return 0; 
} 

