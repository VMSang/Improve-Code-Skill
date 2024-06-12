#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int t; cin>>t;
 	while(t--){
 		int n; cin>>n;
 		int cnt;
 		if (n == 1 || n == 2){
 			cout<<0<<endl;
 			continue;
 		}
 		if(n%2==0)
 			cnt = n/2 - 1;
 		else
 			cnt = n/2;
 		cout<<cnt<<endl;
 	}   
    return 0;
}