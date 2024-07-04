#include <iostream>
#include <set>
using namespace std;
char a[100010];
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		long long res = 0;
		set<int> nums;
		for (int i = 1; i <= n; i++)
		{
			nums.insert(a[i]);
			res += nums.size();
		}
		cout << res << '\n';
	}
	return 0;
}