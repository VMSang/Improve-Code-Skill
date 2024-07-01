#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		int cnt = 0, Max = 0;
 		vector<int> v(n);
 		for(int i=0; i<n; i++){
 			cin>>v[i];
 			if(v[i] == 1){
 				cnt = 0;
 			} else {
 				cnt++;
 				Max = max(cnt, Max);
 			}
 		}
 		cout<<Max<<endl;
    }
    return 0;
}