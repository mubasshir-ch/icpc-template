#include<bits/stdc++.h>
using namespace std;

ostream& operator<<(ostream& o,const string& s);

template<typename F, typename S>
ostream& operator<<(ostream& o, const pair<F,S>& p);

template<typename... T, template<class...> class C>
ostream& operator<<(ostream& o, const C<T...>& v);

ostream& operator<<(ostream& o, const string& s){
    for(auto c:s) o<<c;
    return o;
}

template<typename F, typename S>
ostream& operator<<(ostream& o, const pair<F,S>& p){
    o << "(" << p.first <<  "," << p.second  << ")";
    return o;
}

template<typename... T, template<class...> class C>
ostream& operator<<(ostream& o, const C<T...>& v){
    o << "[";
    int tot=0;
    for(auto x : v){ 
        o << x;
        if(tot < (int)v.size() -1) o << ",";
        tot++;
    }
    o << "]";
    return o;
}

vector<string> vec_splitter(string s) {
    s += ',';
    vector<string> res;
    while(!s.empty()) {
        res.push_back(s.substr(0, s.find(',')));
        s = s.substr(s.find(',') + 1);
    }
    return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx, 
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; } 
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
    if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
    stringstream ss; ss << H;
    cerr << args[idx] << " = " << ss.str();
    debug_out(args, idx + 1, LINE_NUM, T...);
}

#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)


