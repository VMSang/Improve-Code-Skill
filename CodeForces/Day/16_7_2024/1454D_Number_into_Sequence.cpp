#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		set<ll > s;
		ll x = n;
		for (ll i = 2; i * i <= x; i++)
		{
			while (x % i == 0)
			{
				x /= i;
				s.insert(i);
			}
		}
		if (x > 1)
			s.insert(x);

		map < ll, vector< ll> > m;
		pair<ll, ll> mx = { 0, 0 };
		for (auto it : s)
		{	x = n;
			while (x % it == 0)
			{

				m[it].push_back(it);
				x /= it;
			}
			if (x > 1)
				m[it].push_back(x);
			if (mx.first < m[it].size())
			{
				mx.first = m[it].size();
				mx.second = it;
			}
		}


		if (mx.first == 1)

			cout << 1 << endl << n << endl;
		else
		{
			if (s.size() == 1)
				cout << mx.first  << endl;
			else
				cout << mx.first - 1 << endl;
			ll c = 0;
			ll p = 1;
			for (auto i : m[mx.second])
			{
				if (c < mx.first - 2)
				{
					cout << i << " ";
				}
				else
					p *= i;
				c++;
			}
			if ((p / mx.second) % mx.second == 0)
				cout << p / mx.second << " " << p / mx.second << endl;
			else
				cout << p << endl;
		}
	}

	return 0;
}

