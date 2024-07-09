#include<algorithm>
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
typedef long long ll;
#define all(a) a.begin(), a.end()

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	unordered_map<string, int> m;
	int n; cin >> n;
	string s, ok = "OK\n";
	while (n--) {
		cin >> s;
		if (m.find(s) != m.end()) {
			++m[s];
			cout << s << m[s] << '\n';
		}
		else {
			m[s] = 0;
			cout << ok;
		}
	}
}