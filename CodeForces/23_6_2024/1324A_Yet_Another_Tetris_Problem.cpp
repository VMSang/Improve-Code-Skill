#include <iostream>
#include <vector>

using namespace std;

bool canClearField(const vector<int>& heights) {
    int parity = heights[0] % 2; // Lấy phần dư của chiều cao cột đầu tiên khi chia cho 2
    for (int height : heights) {
        if (height % 2 != parity) {
            return false; // Nếu phần dư không giống nhau, trả về false
        }
    }
    return true; // Nếu tất cả phần dư giống nhau, trả về true
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }
        if (canClearField(heights)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
