#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Số lượng test cases

    for (int _ = 0; _ < t; ++_) {
        int q;
        cin >> q; // Số lượng phần tử trong mỗi test case

        vector<int> a;
        int cnt = 0;

        for (int i = 0; i < q; ++i) {
            int x;
            cin >> x; // Đọc từng phần tử

            int nw_cnt = cnt + (!a.empty() && a.back() > x);
            if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0])) {
                a.push_back(x);
                cnt = nw_cnt;
                cout << '1';
            } else {
                cout << '0';
            }
        }
        cout << endl;
    }

    return 0;
}
