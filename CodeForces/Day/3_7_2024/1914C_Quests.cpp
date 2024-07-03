#include<bits/stdc++.h>
#define endl '\n'
#define pb push_back
using ll = long long;
const int inf = 1e5 + 7;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie();

    ll t;
    cin >> t;
    while(t--){
        ll n, k, sum = 0, ans = 0, mx = 0;
        cin >> n >> k;
        ll a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < min(n, k); i++){
            sum += a[i];
            mx = max(mx, b[i]);
            ans = max(ans, sum + mx * (k - i - 1));
        }
        cout << ans << endl;
    }

}