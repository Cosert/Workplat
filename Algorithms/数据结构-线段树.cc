#include<cstdio>

#define ll long long
const int maxn=1000000; 

#define lc(_tp) _tp<<1
#define rc(_tp) _tp<<1|1

struct st{ 
    int typ=1; 
    struct segt{ll num, lz; int l, r; } s[maxn<<2|15]; 
    
    void pushup(int k) { 
        if(typ==1) s[k].num=s[lc(k)].num+s[rc(k)].num; 
        else if(typ==2) s[k].num=(s[lc(k)].num>s[rc(k)].num ? s[lc(k)].num : s[rc(k)].num); 
        else if(typ==3) s[k].num=(s[lc(k)].num<s[rc(k)].num ? s[lc(k)].num : s[rc(k)].num); 
        else if(typ==4) s[k].num=s[lc(k)].num^s[rc(k)].num; 
    } 
    void pushdown(int k) { 
        int mid=(s[k].l+s[k].r)>>1; if(s[k].lz) { 
            s[lc(k)].num+=(mid-s[k].l+1)*s[k].lz, s[lc(k)].lz+=s[k].lz; 
            s[rc(k)].num+=(s[k].r-mid)*s[k].lz, s[rc(k)].lz+=s[k].lz; 
            s[k].lz=0; 
        } 
    } 

    void build(int k, int l, int r) { 
        if(l==r) { 
            s[k].num=0, s[k].lz=0; 
            s[k].l=s[k].r=l; 
            return; 
        } 
        int mid=(l+r)>>1; 
        build(lc(k), l, mid), build(rc(k), mid+1, r); 
        pushup(k); 
    } 
    
    void init(int l=1, int r=1, int _typ=1) { 
        build(1, l, r); 
        if(_typ>4) _typ=1; 
        typ=_typ; 
    } 
    
    ll getsum(int l=1, int r=1, int k=1) { 
        if(l<=s[k].l && s[k].r<=r) return s[k].num; 
        pushdown(k); 
        int mid=(l+r)>>1; 
        if(s[k].r<=mid) return sum(l, mid, lc(k)); 
        else if(s[k].l>=mid+1) return sum(mid+1, r, rc(k)); 
        else return sum(l, mid, lc(k))+sum(mid+1, r, rc(k)); 
    } 

    void updaterang(int l=1, int r=1, ll val=0, int k=1) { 
        if(s[k].l<=l && r<=s[k].r) { 
            s[k].sum+=val, s[k].lz+=val; 
            return; 
        } 
        pushdown(k); 
        int mid=(s[k].l+s[k].r)>>1; 
        if(r<=mid) updaterang(l, r, val, lc(k)); 
        else if(l>=mid+1) updaterang(l, r, val, rc(k)); 
    } 
} 
