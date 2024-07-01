#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define null nullptr

void solution() {
    int n, k;
    cin >> n >> k;
    if (!((n - k * k) % 2) && n - k * k >= 0) 
        cout << "YES";
    else 
        cout << "NO";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(null);
    cout.tie(null);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
        cout << endl;
    }
    return 0;
}
