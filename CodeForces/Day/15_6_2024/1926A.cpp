#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int a = 0, b = 0;
        for (int p = 0; p < s.size(); p++) {
            if (s[p] == 'A') {
                a++;
            } else if (s[p] == 'B') {
                b++;
            }
        }

        if (a > b) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}
