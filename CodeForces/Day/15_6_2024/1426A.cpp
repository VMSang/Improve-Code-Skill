#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n, x; cin>>n>>x;

 		if(n<3){
 			cout<<1<<endl;
 		} else {
 			int floor = (n-2)/x;
 			if ((n-2) % x == 0) cout<<floor + 1<<endl;
 			else cout<<floor+2<<endl;
 		}
    }
    return 0;
}