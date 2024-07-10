#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main (void) {
    const int MOD = 1e9 + 7;
    int f1, f2, n;
    cin >> f1 >> f2 >> n;
    int ans = 0;
    switch (n % 6) {
        case 1:
            ans = f1;
            break;
        case 2:
            ans = f2;
            break;
        case 3:
            ans = f2 - f1;
            break;
        case 4:
            ans = -f1;
            break;
        case 5:
            ans = -f2;
            break;
        case 0:
            ans = f1 - f2;
            break;
    }
    cout << ((ans % MOD) + MOD) % MOD;
    return 0;
}