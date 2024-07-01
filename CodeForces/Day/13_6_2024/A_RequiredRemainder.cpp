#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int x,y,n; cin>>x>>y>>n;
 		//k%x == y <=> k = m.x + y

 		int m = (n-y)/x;
 		//k==
 		cout<<m*x + y<<endl;
    }
    return 0;
}