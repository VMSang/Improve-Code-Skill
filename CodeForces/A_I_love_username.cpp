#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n, cnt = 0, MAX = INT_MIN, MIN = INT_MAX; cin>>n;
 	int k; cin>>k;
 	MAX = max(MAX, k);
 	MIN = min(MIN, k);
 	n--;
 	while(n--){
 		int t; cin>>t;
 		if(t > MAX || t < MIN) cnt++;
 		MAX = max(MAX, t);
 		MIN = min(MIN, t);
 	}   
 	cout<<cnt;
    return 0;
}