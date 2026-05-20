#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<string> vs;
#define rep(i, a, b) for(ll i = (a); i < (b); ++i)
#define tr(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define w(a) while(a--)
#define cll(n) ll n; cin >> n
#define endl '\n'
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 998244353

int main() {
    fastio;
    cll(n);
    vs a(n);
    ll maxsz = -1;
    rep(i, 0, n) {
        cin >> a[i];
    }
    sort(all(a), [&](string a, string b) {
        return a + b < b + a;
    });
    rep(i, 0, n) {
        cout << a[i];
    }
    cout << endl;
}
