#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
    	vector<char> v;
 		for(int i=0; i<8; i++){
 			string s; cin>>s;
 			for(int j=0; j<8; j++){
 				if(s[j]!='.') v.push_back(s[j]);
 			}
 		}       
 		for(char x : v){
 			cout<<x;
 		}
 		cout<<endl;
    }
    return 0;
}