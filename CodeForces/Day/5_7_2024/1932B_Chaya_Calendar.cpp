#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
#define Mohab ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define el '\n'
#define int ll

void RRR() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i: vec)cin >> i;
    int pass = vec.front();
    for (int i = 1; i < n; ++i) {
        int l = 1, r = 1e10;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if ((vec[i] * mid) < pass)
                l = mid + 1;
            else
                r = mid - 1;
        }
        if(l*vec[i]==pass)l++;
        pass = max(pass, l * vec[i]);
    }
    cout << pass<<el;

}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Mohab
    int T = 1;
    cin >> T;
    while (T--)
        RRR();
}