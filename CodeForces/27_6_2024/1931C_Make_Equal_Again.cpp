#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin>>ts;
    while(ts--){
 		int n; cin>>n;
 		vector<int> v(n);
 		for(int &x : v){
 			cin>>x;
 		}

 		int it1 = 0, it2=0;	       
 		while(it1 < n && v[it1] == v[0]){
 			it1++;
 		}
 		while(it2 < n && v[n-1-it2] == v[n-1]){
 			it2++;
 		}

 		int ans = n;
 		if(v[0] == v[n-1]){
 			ans = n - (it1 + it2);
 		} else {
 			ans = n - max(it1, it2);
 		}

 		cout<<max(ans, 0)<<endl;
    }
    return 0;
}