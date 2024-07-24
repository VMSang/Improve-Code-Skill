#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 2e5 + 5;
int n, m;
vector<int> adj[N];
bool vis[N];
vector<int> ans;
vector<int> v;
vector<int> cnt;
int res;

void dfs(int node) {
    if (node == 1 && ans[1] == 1) cnt[1] = 1;
    vis[node] = 1;
    if (cnt[node] > m) {
        return;
    }
    bool isLeaf = true;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (ans[it] == 0) cnt[it] = 0;
            else {
                cnt[it] = cnt[node] + ans[it];
            }
            v.push_back(it);
            isLeaf = false;
            dfs(it);
            v.pop_back();
        }
    }
    if (isLeaf) {
        res++;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    ans.resize(n + 1);
    cnt.resize(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> ans[i];
    }
    for (int i = 1; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);
    cout << res << endl;
    return 0;
}
