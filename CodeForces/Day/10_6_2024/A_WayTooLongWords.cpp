#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n; cin>>n;
 	while(n--){
 		string s; cin>>s;
 		if(s.size() > 10){
 			cout<<s[0]<<s.size()-2<<s[s.size() - 1];
 		} else {
 			cout<<s;
 		}
 		cout<<endl;
 	}   
    return 0;
}