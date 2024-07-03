#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> prime;

void init() {
    const int limit = 10000;
    vector<bool> isPrime(limit, true);
    for (int i = 2; i < limit; ++i) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j < limit; j += i) {
            isPrime[j] = false;
        }
    }
    for (int i = 2; i < limit; ++i) {
        if (isPrime[i]) prime.push_back(i);
    }
}

int findFactor(int x) {
    for (int now : prime) {
        if (now >= x) break;
        if (x % now == 0) return now;
    }
    return -1;
}

void run() {
    int l, r;
    cin >> l >> r;
    for (int i = r; i >= l; --i) {
        int factor = findFactor(i);
        if (factor != -1) {
            int gcd = i / factor;
            cout << gcd << " " << gcd * (factor - 1) << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    init();

    int t;
    cin >> t;
    while (t--) {
        run();
    }

    return 0;
}
