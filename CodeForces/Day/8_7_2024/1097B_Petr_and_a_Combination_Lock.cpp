#include <bits/stdc++.h>
using namespace std;

bool canReachZero(int n, vector<int> angles, int curr, int index) {
    if (index == n) return curr == 0;
    if (canReachZero(n, angles, (curr + angles[index]) % 360, index + 1)) return true;
    if (canReachZero(n, angles, (curr - angles[index] + 360) % 360, index + 1)) return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> angles(n);
    for (int i = 0; i < n; ++i) cin >> angles[i];

    if (canReachZero(n, angles, 0, 0)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
