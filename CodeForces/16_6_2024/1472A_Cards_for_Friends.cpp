#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int w, h, n; cin >> w >> h >> n;
        int total = 1; // Bắt đầu với 1 mảnh giấy ban đầu

        // Cắt liên tục cho đến khi không thể cắt được nữa
        while ((w % 2 == 0 || h % 2 == 0) && total < n) { 
            if (w % 2 == 0) {
                w /= 2; 
                total *= 2;
            } else {
                h /= 2;
                total *= 2;
            }
        }

        if (total >= n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
