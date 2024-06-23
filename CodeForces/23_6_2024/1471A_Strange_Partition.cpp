#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        long long max_beauty = 0;
        for (int i = 0; i < n; ++i) {
            max_beauty += (a[i] + x - 1) / x; // ceil(a[i] / x)
        }

        long long min_beauty = (sum + x - 1) / x; // ceil(sum / x)

        cout << min_beauty << " " << max_beauty << "\n";
    }

    return 0;
}
