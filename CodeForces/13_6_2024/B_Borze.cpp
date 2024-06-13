#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '.'){
            cout<<0;

            continue;
        }
        if(s[i] == s[i+1]){
            cout<<2;
            i++;
        } else {
            cout<<1;
            i++;
        }
    }
    return 0;
}
