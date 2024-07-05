#include <bits/stdc++.h>
const long long inf = 1e9 +7;
const int maxN = 1e5 +7;
using namespace std;
int n;
void solve(){
    cin >> n;
    vector <int> a(n+1);
    for (int i =1; i<=n; i++)
        cin >> a[i];
    reverse(a.begin()+1, a.end());
    int ans = 0, x =1;
    while (x<n){
        if (a[x+1] ==  a[1]){
            x ++;
            continue;
        }
        ans ++;
        x *= 2;
    }
    cout << ans <<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
