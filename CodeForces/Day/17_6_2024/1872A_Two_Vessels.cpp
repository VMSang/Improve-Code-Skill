#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            swap(a, b);
        }
        long diff = (b - a + 1) / 2;
        long ans = (diff + c - 1) / c;
        cout << ans << endl;
    }
    return 0;
}
