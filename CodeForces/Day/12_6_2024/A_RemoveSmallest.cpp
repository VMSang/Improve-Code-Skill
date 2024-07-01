#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int t; cin>>t;
 	while(t--){
 		int n; cin>>n;
 		vector<int> v(n);
 		for(int i=0; i<n; i++){
 			cin>>v[i];
 		}
 		sort(v.begin(), v.end());
 		bool flag = 0;
 		for(int i=0; i<n-1; i++){
 			if(v[i+1] - v[i] > 1){
 				flag = 1;
 				break;
 			}
 		}
 		if (flag != 0) cout<<"NO"<<endl;
 		else cout<<"YES"<<endl;
 	}   
    return 0;
}