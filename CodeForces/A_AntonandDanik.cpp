#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n; cin>>n;
 	string s; cin>>s;
 	int cntaA = 0, cntD = 0;
 	for(char x : s){
 		if (x == 'A'){
 			cntaA++;
 		} else {
 			cntD++;
 		}
 	}   
 	if (cntaA > cntD){
 		cout<<"Anton";
 	} else if (cntaA < cntD) {
 		cout<<"Danik";
 	} else {
 		cout<<"Friendship";
 	}
    return 0;
}