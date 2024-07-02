#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum % 9 != 0) {
            cout << "NO" << endl;
        } else {
            cout << (min({a, b, c}) >= sum / 9 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
