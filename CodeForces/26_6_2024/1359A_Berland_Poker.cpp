#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Đọc số lượng test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; // Đọc các thông số n, m, k

        int ans = 0;
        int d = n / k;

        for (int a1 = 0; a1 <= m; ++a1) {
            for (int a2 = 0; a2 <= a1; ++a2) {
                if (a1 > d) {
                    continue;
                }
                if (a1 + a2 > m) {
                    continue;
                }
                if (a1 + (k - 1) * a2 < m) {
                    continue;
                }
                ans = max(ans, a1 - a2);
            }
        }

        cout << ans << endl; // In kết quả cho mỗi test case
    }

    return 0;
}
