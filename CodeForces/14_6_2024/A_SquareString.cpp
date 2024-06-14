#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;
    while(t--){
 		string s; cin>>s;

 		string l = s.substr(0, s.size()/2);
 		string r = s.substr(s.size()/2, s.size());
 		
 		if(s.size() % 2 == 0 &&  l == r) cout<<"YES"<<endl;
 		else cout<<"NO"<<endl;
    }
    return 0;
}