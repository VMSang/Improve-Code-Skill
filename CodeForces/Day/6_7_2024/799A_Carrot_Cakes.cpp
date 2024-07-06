#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
typedef long long ll;
#define all(x) x.begin(), x.end()
#define sz(s) (int)(s.size())
const ll N = 1e5 + 5;

void Provely() {
    ll n, t, k, t_d;
    cin >> n >> t >> k >> t_d;
    ll a = (n + k - 1) / k;
    ll first = a * t;
    if (first - t > t_d) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";


}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;
    // cin >> T;
    while (T--) {
        Provely();
    }
}