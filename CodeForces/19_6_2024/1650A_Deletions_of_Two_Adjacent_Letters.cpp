#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		string s; cin>>s;
        char c; cin>>c;
        bool flag = false;

        for(size_t i = 0; i<s.size(); i++){
            if(s[i] != c){
                continue;
            }
            if(i % 2 == 0) {
                flag = true;
                break;
            }
        }

        if(flag == true) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}