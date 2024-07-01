#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;

        // Kiểm tra điều kiện không thể di chuyển
        if (min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d) {
            cout << -1 << endl;
        } else {
            // Số bước di chuyển tối thiểu là (n - 1) + (m - 1)
            cout << n + m - 2 << endl;
        }
    }
    return 0;
}
