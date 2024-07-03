#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	multiset<int> a;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a.insert(x);
	}
	
	int x = *prev(a.end());
	for (int i = 1; i <= x; ++i) {
		if (x % i == 0) {
			a.erase(a.find(i));
		}
	}
	
	cout << x << " " << *prev(a.end()) << endl;
	
	return 0;
}