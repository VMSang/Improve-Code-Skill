#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<int> a(n + 1, 0);
    int k = 0;

    for (int i = 2; i <= n; ++i) {
        if (s[i - 1] == s[i - 2]) {
            ++k;
        }
        a[i] = k;
    }

    int m;
    cin >> m;
    vector<int> l(m), r(m);

    for (int i = 0; i < m; ++i) {
        cin >> l[i] >> r[i];
    }

    for (int i = 0; i < m; ++i) {
        cout << a[r[i]] - a[l[i]] << endl;
    }

    return 0;
}
