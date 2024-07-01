#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int x, cnt = 0; cin>>x;

 	while(1){
 		if(x>=5){
 			cnt++;
 			x-=5;
 		} else {
 			cnt++;
 			break;
 		}
 		if(x < 1){
 			break;
 		}
 	}	   
 	cout<<cnt;
    return 0;
}