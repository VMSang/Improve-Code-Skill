#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        ll coal = y * k;
        ll sticks = coal + k - 1;
        ll div = (sticks + x - 2) / (x - 1); // equivalent to ceil(sticks / (x - 1))
        ll ans = div + k;

        cout << ans << endl;
    }
    return 0;
}
