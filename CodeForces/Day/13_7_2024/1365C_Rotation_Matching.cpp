#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 2e5 + 5;

int n;
int a[N], b[N], pos[N];
map< int, int > offset;

int32_t main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		pos[a[i]] = i;
	}
	for(int i = 1; i <= n; i++)
		cin >> b[i];
	for(int i = 1; i <= n; i++)
	{
		int cur = pos[b[i]] - i;
		if(cur < 0)
			cur += n;
		offset[cur]++;
	}
	int ans = 0;
	for(auto &it:offset)
		ans = max(ans, it.second);
	cout << ans;
	return 0;
}