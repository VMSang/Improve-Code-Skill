#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	string s;
 	cin>>s;
 	multiset<int> se;

 	for(int i=0; i<s.size(); i++){
 		if(isdigit(s[i])){
 			se.insert(s[i] - '0');
 		}
 	}

 	bool flag = false;
 	for(int x : se){
 		if(flag)
 			cout<<"+";
 		cout<<x;
 		flag = true;
 	}   
    return 0;
}