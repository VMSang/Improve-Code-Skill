#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        vector<int> cnt(2, 0);
        
        // Đếm số lượng 0 và 1 trong chuỗi
        for (char c : s) {
            cnt[c - '0']++;
        }

        // Tìm chỉ số đầu tiên mà số lượng số ngược lại là 0
        for (int i = 0; i <= s.length(); i++) {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0) {
                cout << s.length() - i << endl;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
    }
    return 0;
}
