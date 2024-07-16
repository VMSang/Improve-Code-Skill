#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, n, m;
    cin >> a >> b >> n >> m;
    if (m <= min(a, b) && n + m <= a + b) {
        cout << "Yes\n";
    }
    else cout << "No\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
