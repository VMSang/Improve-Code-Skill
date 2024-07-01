//trừ phía trước và sau đúng bằng nó, ở giữa gấp đôi phía trước
//nếu 1 trong 3 vị trí âm thì chứng tỏ kh thể đưa về 0

#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ts; cin >> ts;
	while (ts--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int& x : a) {
			cin >> x;
		}

		bool flag = 0;
		for (int i = 0; i < n - 2; i++) {
			if (a[i] < 0) {
				cout << "NO\n";
				flag = 1;
				break;
			}

			int tmp = a[i];
			a[i] -= tmp;
			a[i + 1] -= 2 * tmp;
			a[i + 2] -= tmp;
		}
		if (flag == 0) {
			if (a[n - 1] == 0 && a[n - 2] == 0) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}

		}
	}
	return 0;
}