#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n, a, b;
        cin >> n >> a >> b;
        long d = (2 * a < b ? (2 * a) : b);
        cout << (n / 2) * d + (n % 2) * a << endl;
    }
    return 0;
}
