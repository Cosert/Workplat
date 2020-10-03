#include<cstdio>
#include<cstring>

template<typename _tp> _tp readnum(_tp &_var) { 
    _var=0; bool _neg=0; char _rd=(char)getchar(); 
    while(_rd<'0' || _rd>'9') { 
        if(_rd == '-') _neg=1; 
        _rd=(char)getchar(); 
    } 
    while(_rd>='0' && _rd<='9') _var=_var*10 + (_tp)_rd-48, _rd=(char)getchar(); 
    if(_neg) _var*=-1; 
    return _var; 
} 

template<typename _tp> void writenum(_tp _var, int _nline=1) { 
    static char _wri[60]; int _tpi=0; 
    if(_var<0) putchar('-'), _var*=-1; 
    do{ _wri[_tpi++] = (char)((_var%10)+48), _var/=10; }while(_var); 
    while(_tpi) putchar(_wri[--_tpi]); 
    if(_nline) putchar(_nline==1?'\n':'0'); 
} 

#include<string>

// read std::string

void readstr(std::string &_var, bool _ed=0) { 
    char _ch; 
    while((_ch=(char)getchar())&&((_ch!=' ')|_ed)&&_ch!='\n') _var.push_back(_ch); 
} 

void putstr(std::string _var, int _nline=1) { 
    unsigned long long _len=_var.length(), _it=0; 
    while(++_it<=_len) putchar(_var[_it-1]); 
    if(_nline) putchar(_nline==1?'\n':' '); 
} 



// Example
int main() { 
    std::string s; 

    readstr(s, 1); 
    putstr(s, 2); 
    putstr(s, 1); 

    int a; 
    readnum(a); 
    unsigned long long b=readnum(b); 

    writenum(a, 2); 
    writenum(a); 
    writenum(b, 0); 
    writenum(b); 

    return 0; 
} 
