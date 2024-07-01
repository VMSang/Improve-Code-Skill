#include <bits/stdc++.h>
using namespace std;

bool check(int n){
	if(n<2) return false;
	if(n==2 || n ==3) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i=5; i*i <= n; i+=6){
		if (n%i == 0 || n%(i+2) == 0) return false;
	}
	return true;
}
int main() {    
 	int n, m; cin>>n>>m;
 	if (n==2 && m==3) {
 		cout<<"YES";
 		return 0;
 	} else if (n==2 && m !=3) {
 		cout<<"NO";
 		return 0;
 	}
 	bool flag = 0;
 	for(int i=n+2; i<m; i+=2){
 		 if (check(i)){
 		 	flag = 1;
 		 	break;
 		 }
 	}
 	if(flag == 1) cout<<"NO";
 	else if(check(m)) {
 		cout<<"YES";
 	} else cout <<"NO";
    return 0;
}