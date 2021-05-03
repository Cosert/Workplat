#pragma GCC optimize("O2")
#include<bits/stdc++.h>
int absi(int _temp_) { return (_temp_ ^ (_temp_>>31)) - (_temp_>>31); } 
int maxi(int _temp1_, int _temp2_) { return (_temp2_ & ((_temp1_ - _temp2_) >> 31)) | (_temp1_ & (~(_temp1_ - _temp2_) >> 31)); }  
int mini(int _temp1_, int _temp2_) { return (_temp1_ & ((_temp1_ - _temp2_) >> 31)) | (_temp2_ & (~(_temp1_ - _temp2_) >> 31)); } 
void swpi(int &_temp1_, int &_temp2_) { _temp1_ ^= _temp2_ ^= _temp1_ ^= _temp2_; } 
int intbit(int _temp_, int _iter_) { return (_temp_ >> _iter_) & 1; } 

inline int inpi() { int _i32_=0, _neg_=1; char _rd_=(char)getchar(); 
    while(_rd_<'0' || _rd_>'9') { if(_rd_ == '-') _neg_=-1; 
        _rd_=(char)getchar(); } 
    while(_rd_>='0' && _rd_<='9') _i32_=_i32_*10 + (int)_rd_-48, _rd_=(char)getchar(); 
    return _i32_ * _neg_; } 
inline void oupi(int _i32_) { static int _wri_[32]; int _top_=0; 
    if(_i32_<0) { putchar('-'), _i32_*=-1; } 
    do{ _wri_[_top_++] = _i32_ %10, _i32_/=10; } while(_i32_); 
    while(_top_) putchar(_wri_[--_top_]+48); } 

using namespace std;

#define doub double
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pdi pair<double, int>
#define pid pair<int, double>
#define pdd pair<double, double>
#define pli pair<ll, int>
#define pil pair<int, ll>
#define pll pair<ll, ll>

#define inf 0x3f3f3f3f
#define lc(_temp_) _temp_<<1
#define rc(_temp_) _temp_<<1|1
const int mod=1e9+7; 

int n, m; 


int main() {
    for(int Case=inpi(), cas=1; cas<=Case; cas++) { 
        
    } 
    return 0;
}


