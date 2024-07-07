#include "bits/stdc++.h"
using namespace std;

#define MOD 1000000007

#define by_DevanshuSharma        \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

#define no cout << "NO\n";
#define yes cout << "YES\n";

void solve()
{
    int ans = 0;
    bool flag = true;
    vector<int> vec;
    map<int, int> mpp;
    set<int> set;

    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            sum++;
        }
    }
    if (sum == n)
    {
        cout << n - 1;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int one = 0, zero = 0;
            for (int k = i; k <= j; k++)
            {
                if (a[k] == 0)
                {
                    zero++;
                }
                else
                {
                    one++;
                }
                ans = max(ans, sum - one + zero);
            }
            ans = max(ans, sum - one + zero);
        }
    }
    cout << ans;
}

int main()
{
    by_DevanshuSharma
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1, t = 0;
    // cin >> T;
    while (t++ < T)
    {
        // cout<<"Case #"<<t<<":"<<' ';
        solve();
        // cout<<'\n';
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}