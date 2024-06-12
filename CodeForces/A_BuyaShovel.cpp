#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int k, r; cin>>k>>r;
 	int i, cal = 0;
 	for(i=1; true ; i++){
 		cal += k;
 		if((cal%10) == r || (cal%10) == 0) break;
 	}   
 	cout<<i;
    return 0;
}