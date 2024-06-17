#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // We need to compute the minimum difference
        long long sum1 = 0, sum2 = 0;

        // Add the largest coin to the first pile
        sum1 += (1 << n); // 2^n

        // Add the smallest (n/2 - 1) coins to the first pile
        for (int i = 1; i < n / 2; ++i) {
            sum1 += (1 << i); // 2^i
        }

        // Add the remaining coins to the second pile
        for (int i = n / 2; i < n; ++i) {
            sum2 += (1 << i); // 2^i
        }

        // The minimum difference
        cout << abs(sum1 - sum2) << endl;
    }

    return 0;
}
