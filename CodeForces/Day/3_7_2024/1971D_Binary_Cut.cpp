#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin>>ts;
    while(ts--){
 		string s; cin>>s;
 		int result = 1; // "each character must lie in exactly one of the pieces"
 		bool has01 = false;

 		for(size_t i=0; i+1<s.size(); i++){
 			if(s[i] != s[i+1]) 
 				result ++;
 			has01 |= (s[i] == '0' && s[i+1] == '1');
 		}

 		cout<<result-has01<<endl;
    }
    return 0;
}