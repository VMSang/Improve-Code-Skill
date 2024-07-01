#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m, x;
    cin >> n >> m;
    ll a[n], r[n];
    for (ll i = 0; i < n; ++i) cin >> a[i];
    set<ll>s;
    for (ll i = n - 1; i > -1; --i) {
        s.insert(a[i]);
        r[i] = s.size();
    }
    while (m--) {
        cin >> x;
        cout << r[x-1] << "\n";
    }
    return 0;
}