#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int t; cin>>t;
 	string z = "codeforces";
 	while(t--){
 		char s; cin>>s;
 		bool flag = 0;
 		for(int i=0; i<z.size(); i++){
 			if(s == z[i]){
 				cout<<"YES"<<endl;
 				flag = 1;
 				break;
 			} 
 		}
 		if(flag == 0)
 			cout<<"NO"<<endl;
 	}   
    return 0;
}