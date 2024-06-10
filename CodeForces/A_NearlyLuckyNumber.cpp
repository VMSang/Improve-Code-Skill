#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	string s; cin>>s;
 	int cnt = 0;
 	//dem
 	for(char x : s){
 		if (x == '4' || x == '7'){
 			cnt++;
 		}
 	}   

 	//check cnt 
 	if (cnt == 4 || cnt == 7){
 		cout<<"YES";
 	} else {
 		cout<<"NO";
 	}
    return 0;
}