#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0;
        int r = n - 1;
        int suml = a[0];
        int sumr = a[n - 1];
        int ans = 0;

        while (l < r) {
            if (suml == sumr) {
                ans = max(ans, l + 1 + n - r);
            }

            if (suml <= sumr) {
                l++;
                if (l < r) suml += a[l];
            } else {
                r--;
                if (r > l) sumr += a[r];
            }
        }

        cout << ans << endl;
    }
    return 0;
}
