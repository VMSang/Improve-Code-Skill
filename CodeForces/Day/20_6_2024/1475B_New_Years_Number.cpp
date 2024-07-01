#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a = n / 2020;
    int b = n % 2020;
    if (b <= a) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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