#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int k = 2; k < 30; k++) {
        int x = n / ((1 << k) - 1);
        if (x * ((1 << k) - 1) == n) {
            cout << x << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}