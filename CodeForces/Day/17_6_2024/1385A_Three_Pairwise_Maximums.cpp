#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long x, y, z;
        cin >> x >> y >> z;
        if (x == y && x >= z) {
            cout << "YES" << endl;
            cout << x << " " << z << " " << z << endl;
        } else if (x == z && z >= y) {
            cout << "YES" << endl;
            cout << x << " " << y << " " << y << endl;
        } else if (y == z && y >= x) {
            cout << "YES" << endl;
            cout << y << " " << x << " " << x << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
