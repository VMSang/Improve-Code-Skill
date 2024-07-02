#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        vector<int> indices;
        indices.push_back(0);
        for (int i = 1; i <= n; i++)
            if (s[i - 1] == 'R')
                indices.push_back(i);
        indices.push_back(n + 1);
        int ans = 0;
        for (int i = 0; i < indices.size() - 1; i++)
            ans = max(ans, indices[i + 1] - indices[i]);
        cout << ans << "\n";
    }
    return 0;
}