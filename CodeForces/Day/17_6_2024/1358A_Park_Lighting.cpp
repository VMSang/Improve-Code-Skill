#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n, m;
        cin >> n >> m;
        long res = (n * m + 1) / 2;
        cout << res << endl;
    }
    return 0;
}
