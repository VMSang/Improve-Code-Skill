#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sw sync_with_stdio
#pragma GCC optimize("Ofast, unroll-loops, O3")
#define fast ios::sw(0),cin.tie(0),cout.tie(0);
const int N = 2e5 + 5, M = 1e9 + 7, inf = 1e18 + 8;

signed main() {
    fast; int x = 0, s = 0;

    for (int i = 1; i <= 5; ++i)
        cin >> x, s += x;

    cout << (s % 5 || s == 0 ? -1 : s / 5) << "\n";
}