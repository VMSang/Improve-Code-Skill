//dung tim kiem nhi phan vi can tim trong khoang lon nhưng có thứ tự
//O(logN)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin >> ts;
    while (ts--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> v(n);
        for (long long &x : v) cin >> x;

        int l = 1, r = 1e9;
        while (l <= r) {
            long long w = (l + r) / 2;
            long long sum = 0;
            for (int i = 0; i < n; i++) {
                sum += (v[i] + 2 * w) * (v[i] + 2 * w);
                if (sum > c) break; //overflow
            }
            if (sum == c) {
                cout << w << endl;
                break;
            }
            else if (sum > c) r = w - 1;
            else l = w + 1;
        }
    }
    return 0;
}