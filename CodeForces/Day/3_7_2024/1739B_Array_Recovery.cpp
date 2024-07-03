#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++){
        cin >> d[i];
    }
    vector<int> a(n);
    a[0] = d[0];
    for (int i = 1; i < n; i++){
        if (d[i] != 0 && d[i] <= a[i - 1]){
            cout << -1 << endl;
            return;
        }
        else{
            a[i] = a[i - 1] + d[i];
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}