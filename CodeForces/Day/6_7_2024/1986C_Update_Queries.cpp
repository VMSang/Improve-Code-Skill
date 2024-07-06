#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
using ll = long long;

const int N = 1e5 + 20;
int t;

int n, m, ind[N];
string a, c;

int cnt[N];
pii p[N];

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> t;

	while (t--) {
		cin >> n >> m;

		for (int i = 0; i <= n; i++) cnt[i] = 0;

		cin >> a;

		for (int i = 0; i < m; i++) {
			cin >> ind[i];
			ind[i]--;
			p[i] = {cnt[ind[i]]++, ind[i]};
		}

		cin >> c;

		sort(p, p + m);
		sort(c.begin(), c.end());

		for (int i = m - 1; i >= 0; i--) {
			a[p[i].second] = c[i];
		}

		cout << a << '\n';
	}
}