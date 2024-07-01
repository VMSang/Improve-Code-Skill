#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t; // Số lượng test cases
    while (t--) {
        int n;
        cin >> n; // Độ dài của chuỗi
        string s;
        cin >> s; // Chuỗi ký tự

        unordered_map<string, int> cur;
        bool found = false;

        for (int i = 0; i < n - 1; ++i) {
            string t = s.substr(i, 2);
            if (cur.find(t) != cur.end()) {
                if (cur[t] < i - 1) {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            } else {
                cur[t] = i;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
