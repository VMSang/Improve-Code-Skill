#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		vector<int> v(n);

 		for(int &x : v){
 			cin>>x;
 		}

 		sort(v.begin(), v.end());

 		int cnt = 0;
 		for(int i=0; i != n/2; i++){
 			cnt+= v[n - 1 - i] - v[i];
 		}
 		cout<<cnt<<endl;
    }
    return 0;
}