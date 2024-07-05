#define chatgpt3_5 "bits/stdc++.h"
#define chatgpt4 "bits/extc++.h"

#include chatgpt3_5

using namespace std;

//#define FLOATING_OCEAN

#define int long long
#define pii pair<int, int>
#define pipi pair<pii, pii>
#define tpi tuple<int, int, int>
#define fs first
#define sc second
#define pb emplace_back
#define ep emplace
#define rall(x) (x).rbegin(),(x).rend()
#define all(x) (x).begin(),(x).end()

constexpr int N = 2e5 + 10, M = 2e5 + 10, mod = 1e9 + 7, inf = 0x3f3f3f3f3f3f3f3f;
const double eps = 1e-9, PI = acos(-1);

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(i + 1 < n && (s[i + 1] < s[0] && s[i + 1] <= s[i])) continue;
        for(int j=0;j<=i;j++) cout << s[j];
        for(int j=i;j>=0;j--) cout << s[j];
        cout << '\n';
        return;
    }
    cout << s;
    reverse(all(s));
    cout << s;
    cout << '\n';
}

signed main() {
# ifdef FLOATING_OCEAN
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
# endif
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // init();
    int t = 1;
    cin >> t;
    while (t--) solve();
}