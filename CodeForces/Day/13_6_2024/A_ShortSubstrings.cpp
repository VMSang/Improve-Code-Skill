#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		string s; cin>>s;
 		vector<char> v;
 		v.push_back(s[0]);
 		v.push_back(s[1]); 
 		for(int i=2; i<s.size(); i+=2){
 			string sub = s.substr(i, 2);
 			v.push_back(sub[1]);
 		}
 		for(char x : v){
 			cout<<x;
 		}
 		cout<<endl;
    }
    return 0;
}