#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	int pos = 1;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= pos) ++pos;
	}
	
	cout << pos - 1 << endl;
	
	return 0;
}