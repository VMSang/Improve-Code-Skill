#include <bits/stdc++.h>

using namespace std;
#define int64 int64_t


int main() {
    ios::sync_with_stdio(false);

    int w; cin >> w;
    while(w--){
        int64 n; cin >> n;
        int64 res = 0;
        while(n > 1){
            res += n;
            n /= 2;
        }
        cout << res + 1 << "\n";
    }
}
