#include "bits/stdc++.h"
using namespace std;

#ifndef debug 
    #define debug(...)
#endif

#define int long long
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define sz(v) (int)v.size()
#define all(v) v.begin(), v.end()
#define pb push_back()
#define ff first
#define ss second
#define rep(i, a, b) for(int i = a, i < (b); ++i)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rand(l, r) uniform_int_distribution<ll>(l, r)(rng)
#define shuffle(v) shuffle(all(v), rng)


void solve(){
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    int T = 1;
    cin >> T;
    for (int ti = 1; ti <= T; ti++) {
        // cout<< "Case #"<<ti++<<": ";
        solve();
    }
    return 0;
}
