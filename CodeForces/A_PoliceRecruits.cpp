#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int event; cin>>event;
 	int ready = 0, cnt = 0;
 	while(event--){
 		int k; cin>>k;
 		if(k >= 1 && k <= 10){
 			ready+=k;
 		} else {
 			ready--;
 		}
 		if (ready<0){
 			cnt++;
 			ready = 0;
 		}
 	}   
 	cout<<cnt;
    return 0;
}