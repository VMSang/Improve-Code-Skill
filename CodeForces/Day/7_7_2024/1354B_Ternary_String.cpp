#include<bits/stdc++.h>

using namespace std;

char buf[200043];

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%s", buf);
		string s = buf;
		int ans = int(1e9);
		int n = s.size();
		vector<pair<char, int> > c;
		for(auto x : s)
		{
			if(c.empty() || c.back().first != x)
				c.push_back(make_pair(x, 1));
			else
				c.back().second++;
		}
		int m = c.size();
		for(int i = 1; i < m - 1; i++)
			if(c[i - 1].first != c[i + 1].first)
				ans = min(ans, c[i].second + 2);
		if(ans > n)
			ans = 0;
		printf("%d\n", ans);
	}
}