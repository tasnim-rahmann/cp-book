#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

const int INF   = 1e9;
const ll LINF   = 1e18;
const int MOD   = 1e9 + 7;
const int N     = 2e5 + 5;
const ld EPS    = 1e-9;
const ld PI     = acos(-1.0);

#define fixed(n) fixed << setprecision(n)
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define sz(x)    (int)(x).size()

#define ceil_div(a,b) (((a) + (b) - 1) / (b))
#define add_mod(a,b,m) (((a) % (m) + (b) % (m)) % (m))
#define sub_mod(a,b,m) ((((a) % (m) - (b) % (m)) + (m)) % (m))
#define mul_mod(a,b,m) (((a) % (m) * (b) % (m)) % (m))

#define debug(x) cout << #x << " = " << (x) << '\n'


ll gcdll(ll a, ll b) {
    return __gcd(a, b);
}

ll lcmll(ll a, ll b) {
    return (a / gcdll(a, b)) * b;
}

ll power(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while(b) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    // solve();

    return 0;
}