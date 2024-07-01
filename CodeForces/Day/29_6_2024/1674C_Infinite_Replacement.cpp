#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;

        if (t == "a") {
            cout << 1 << endl;
        } else if (t.find('a') != string::npos) {
            cout << -1 << endl;
        } else {
            cout << (1LL << s.length()) << endl; // sử dụng 1LL để tránh tràn số khi s.length() lớn
        }
    }
    return 0;
}
