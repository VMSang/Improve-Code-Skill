#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	int round = 1;
    	while(round*10 <= n){
    		round *= 10;
    	}
    	cout<<n - round<<endl;
    }
    return 0;
}