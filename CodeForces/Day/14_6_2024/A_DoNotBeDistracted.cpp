#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		string s; cin>>s;
 		unordered_set<char> se;
 		se.insert(s[0]);
 		bool flag = 0;
 		for(int i=1; i<n; i++){
            if(s[i] == s[i-1]) continue;
 			if(se.find(s[i]) != se.end()){
                flag = 1;
                break;
 			} else {
                se.insert(s[i]);
            }
 		}

 		if(flag == 1){
            cout<<"NO"<<endl;
 		} else {
            cout<<"YES"<<endl;
 		}

    }
    return 0;
}
