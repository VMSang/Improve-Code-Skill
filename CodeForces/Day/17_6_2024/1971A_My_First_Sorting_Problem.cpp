#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x, y) << endl;
    }
    return 0;
}
