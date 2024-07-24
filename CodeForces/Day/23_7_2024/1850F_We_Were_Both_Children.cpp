#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> cnt(n + 1, 0), mx(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x <= n) ++cnt[x];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) mx[j] += cnt[i];
    }
    cout << *max_element(mx.begin(), mx.end()) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
