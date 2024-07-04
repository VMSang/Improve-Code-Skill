#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ts; cin >> ts;
	while (ts--) {
		int card;
		cin >> card;

		multiset<int> bonusCard;
		long long sumPower = 0;

		for (int i = 0; i < card; i++) {
			int x; cin >> x;
			if (x != 0) {
					bonusCard.insert(x);
			}
			else if (bonusCard.size() != 0) {
				auto it = prev(bonusCard.end());
				sumPower += *it;
				bonusCard.erase(it);
			}
		}
		cout << sumPower << endl;
	}
	return 0;
}