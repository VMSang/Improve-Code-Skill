#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << "\n";
    } else {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << "\n";
    }

    return 0;
}