// Hey stalker :)
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
    string ans = "";
    bool flag = true;
    vector<pair<int, int>> vec;
    map<int, int> mpp;
    set<int> set;

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpp[a[i]]++;
    }
    int temp = (n + 1) / 2;
    for (auto it : mpp)
    {
        if (it.second > temp)
        {
            no;
            return;
        }
    }
    yes;
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