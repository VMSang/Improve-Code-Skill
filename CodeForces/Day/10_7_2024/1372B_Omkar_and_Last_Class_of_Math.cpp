#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve() {
    int n;
    cin >> n;
    int mn = INT_MAX;
    for(int i = 1; i * i <= n; i++) {
        if(n % i) continue;
        int d1 = i, d2 = n/i;
        mn = min(mn, max(d1, n-d1));
        mn = min(mn, max(d2, n-d2));
    }
    cout << mn << ' ' << n - mn << '\n';
}
int main() {
    speed;
    int t;
    cin >> t;
    while(t--) solve();
}