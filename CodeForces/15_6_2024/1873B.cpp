#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		vector<int> v(n);
 		int MIN = INT_MAX;
 		int idx = 0;
 		for(int i=0; i<n; i++){
 			cin>>v[i];
 			if(MIN > v[i]){
 				MIN = v[i];
 				idx = i;
 			}
 		}
 		v[idx]++;
 		long long sum = 1;
 		for(int i=0; i<n; i++){
 			sum*=v[i];
 		}
 		cout<<sum<<endl;
    }
    return 0;
}