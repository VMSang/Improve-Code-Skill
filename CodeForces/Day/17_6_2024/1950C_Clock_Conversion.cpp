#include <iostream>
#include <string>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int h = (s[0] - '0') * 10 + (s[1] - '0');
        bool pm = (h >= 12);
        
        if (h == 0) {
            h = 12;
        } else if (h > 12) {
            h -= 12;
        }

        string time12;
        if (h < 10) {
            time12 = "0";
        }
        time12 += to_string(h) + s.substr(2);
        time12 += pm ? " PM" : " AM";
        cout << time12 << endl;
    }

    return 0;
}
