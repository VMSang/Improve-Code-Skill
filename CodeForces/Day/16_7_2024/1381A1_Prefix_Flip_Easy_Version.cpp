#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a, b;
		cin >> a;
		cin >> b;
		int count = 0;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (a[0] != b[n - i - 1]) {
				count++;
				v.push_back(n - i);
				for (int j = 0; j < n - i; j++) {
					a[j] = '1' - a[j] + '0';
				}
				reverse(a.begin(), a.begin() + n - i);
			}
			else {
				a[0] = '1' - a[0] + '0';
				v.push_back(1);
				v.push_back(n - i);
				for (int j = 0; j < n - i; j++) {
					a[j] = '1' - a[j] + '0';
				}
				reverse(a.begin(), a.begin() + n - i);
				count += 2;
			}
		}
		cout << v.size() << " ";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		} cout << endl;
	}
}
