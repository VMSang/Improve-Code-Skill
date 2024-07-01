#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int w = 0;
    while (true) {
        int i = s.length() - w - 1;
        int j = t.length() - w - 1;
        if (i >= 0 && j >= 0 && s[i] == t[j])
            w++;
        else
            break;
    }

    int result = s.length() + t.length() - 2 * w;
    cout << result << endl;

    return 0;
}
