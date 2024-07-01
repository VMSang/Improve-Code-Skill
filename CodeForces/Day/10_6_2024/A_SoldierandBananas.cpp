#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int k, n, w, cnt = 0; cin>>k>>n>>w;

 	for(int i=1; i<=w; i++){
 		cnt+=i;	   
 	}
 	int sum = k*cnt;
 	if ((sum - n) > 0){
 		cout<<sum - n;
 	} else {
 		cout<<0;
 	}
    return 0;
}