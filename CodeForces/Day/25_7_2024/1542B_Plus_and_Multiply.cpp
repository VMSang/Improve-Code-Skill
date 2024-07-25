#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define sz(v) int(v.size())

void solve() {
    ll n, a, b; cin >> n >> a >> b;

    ll x = 1;
    while (x <= n) {
        if (x%b == n%b){cout << "YES\n"; return;}
        if (a == 1) break;
        x *= a;
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t; while (t--) solve();
    return 0;
}
