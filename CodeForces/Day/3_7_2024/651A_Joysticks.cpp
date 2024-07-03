// By the name of Allah, Most Gracious, and Merciful
#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(), v.end()
#define int long long
using namespace std;

const int M = 1e9+7;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 


void solve() {
    int a1 , a2;
    cin >> a1 >> a2;
    int ans = 0;
    while(a1 > 0 && a2 > 0){
    	if(a1 == 1 && a2==1){
    		break;
		}
    	if(a1 < a2){
    		a1 ++;
    		a2-=2;
		}else{
			a2++;
			a1-=2;
		}
		ans++;
	}
	cout << ans << "\n";
}


signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
