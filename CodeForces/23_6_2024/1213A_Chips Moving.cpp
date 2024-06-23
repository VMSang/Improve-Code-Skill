#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	int cnto = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cnto += x & 1;
	}
	
	cout << min(cnto, n - cnto) << endl;
	
	return 0;
}