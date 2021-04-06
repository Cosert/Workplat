#include<cstdio>
#include<cstdlib>

struct node{int num; node *nxt; }; 

struct que{ 
    node *h=NULL, *p=NULL; int size=0; 
    bool empty() { 
        return !size; 
    } 
    void push(int a) { 
        node *nd; 
        nd=(node*)malloc(sizeof(node)); 
        nd->nxt=NULL; 
        nd->num=a; 
        if(h==NULL) { 
            h=nd; 
            p=nd; 
            size=1; 
            return; 
        } 
        p->nxt=nd; 
        p=nd; 
        size++; 
    } 

    int top() { 
        if(empty()) return 0; 
        return h->num; 
    } 

    bool pop() { 
        if(h==NULL) { 
            return 0; 
        } 
        h=h->nxt; 
        if(h==NULL) p=NULL; 
        size--; 
        return 1; 
    } 
}; 

int main() { 
    que q; 
    int a; 
    while(scanf("%d", &a) && a) { 
        q.push(a); 

    } 
    while(!q.empty()) { 
        printf("%d\n", q.top()); 
        q.pop(); 
    } 
    
    return 0; 
} 
