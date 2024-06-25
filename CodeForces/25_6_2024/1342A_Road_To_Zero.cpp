#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long x, y, a, b;
    cin >> t;
    while (t--) {
        cin >> x >> y >> a >> b;

        if (x > y) {
            swap(x, y);
        }
        long long ans1 = x * a + y * a;
        long long z = y - x;
        long long ans2 = z * a + x * b;

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}
