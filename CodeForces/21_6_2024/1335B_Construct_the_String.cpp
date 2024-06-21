//i < b thì i%b == 0....->....b
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
        int n, a, b; cin>>n>>a>>b;
        string s;
        for(int i=0; i<n; i++){
            s += 'a' + i%b;
        }
        cout<<s<<endl;
    }
    return 0;
}