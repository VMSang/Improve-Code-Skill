#include <iostream>
#include <vector>

using namespace std;

void find_gift_givers(int n, const vector<int>& p) {
    vector<int> givers(n); // Khởi tạo mảng kết quả với kích thước n

    // Xây dựng mảng kết quả
    for (int i = 0; i < n; ++i) {
        givers[p[i] - 1] = i + 1;
    }

    // In ra mảng kết quả
    for (int i = 0; i < n; ++i) {
        cout << givers[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> p(n); // Mảng chứa thông tin người bạn đã nhận quà
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    find_gift_givers(n, p);

    return 0;
}
