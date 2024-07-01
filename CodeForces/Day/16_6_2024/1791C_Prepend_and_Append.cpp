#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
 		string s; cin>>s;
 		int cnt = s.size();
		int i = 0, j = s.size() - 1;
		for (; i <= j; i++, j--) {
		    if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')) {
		        cnt -= 2;
		    } else {
		    	break;
		    }
		}
 		cout<<cnt<<endl;
    }
    return 0;
}