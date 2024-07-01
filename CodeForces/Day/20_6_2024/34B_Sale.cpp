#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int sum = 0;
    for (int i = 0; i < n && m > 0 && a[i] < 0; i++, m--) {
        sum -= a[i];
    }

    cout << sum << "\n";

    return 0;
}