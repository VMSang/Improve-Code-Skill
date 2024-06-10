#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	string s; cin>>s;
 	int cntL = 0, cntU = 0;
 	for(size_t i=0; i<s.size(); i++){
 		if (islower(s[i])){
 			cntL++;
 		} else {
 			cntU++;
 		}
 	}
 	if (cntL >= cntU){
 		transform(s.begin(), s.end(), s.begin(), ::tolower);
 	} else {
 		transform(s.begin(), s.end(), s.begin(), ::toupper);
 	}
 	cout<<s;
 	return 0;
}