#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		set<int> se;
 		for(int i=0; i<n; i++){
 			int x; cin>>x;
 			se.insert(x);
 		}
 		if (n!=se.size()) cout<<"NO"<<endl;
 		else cout<<"YES"<<endl;
    }
    return 0;
}