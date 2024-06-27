#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin >> ts;
    while (ts--) {
        int n, m, x, y; cin >> n >> m >> x >> y;
        y = min(y, x * 2);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;

            int j = 0;
            while (j < m) {
                if (s[j] == '*') {
                    j++;
                } else {
                    //đếm '.' liên tiếp
                    int start = j;
                    while (j < m && s[j] == '.') {
                        j++;
                    }
                    int length = j - start;
                    ans += (length / 2) * y + (length % 2) * x;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}