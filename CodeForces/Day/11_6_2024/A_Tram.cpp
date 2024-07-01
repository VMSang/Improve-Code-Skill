#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n; cin>>n;
 	int MAX = INT_MIN, remain = 0;
 	while(n--){
 		int a, b; cin>>a>>b;
 		remain = b - a + remain;
 		MAX = max(MAX, remain);
 	}   
 	cout<<MAX;
    return 0;
}