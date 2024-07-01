#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
		int n; cin>>n;
		vector<int> v(n);
		int MIN = INT_MAX;
		for(int &x : v){
			cin>>x;
			MIN = min(MIN, x);
		}
		int sum = 0;
		for(int x : v){
			sum += x - MIN;
		}
		cout<<sum<<endl;
    }
    return 0;
}