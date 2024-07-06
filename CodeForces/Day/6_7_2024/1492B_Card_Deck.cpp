#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
void pull(vector<int>&arr, vector<int>&mx, int l, int r, int ind) {
	for (int i = l; i < r; i++) {
		cout << arr[i] << " ";
	}
	if (mx[ind] == 0) {
		return;
	}
	pull(arr, mx, mx[ind + 1], mx[ind], ind + 1);
}

void solve() {
	int n; cin >> n;
	vector<int>arr(n);
	vector<int>mx;
	int maxi = 0;
	for (int i = 0 ; i < n; i++) {
		cin >> arr[i];
		if (maxi < arr[i]) {
			maxi = arr[i];
			mx.push_back(i);
		}
	}
	sort(mx.begin(), mx.end(), greater());
	pull(arr, mx, mx[0], n, 0);
	cout << endl;
}

int32_t main() {

	ios_base::sync_with_stdio(false);	    cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	// int t = 1;
	while (t--) {
		solve();
	}

	return 0;
}


