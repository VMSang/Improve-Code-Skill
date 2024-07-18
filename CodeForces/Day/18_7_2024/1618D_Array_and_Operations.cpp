#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        long long a[n];
		long long ans=0;
        for (int i = 0; i < n; i++){ 
            cin >> a[i];
			ans+=a[i];
        }
		sort(a,a+n);
		int i=n-2*k;
		for(int j=0;j<k;j++){
			ans-=(a[i]+a[i+k]);
            ans+=(a[i]/a[i+k]);
			i++;
		}
		cout<<ans<<endl;
	}
}
