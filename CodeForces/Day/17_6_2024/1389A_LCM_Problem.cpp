#include <bits/stdc++.h>
using namespace std;

// lcm của hai số liền kề nhau chính bằng tích của hai số đó

int main() {
    int t; cin>>t;
    while(t--){
 		int l, r; cin>>l>>r;
 		if(2*l > r) cout<<"-1 -1"<<endl;
 		else cout<<l<<" "<<2*l<<endl;
 	}
    return 0;
}