#include <bits/stdc++.h>
using namespace std;

int cntA[200001];

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> v(n);

        fill(cntA, cntA + 200001, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            cntA[v[i]]++;
        }

        int maxV = -1;
        for (int i = 0; i < n; i++) {  // Iterate through the actual values in v
            if (cntA[v[i]] >= 3 && v[i] > maxV) { 
                maxV = v[i];
            }
        }

        cout << maxV << endl;
    }
    return 0;
}
