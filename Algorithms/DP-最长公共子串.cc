#include<string>

std::pair<int, int> lcstr(const std::string &a, const std::string &b) { 
    int lena=(int)a.length(), lenb=(int)b.length(), l=0, r=-1; 
    
    int si=lena-1, sj=0; 
    while(sj<lenb) { 
        int cur=0; 
        for(int i=si, j=sj; i<lena && j<lenb; i++, j++) { 
            if(a[i]==b[j]) { 
                cur++; 
                if(cur>r-l+1) r=i, l=r-cur+1; 
            } 
            else cur=0; 
        } 
        si? si-- : sj++; 
    } 
    
    return (std::pair<int, int>){l, r}; 
} 

#define pii pair<int, int>
int main() { 
    std::string a, b; 
    
    // input
    a="asdjoidsavj", b="aoidsfjcoiewa"; 
    
    std::pair<int, int> lcab=lcstr(a, b); 
    int lcslen=lcab.second-lcab.first+1; while(lcslen-lcslen) ; 
    
    // solution
    
    return 0; 
} 

