#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void proof() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n, vector<int>(2));
    if (s[0] == '1') {
        dp[0][0] = a[0];
    }
    for (int i = 1; i < n; ++i) {
        if (s[i] == '0') {
            dp[i][0] = dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]);
        } else {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) + a[i];
            dp[i][1] = dp[i - 1][1] + a[i - 1];
        }
    }
    cout << max(dp.back()[0], dp.back()[1]) << "\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        proof();
    }
    return 0;
}