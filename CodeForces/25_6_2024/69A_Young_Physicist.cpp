#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numVector; cin>>numVector;
    int sumx = 0, sumy = 0, sumz = 0;
    
	for(int i=0; i<numVector; i++){
		int x,y,z;
		cin>>x>>y>>z;

		sumx += x;
		sumy += y;
		sumz += z;
	}

	(sumx || sumy || sumz) ? cout<<"NO" : cout<<"YES";
    return 0;
}