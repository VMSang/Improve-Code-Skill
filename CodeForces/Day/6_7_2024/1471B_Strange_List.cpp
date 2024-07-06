#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long

#pragma G++ optimize(2)
//#define ll long long

int jud1[100008], jud2[100008];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int t, n, x, out;
    cin >> t;
    while (t--) {
        out = 0;
        cin >> n >> x;
        bool jud = false;
        for (int i = 1; i <= n; ++i) {
            cin >> jud1[i];
            jud2[i] = jud1[i];
            out += jud1[i];
        }

        while (true) {
            for (int i = 1; i <= n; ++i) {
                if (jud2[i] % x) {
                    jud = true;
                    break;
                }
                out += jud1[i];
                jud2[i] /= x;
            }
            if (jud){
                break;
            }
        }
        cout << out << endl;
    }

    return 0;
}

 	  		 		  	  			 	 	   			 		