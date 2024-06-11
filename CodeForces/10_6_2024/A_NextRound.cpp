#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n, k, cnt = 0, pass = 0;
 	cin>>n>>k;
 	
 	for(int i=1; i<=n; i++){
 		int x; cin>>x;

 		if (i == k)
 			pass = x;

 		if (x >= pass && x != 0)
 			cnt++;
 	}

 	cout<<cnt;
 	return 0;
}