#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, v[i]);
    }

    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (v[i] != v[i - 1]) {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
