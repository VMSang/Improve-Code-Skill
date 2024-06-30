#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Số lượng test cases

    while (t--) {
        int n;
        cin >> n; // Độ dài của mảng

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i]; // Đọc mảng số nguyên
        }

        string s;
        cin >> s; // Đọc chuỗi ký tự

        vector<vector<int>> l(n, vector<int>(3));
        for (int i = 0; i < n; ++i) {
            l[i][0] = s[i];
            l[i][1] = p[i];
            l[i][2] = i;
        }

        // Sắp xếp vector `l`
        sort(l.begin(), l.end());

        vector<int> q(n, -1);
        for (int i = 0; i < n; ++i) {
            q[l[i][2]] = i + 1;
        }

        // In kết quả
        for (int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
