#include <bits/stdc++.h>
using namespace std;

#define int long long

int solve(){
    int n; 
    cin >> n;
    cout << n/2 + n % 2 << endl;
    int l = 1, r = 3*n;
    while(l < r){
        cout << l << " " << r << endl;
        l += 3;
        r -= 3;
    }
    return 0;
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
