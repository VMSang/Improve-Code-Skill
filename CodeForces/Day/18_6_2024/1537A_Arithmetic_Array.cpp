#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		vector<int> v(n);
 		int sumUp = 0;
 		for(int i=0; i<n; i++){
 			cin>>v[i];
 			sumUp+= v[i];
 		}
 		if(sumUp > n) cout<<sumUp - n<<endl;
 		else if(sumUp < n) cout<<1<<endl;
 		else cout<<0<<endl;
    }
    return 0;
}