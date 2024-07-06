#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
typedef long long ll;
#define all(x) x.begin(), x.end()
#define sz(s) (int)(s.size())
const ll N = 1e5 + 5;

void Provely() {
    int cnt1=0,cnt2=0;
    char arr[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cnt1=0;
            cnt2=0;
            if(arr[i][j]=='#')cnt1++;else cnt2++;
            if(arr[i][j+1]=='#')cnt1++;else cnt2++;
            if(arr[i+1][j]=='#')cnt1++;else cnt2++;
            if(arr[i+1][j+1]=='#')cnt1++;else cnt2++;
            if(cnt1>=3||cnt2>=3){
                cout<<"YES";return;
            }
        }
    }
    cout<<"NO";


}

int main() {
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 1;
 //   cin >> T;
    while (T--) {
        Provely();
    }
}
