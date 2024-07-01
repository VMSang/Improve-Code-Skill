#include <iostream>
#include <vector>
using namespace std;

// Hàm construct để tạo vector d
vector<int> construct(int f, int k) {
    vector<int> d(k);
    for (int i = 0; i < k; ++i) {
        d[i] = (i < f - 1) ? i + 2 : 1;
    }
    return d;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        int ans = 1;

        // Tìm giá trị f thích hợp
        for (int f = 1; f < k; ++f) {
            vector<int> d = construct(f, k - 1);
            int sum_d = 0;
            for (int x : d) {
                sum_d += x;
            }
            if (sum_d <= n - 1) {
                ans = f;
            }
        }

        // Tạo vector res và tính giá trị
        vector<int> res(1, 1);
        vector<int> d = construct(ans, k - 1);
        for (int x : d) {
            res.push_back(res.back() + x);
        }

        // In kết quả
        for (int num : res) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
