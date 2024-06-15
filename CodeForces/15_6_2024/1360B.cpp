#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		} 		

		sort(v.begin(), v.end());

		int MINdis = INT_MAX;
		for(int i=0; i<n-1; i++){
			MINdis = min(MINdis, abs(v[i] - v[i+1]));
		}		
    	cout<<MINdis<<endl;
    }
    return 0;
}

