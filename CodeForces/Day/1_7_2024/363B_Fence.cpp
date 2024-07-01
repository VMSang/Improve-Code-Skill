#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(), v.end()
#define int long long
using namespace std;

const int M = 1e9 + 7;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


void solve() {
	int n, k;
	cin >> n >> k;
	vector<int>pref(n + 1);
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		pref[i] = pref[i - 1] + x;
	}
	int mn = INT_MAX, ans = -1;
	for (int i = 1; i + k - 1 <= n; i++) {
		if (pref[i + k - 1] - pref[i - 1] < mn) {
			mn = pref[i + k - 1] - pref[i - 1];
			ans = i;
		}
	}
	cout << ans << "\n";

}


signed main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}

