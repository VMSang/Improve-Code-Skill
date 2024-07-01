#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long a, b, n;
        cin >> a >> b >> n;
        long cnt = 0;
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
