#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n, cnt = 0; cin>>n;
        string s; cin>>s;
        unordered_set<char> se;
        for(int i=0; i<n; i++){
            if(se.find(s[i]) != se.end()){
                cnt+=1;
            } else {
                cnt+=2;
                se.insert(s[i]);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
