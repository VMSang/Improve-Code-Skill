#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, n, mx, diff; 
	for (cin >> t; t--;) {
		cin >> a >> b >> c >> n;
    	mx = max({a, b, c});
    	diff = 3 * mx - a - b - c;  // Rút gọn tính toán diff
		cout << (n >= diff && (n - diff) % 3 == 0 ? "YES\n" : "NO\n");
	}
}
