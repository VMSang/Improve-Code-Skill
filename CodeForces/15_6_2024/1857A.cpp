#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		int s = 0; vector<int> a(n);
 		for(int i=0; i<n; i++){
 			cin>>a[i];
 			s+=a[i];
 		}
 		if (s%2 == 0) cout<<"YES\n";
 		else cout<<"NO\n";
    }
    return 0;
}