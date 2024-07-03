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
    long long ans = 0;
    bool flag = false;
    vector<pair<int, int>> vec;
    map<int, int> mpp;
    set<int> set;

    int n;
    cin >> n;
    vector<int> first, second, third;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            first.push_back(a[i]);
        }
        if (a[i] > 0)
        {
            second.push_back(a[i]);
        }
        if (a[i] == 0)
        {
            third.push_back(a[i]);
        }
    }
    if (second.size() == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            second.push_back(first.back()), first.pop_back();
        }
    }
    if (first.size() % 2 == 0)
    {
        third.push_back(first.back());
        first.pop_back();
    }
    cout << first.size() << " ";
    for (auto it : first)
    {
        cout << it << " ";
    }
    cout << "\n";
    cout << second.size() << " ";
    for (auto it : second)
    {
        cout << it << " ";
    }
    cout << "\n";
    cout << third.size() << " ";
    for (auto it : third)
    {
        cout << it << " ";
    }
    cout << "\n";
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
        // cout<<"Case #"<<ans<<":"<<' ';
        solve();
        // cout<<'\v';
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\v";
}