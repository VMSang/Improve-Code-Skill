#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0;
        
        for (char ch : s) {
            if (ch == 'A') a++;
            else if (ch == 'B') b++;
            else if (ch == 'C') c++;
        }

        cout << (b == a + c ? "YES" : "NO") << endl;
    }

    return 0;
}
